#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n;
    time_t t;

    n = 5;

    /* Intializes random number generator */
    srand((unsigned)time(&t));

    int random =  rand() % 50;
    int temp;
    for (i = 0; i < n; i++) {
        printf("Enter Number from 0 to 49");
        scanf_s("%d", &temp);

        if (random == temp) {
            printf("Correct");
            break;
        }
        else if (random > temp >= random - 5 || random < temp <= random - 5)
            printf("The number you guessed is very close to the sail number.");

        else if (random > temp >= random - 10 || random < temp <= random - 10)
            printf("The number you guessed is close to the sail number");
        else
            printf("The number you guessed is far from the sail number");
    }

    return(0);
}