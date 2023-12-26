#include <stdio.h>
#include <stdlib.h>

int main() {
    int secretNumber, userGuess;


    //random number between 1 and 100   [randomNumber = (rand() % (upper-lower) + 1)]
    
    secretNumber = rand() % 100 + 1;
    printf("%d",secretNumber);

    printf("Guess the number between 1 and 100: ");

    
    do {
        scanf("%d", &userGuess);
        if (userGuess == secretNumber) {
            printf("Congratulations! You guessed the correct number.\n");
        } 
        else if (userGuess < secretNumber) {
            printf("Too low. Try again: ");
        }
        else {
            printf("Too high. Try again: ");
        }

    } while (userGuess != secretNumber);

    return 0;
}
