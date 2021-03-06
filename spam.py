import pyautogui, time
time.sleep(10)
f = """First Steps
To get the most out of Visual Studio Code, start by reviewing a few introductory topics:

Intro Videos - Begin your journey with VS Code through these introductory videos.

Setup - Install VS Code for your platform and configure the tool set for your development needs.

User Interface - Introduction to the basic UI, commands, and features of the VS Code editor.

Settings - Customize VS Code for how you like to work.

Languages - Learn about VS Code's support for your favorite programming languages.

Node.js - This tutorial gets you quickly running and debugging a Node.js web app.

Tips and Tricks - Jump right in with Tips and Tricks to become a VS Code power user.

Azure - VS Code is great for deploying your web applications to the cloud.

Extension API - Learn how to write a VS Code extension.

Why VS Code? - Read about the design philosophy and architecture of VS Code.

Keyboard Shortcuts
Increase your productivity with VS Code's keyboard shortcuts.

Keyboard Shortcut Reference Sheet - Learn the commonly used keyboard shortcuts.

Keymap Extensions - Change VS Code's keyboard shortcuts to match another editor.

Customize Keyboard Shortcuts - Modify the default keyboard shortcuts.

Downloads
Download VS Code - Quickly find the appropriate install for your platform (Windows, macOS and Linux)

Privacy
By default, VS Code auto-updates to new versions, and collects usage data and crash report information. You may opt out of these defaults by disabling them as instructed below:

How do I disable auto update?

How do I disable crash reporting?

How do I disable usage reporting?

"""
for word in f:
    pyautogui.typewrite(word)
    if word == " ":
        pyautogui.press("enter")    
    
