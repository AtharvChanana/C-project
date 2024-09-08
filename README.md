# C-project
This is my project which i made using C language.
# Number Guessing Game

This is a simple C program that generates a random number between 1 and 200 and prompts the user to guess the number. After each guess, the program provides feedback on whether the guess is higher or lower than the randomly generated number. The game continues until the user guesses the correct number, and the program will display the number of attempts taken.

## How the Game Works
- The program generates a random number between 1 and 200.
- The user enters their guess.
- If the guess is higher than the random number, the program will display "your guess is higher."
- If the guess is lower than the random number, the program will display "your guess is lower."
- The game continues until the user guesses the correct number.
- The total number of guesses is displayed at the end.

## Code Example

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int no_of_guesses = 0;
    int randomNumber = (rand() % 200) + 1;
    int guess;
    do {
        printf("Enter your guess :");
        scanf("%d", &guess);
        if (guess > randomNumber) {
            printf("your guess is higher\n");
        } else {
            printf("your guess is lower\n");
        }
        no_of_guesses += 1;
    } while (guess != randomNumber);
    printf("you guessed the number right in %d guesses\n", no_of_guesses);
    return 0;
}
