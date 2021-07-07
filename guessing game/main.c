#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secreatNumber =5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outofGuesses = 0;


    while(guess != secreatNumber && outofGuesses == 0){
            if(guessCount < guessLimit){

            printf("enter a number:");
            scanf("%d",&guess);
            guessCount++;
            }
            else{
                outofGuesses = 1;

            }
    }
    if(outofGuesses == 1){
        printf("out of guesses");
       } else{
    printf("You win!");

        }



    return 0;
}
