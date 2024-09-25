from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.by import By
import time

# Set up WebDriver
driver = webdriver.Chrome(executable_path='path/to/your/chromedriver')

try:
    # Navigate to Google
    driver.get("http://www.google.com")

    # Wait for the page to load
    time.sleep(2)  # It's better to use explicit waits in a real scenario

    # Locate the search box
    search_box = driver.find_element(By.NAME, 'q')

    # Type in the search term
    search_box.send_keys('OpenAI')

    # Submit the search
    search_box.send_keys(Keys.RETURN)

    # Wait for search results to appear
    time.sleep(2)

    # Verify that results are shown
    assert "No results found." not in driver.page_source, "No results found!"

finally:
    # Close the browser window
    driver.quit()
