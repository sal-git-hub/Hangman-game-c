# Hangman Game in C

A simple Hangman game written in C.

## Overview

This project is a terminal-based implementation of the classic Hangman game. The player attempts to guess a hidden word one letter at a time while avoiding too many incorrect guesses. The game includes a lives system, repeated guess detection, win and lose conditions, and an ASCII Hangman drawing that updates as lives are lost.

---

## Traditional game rules:

* A word is chosen and hidden from the player.
* The player guesses one letter at a time.
* Correct guesses reveal all matching letters in the word.
* Incorrect guesses reduce the player's remaining lives.
* Repeated guesses are not counted and the player is prompted to choose a different letter.
* The player wins by revealing every letter in the word.
* The player loses when all lives are exhausted and the Hangman is fully drawn.

---

## Libraries used:

### `<stdio.h>`

Provides standard input and output functions such as:

* `printf()`
* `scanf()`

### `<string.h>`

Provides string handling functions such as:

* `strlen()`
* `strcmp()`

---

## How the program works:

The game begins by selecting a secret word and creating a hidden version consisting of underscores.

Example:

```text
Secret Word: computer
Visible Word: ________
```

The player is then repeatedly prompted to enter a letter.

The program performs the following steps:

1. Displays the current word and remaining lives.
2. Accepts a letter from the player.
3. Checks whether the letter has already been guessed.
4. If the guess is new, it is stored in a list of previous guesses.
5. The program searches the secret word for matching letters.
6. Correct guesses reveal the corresponding positions in the hidden word.
7. Incorrect guesses reduce the player's remaining lives.
8. The Hangman drawing is updated based on the number of lives remaining.
9. The game continues until the player wins or loses.

---

## Hangman Stages

The Hangman drawing progresses as lives are lost:

```text
 -----
 |   |
 |
 |
 |
 |
=========
```

```text
 -----
 |   |
 |   O
 |
 |
 |
=========
```

```text
 -----
 |   |
 |   O
 |   |
 |
 |
=========
```

```text
 -----
 |   |
 |   O
 |  /|\
 |  / \
 |
=========
```

---

## Concepts used:

* Variables
* Arrays
* Strings
* Loops (`for`, `while`)
* Conditional statements (`if`, `else`, `switch`)
* Functions
* User input and output
* String manipulation
* Game state management

---

## What I learned while buillding this project:

* How strings are stored in C using character arrays
* The importance of the null terminator (`'\0'`)
* Using `strlen()` to determine string length
* Using `strcmp()` to compare strings
* Tracking user input across multiple game turns
* Preventing repeated guesses
* Using loops to update and display game data
* Creating functions to separate game logic from display logic
* Building a complete interactive terminal game using only C
