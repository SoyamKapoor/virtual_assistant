# Virtual Assistant Using C++

Welcome to the **Virtual Assistant** project! This is a **C++** program designed to simulate a voice-based virtual assistant. The assistant can interact with users, respond with voice output, perform tasks such as opening websites and programs, and provide information like the current time and date. It is designed to make tasks more accessible and streamline common actions on a computer.

## Features

1. **Voice Interaction**: The virtual assistant communicates with the user using text-to-speech functionality powered by `espeak`.
2. **Time-based Greetings**: The assistant wishes the user according to the time of day with personalized greetings like "Good Morning", "Good Afternoon", and "Good Evening".
3. **Password Authentication**: The assistant can only be accessed after entering the correct password, enhancing security.
4. **Opening Websites**: It can open popular websites like Google, YouTube, and Instagram based on user commands.
5. **Opening Applications**: The assistant can open programs like Notepad upon request.
6. **Date and Time**: The assistant provides the current date and time upon request.

## How It Works

The program is structured as a command-line virtual assistant that can:

- Greet the user based on the current time.
- Accept voice commands (text input) from the user.
- Perform specific actions like opening applications or websites based on predefined commands.
- Respond with voice output, making the interaction more engaging.

### Process Flow

1. **Authentication**: The program asks the user to enter a password. If the password is correct, the assistant is activated.
2. **Voice Commands**: Once authenticated, the user can issue commands like "hi", "open notepad", "open google", "time", and more.
3. **Response**: The assistant responds by speaking and performing the requested task, like opening applications or websites.

## Commands Supported

Here are some of the commands the assistant can respond to:

- **"hi", "hey", "hello"**: The assistant will greet the user.
- **"bye", "stop", "exit"**: The assistant will say goodbye and exit.
- **"who are you", "about"**: The assistant will introduce itself.
- **"how are you", "whatsup"**: The assistant will respond with a casual greeting.
- **"time", "date"**: The assistant will display the current time and date.
- **"open notepad"**: Opens Notepad on the system.
- **"open google"**: Opens the Google homepage in a browser.
- **"open youtube"**: Opens YouTube in a browser.
- **"open instagram"**: Opens Instagram in a browser.

## Technologies Used

- **C++**: The programming language used to develop the assistant.
- **Windows API**: Used for system-level commands like opening applications.
- **espeak**: A speech synthesis program used to generate voice output for the assistant.
- **Standard C++ Libraries**: Libraries like `iostream`, `string`, `windows.h`, and `ctime` are used to handle user input, perform system tasks, and manage time.

## Setup Instructions

1. Clone this repository to your local machine.
2. Ensure that `espeak` is installed on your system for the speech synthesis functionality.
3. Compile the code using a C++ compiler (such as MinGW or MSVC).
4. Run the compiled program to start interacting with the virtual assistant.

## Acknowledgments

- Thanks to **espeak** for providing text-to-speech functionality.
- Thanks to **C++** and the **Windows API** for making system-level operations possible.
  
---

This markdown file provides an overview of the project, features, setup instructions, and technologies used. You can include it in the repository to provide information to future users or contributors.
