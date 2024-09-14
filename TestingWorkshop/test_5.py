from selenium import webdriver
from selenium.webdriver.common.by import By
import time

# Launch web brower
chrome_driver = webdriver.Chrome()
chrome_driver.maximize_window()

# Open a google.com
chrome_driver.get("https://www.google.com/")

# Type text into the search bar
google_search_bar = chrome_driver.find_element(By.CLASS_NAME, "gLFyf")
google_search_bar.click()
google_search_bar.send_keys("Koenigsegg")

# Click the google search button
google_search_button = chrome_driver.find_element(By.CLASS_NAME, "gNO89b")
google_search_button.click()
time.sleep(2)

# Close the browser
chrome_driver.close()