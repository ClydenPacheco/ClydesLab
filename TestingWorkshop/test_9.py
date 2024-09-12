from selenium import webdriver
from selenium.webdriver.common.by import By

# Launch the web browser
chrome_browser = webdriver.Chrome()
chrome_browser.maximize_window()

# Load the website in the browser
chrome_browser.get("https://cosmocode.io/automation-practice-webtable/")

# Find the table element
table = chrome_browser.find_element(By.ID, "countries")
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
chrome_browser.quit()