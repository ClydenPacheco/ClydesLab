from selenium import webdriver
from selenium.webdriver.common.by import By
import time

# Taking inputs
table_number = int(input("Enter the table number: "))
row_number = int(input("Enter the row number: "))
column_number = int(input("Enter the column number: "))

# Launch the browser
chrome_driver = webdriver.Chrome()
chrome_driver.maximize_window

# Open the website to be tested
chrome_driver.get("https://the-internet.herokuapp.com/tables")

# Retrieving table data
table = chrome_driver.find_element(By.ID, f"table{table_number}")
table_body = table.find_element(By.TAG_NAME, "tbody")
rows = table_body.find_elements(By.TAG_NAME, "tr")
row_data = rows[row_number - 1].find_elements(By.TAG_NAME, "td")
print(row_data[column_number - 1].text)

time.sleep(2)

chrome_driver.close()