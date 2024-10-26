from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.action_chains import ActionChains
import time

class MonkeytypeTyper:

    def __init__(self):
        self.driver = webdriver.Chrome()
    
    def initial_setup(self):
        self.driver.maximize_window()
        self.driver.get("https://monkeytype.com/")
        self.driver.find_element(By.CLASS_NAME, "rejectAll").click()
        time.sleep(5)
    
    def typer_function(self):
        paragraph  = self.driver.find_element(By.ID, "words")
        words = paragraph.find_elements(By.TAG_NAME, "div")
        for word in words:
            letters = word.find_elements(By.TAG_NAME, "letter")
            for letter in letters:
                fresh_letter = letter.text
                ActionChains(self.driver).send_keys(fresh_letter).perform()
            ActionChains(self.driver).send_keys(" ").perform()
    
    def motor_function(self):
        self.initial_setup()
        self.typer_function()

if __name__ == "__main__":
    m = MonkeytypeTyper()
    m.motor_function()