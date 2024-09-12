from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select

# Initialize Chrome browser
chrome_browser = webdriver.Chrome()
chrome_browser.maximize_window()

# Open the webpage
chrome_browser.get("https://letcode.in/forms")

# Locate the select element
select_element = chrome_browser.find_elements(By.TAG_NAME, "select")

# Create a Select object for the dropdown
select = Select(select_element[1])

# Retrieve all options within the select element
all_options = select.options

# Print the text of each option
for option in all_options:
    print(option.text)

# Close the browser
chrome_browser.close()
