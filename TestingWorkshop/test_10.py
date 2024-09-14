from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions
import time

# Launch the browser
chrome_driver = webdriver.Chrome()
chrome_driver.maximize_window()

# Open the website in the browser
chrome_driver.get("https://computer-database.gatling.io/computers")

# Find the page pagination div
page_pagination_elements = chrome_driver.find_element(By.ID, "pagination")

# Find the number of pages
current_page_list_element = page_pagination_elements.find_element(By.CLASS_NAME, "current")
current_page_element = current_page_list_element.find_element(By.TAG_NAME, "a")
current_page_html = current_page_element.get_attribute("innerHTML")
splitted_elements = current_page_html.split(" ")
number_of_entries = int(splitted_elements[-1])
number_of_pages = int(number_of_entries / 10)

# Find laptop names from all pages
page_number = 0
all_page_laptop_names = []

while page_number <= number_of_pages:
    
    # Find the table rows
    table = chrome_driver.find_element(By.CLASS_NAME, "computers")
    table_body = table.find_element(By.TAG_NAME, "tbody")
    rows = table_body.find_elements(By.TAG_NAME, "tr")

    # Get the first column of each row and add to list
    for row in rows:
        all_columns = row.find_elements(By.TAG_NAME, "td")
        first_column = all_columns[0].text
        all_page_laptop_names.append(first_column)

    next_page_list_element = chrome_driver.find_element(By.CLASS_NAME, "next")
    next_button = next_page_list_element.find_element(By.TAG_NAME, "a")
    next_button.click()
        
    # Wait for the page to load the next set of results
    WebDriverWait(chrome_driver, 10).until(
        expected_conditions.presence_of_element_located((By.CLASS_NAME, "computers"))
    )

    page_number += 1

# Print all the collected laptop names across pages
print(f"All Laptop Names: {all_page_laptop_names}")
time.sleep(1)

chrome_driver.close()