#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    int no_of_guesses=0;
    int randomNumber = (rand() % 200) + 1;
    int guess;
    do{
        printf("Enter your guess :");
        scanf("%d",&guess);
        if (guess>randomNumber){
            printf("your guess is higher\n");
        }
        else{
            printf("your guess is lower\n");
        }
        no_of_guesses+=1;
    }while (guess!=randomNumber);
    printf("you guessed the number right in %d guesses\n",no_of_guesses);
    return 0;
}
