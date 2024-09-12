from selenium import webdriver
from selenium.webdriver.common.by import By
import time

# Initialize Chrome browser and maximize the window
chrome_browser = webdriver.Chrome()
chrome_browser.maximize_window()

# Open the automationtetsing website
chrome_browser.get("https://demo.automationtesting.in/Register.html")

# Select the "Male" radio button
male_radio_button = chrome_browser.find_element(By.CSS_SELECTOR, "input[name='radiooptions'][value='Male']")
male_radio_button.click()

# Select the "Movies" checkbox
movies_checkbox = chrome_browser.find_element(By.ID, "checkbox2")
movies_checkbox.click()
time.sleep(1)

# Close the browser
chrome_browser.close()