from selenium import webdriver
from selenium.webdriver.common.by import By

# Launch the web browser
chrome_driver = webdriver.Chrome()
chrome_driver.maximize_window()

# Load the website in the browser
chrome_driver.get("https://cosmocode.io/automation-practice-webtable/")

# Find the table element
table = chrome_driver.find_element(By.ID, "countries")
body = table.find_element(By.TAG_NAME, "tbody")
rows = body.find_elements(By.TAG_NAME, "tr")

# Access the first row
first_row = rows[0]

# Find all cells in the first row
header_cells = first_row.find_elements(By.TAG_NAME, "td")

# Print the content of each cell in the first row (assumed headers)
for header in header_cells:
    print(header.text)

# Close the browser
chrome_driver.quit()