from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
import time

# Launch the web browser
chrome_browser = webdriver.Chrome()
chrome_browser.maximize_window()

# Load the website in the browser
chrome_browser.get("https://www.globalsqa.com/demo-site/sliders/#Steps")

# Find all iframes
iframes = chrome_browser.find_elements(By.TAG_NAME, "iframe")

# Switch to the required iframe
chrome_browser.switch_to.frame(iframes[4])

# Get the content of the iframe
#iframe_content = chrome_browser.page_source
# Print the content of the iframe
#print(iframe_content)

# Wait until the slider is visible
slider = chrome_browser.find_element(By.ID, "slider")

# Find the slider handle element
slider_handle = chrome_browser.find_element(By.XPATH, "//span[contains(@class, 'ui-slider-handle')]")

# Create an action chain to move the slider
action = ActionChains(chrome_browser)

# Calculate the width of the slider to move it to the 50% mark
slider_width = slider.size['width']
move_to = slider_width // 2  # Move to the midpoint (50%)

# Drag the slider handle to the 50% position
action.click_and_hold(slider_handle).move_by_offset(move_to, 0).release().perform()

# Get the value from the input field after moving the slider
amount_value = chrome_browser.find_element(By.ID, "amount").get_attribute("value")

# Print the value
print(f"The value displayed in the input is: {amount_value}")
time.sleep (1)

# Close the browser
chrome_browser.close()