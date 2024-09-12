from selenium import webdriver

# Launch a web browser
chrome_driver = webdriver.Chrome()
chrome_driver.maximize_window()

# Navigate to a URL
chrome_driver.get("https://practise.usemango.co.uk/")

# Close the web browser
chrome_driver.close()