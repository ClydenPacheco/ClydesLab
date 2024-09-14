from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
import time

# Launch the web browser
chrome_driver = webdriver.Chrome()
chrome_driver.maximize_window()

# Load the website in the browser
chrome_driver.get("https://www.globalsqa.com/demo-site/sliders/#Steps")

# Find all iframes
iframes = chrome_driver.find_elements(By.TAG_NAME, "iframe")

# Switch to the required iframe
chrome_driver.switch_to.frame(iframes[4])

# Get the content of the iframe
#iframe_content = chrome_browser.page_source
# Print the content of the iframe
#print(iframe_content)

# Wait until the slider is visible
slider = chrome_driver.find_element(By.ID, "slider")

# Find the slider handle element
slider_handle = chrome_driver.find_element(By.CLASS_NAME, "ui-slider-handle")

# Create an action chain to move the slider
action = ActionChains(chrome_driver)

# Calculate the width of the slider to move it
slider_width = slider.size['width']
move_to = slider_width // 2

# Drag the slider handle to the 50% position
action.click_and_hold(slider_handle).move_by_offset(move_to, 0).release().perform()

# Get the value from the input field after moving the slider
amount_value = chrome_driver.find_element(By.ID, "amount").get_attribute("value")

# Print the value
print(f"The value displayed in the input is: {amount_value}")
time.sleep (1)

# Close the browser
chrome_driver.close()