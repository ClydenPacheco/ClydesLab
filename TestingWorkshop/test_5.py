from selenium import webdriver
from selenium.webdriver.common.by import By
import time

# Launch web brower
chrome_browser = webdriver.Chrome()
chrome_browser.maximize_window()

# Open a google.com
chrome_browser.get("https://www.google.com/")

# Type text into the search bar
google_search_bar = chrome_browser.find_element(By.CLASS_NAME, "gLFyf")
google_search_bar.click()
google_search_bar.send_keys("Koenigsegg")

# Click the google search button
google_search_button = chrome_browser.find_element(By.CLASS_NAME, "gNO89b")
google_search_button.click()
time.sleep(2)

# Close the browser
chrome_browser.close()