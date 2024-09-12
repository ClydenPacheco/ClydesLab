from selenium import webdriver
from selenium.webdriver.common.by import By

# Launch a web browser
chrome_driver = webdriver.Chrome()
chrome_driver.maximize_window()

# Navigate to a URL
chrome_driver.get("https://practise.usemango.co.uk/")

# To locate a browser element
print(chrome_driver.find_element(By.CLASS_NAME, "navbar-brand").text)

# Close the web browser
chrome_driver.close()