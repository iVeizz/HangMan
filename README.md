# 🎮 Hangman Game (C++ Windows Forms)

A classic desktop Hangman game with a modern twist! Built using C++/CLI and Windows Forms, this game challenges players to guess the hidden word before the stickman is fully drawn. 

## 📸 Screenshot
<img width="448" height="600" alt="image" src="https://github.com/user-attachments/assets/cc4abb9a-f860-41bb-9c3e-e1fe1cda84b8" />
<img width="447" height="603" alt="image" src="https://github.com/user-attachments/assets/076d2d8c-c8f7-4eeb-8800-cfdc35b2469b" />
<img width="447" height="601" alt="image" src="https://github.com/user-attachments/assets/671b4bcd-17fb-45ec-aeae-34b074680e54" />


## Features
* **Dynamic Visuals**: The hangman image updates automatically with every incorrect guess (using an embedded `ImageList` with 7 stages).
* **Modern Word Bank**: Includes a fun, randomized vocabulary (featuring words like *Sigma*, *Rizz*, *Ohio*, etc.).
* **Smart Input Handling**: Automatically converts lowercase letters to uppercase and limits input to a single character per guess.
* **Game States**: Fully functional Win/Loss detection with pop-up messages.
* **Quick Restart**: A dedicated "New Game" button to instantly reset lives, clear the board, and pick a new word.

## Built With
* C++ / CLI
* Windows Forms GUI
* .NET Framework
* Visual Studio 2022

## How to Play / Run
1. Download the latest release or clone this repository.
2. Open the `.sln` file in Visual Studio.
3. Build the project using the **Release** configuration.
4. Run the `.exe` file!
5. Type a letter in the text box and click **Guess**. You have 6 lives (mistakes) before it's GAME OVER!

---
*Created as a learning project to master C++ GUI development, arrays, and game logic.*
