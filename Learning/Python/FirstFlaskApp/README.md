### Commands on how I did this:
1. In terminal, I navigated to this folder and ran the command ```python -m venv venv```.<br>
```-m``` is for module, ```venv``` stands for virtual environment, and then you create a virtual environment named ```venv``` (The last "venv").
2. Next you have to activate the virtual environment, so mention the path of the activate file as follows ```.\venv\Scripts\activate```.<br>
    **Note**:
    - You may not be allowed to run this script because the Powershell's execution policy is set to restricted for running scripts. To fix this, open **Powershell** as **Administrator**, then run the following script: ```Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser```.
    - To reverse the policy, run ```Set-ExecutionPolicy -ExecutionPolicy Restricted -Scope CurrentUser```.
3. Upgrade pip within the virtual environment by running ```python -m pip install --upgrade pip```.
4. Install Flask by running ```python -m pip install flask```.
5. Now to run the application, run ```python -m flask --app .\app.py run```.
6. Press *Ctrl + C* to stop the server and run ```deactivate``` in terminal to stop the virtual environment.