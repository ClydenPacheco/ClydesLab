from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select

# Launch Chrome browser
chrome_driver = webdriver.Chrome()
chrome_driver.maximize_window()

# Load the website to be tested
chrome_driver.get("https://testpages.herokuapp.com/styled/basic-html-form-test.html")

# Locate the dropdown menu
select = chrome_driver.find_element(By.TAG_NAME, "select")

# Create a select object for the dropdown
select_options = Select(select)

# Retrieve all options within the select element
all_options = select_options.options

# Print the ith element
i = 2
i = i - 1
print(all_options[i].text)

# Close the browser
chrome_driver.close()