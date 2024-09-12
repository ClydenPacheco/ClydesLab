from selenium import webdriver
from selenium.webdriver.common.by import By
import time

# Launch a web browser and maximize it
chrome_driver = webdriver.Chrome()
chrome_driver.maximize_window()

# Load the website in the browser
chrome_driver.get("https://practise.usemango.co.uk/")

# Identify the button to be clicked
show_more_button = chrome_driver.find_element(By.CLASS_NAME, "btn")
show_more_button.click()
time.sleep(1)

# Close the web browser
chrome_driver.close()