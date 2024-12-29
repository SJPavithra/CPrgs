#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    do {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number)
            printf("Too low!\n");
        else if (guess > number)
            printf("Too high!\n");
    } while (guess != number);

    printf("You guessed it in %d attempts!\n", attempts);
    return 0;
}
