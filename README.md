# Hangman

Hello! This is my **console-based Hangman game written in C**.

---

## A. Built With

* **C**

---

## B. How to Run

### 1. Compile

With GCC installed, compile the program using:

```bash
gcc hangman.c -o hangman
```

### 2. Windows

```bash
hangman.exe
```

### 3. Linux

```bash
./hangman
```

---

## C. Game Overview

* The **Selector** enters the word that needs to be guessed.
* The **Guesser** attempts to find the word by entering letters.
* The Guesser starts with **6 lives**.
* A wrong guess decreases the number of remaining lives.
* Correctly guessed letters are revealed in their respective positions.
* The game ends when the word is completely guessed or all 6 lives are used.

---

## D. Concepts Practiced

* Functions
* Loops
* Conditional statements
* Arrays
* Strings
* Character handling
* User input
* ASCII art

---

## E. Rules & Gameplay

* The Selector first enters a word.
* The Guesser enters **one character at a time** to guess the word.
* A correct guess reveals all matching occurrences of that letter.
* An incorrect guess results in the loss of one life.
* The Guesser has a maximum of **6 incorrect guesses**.
* Guessing the complete word before running out of lives results in a win.
* If all 6 lives are lost, the game reveals the correct word.
* Follow the instructions shown in the terminal during the game.

---

## F. Improvements & Bug Reports

If you come across any bugs or unexpected behaviour, **feel free to modify the code or suggest improvements**.

Feedback and ideas for making the game better are always welcome.

---

## G. Final Note

This is one of my early C projects, built mainly to practice programming and turn what I was learning into something playable.

---

**Thanks for taking a look at my project!**

-**GiridharPrabhu02**
