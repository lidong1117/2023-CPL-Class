//
// Created by 86155 on 2023/9/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int high = 100;
    int chance = 7;

    printf("The computer will generate a random number between 1 and %d\n"
           "You have %d chances\n",
           high,chance);



    srand(time(NULL)); //use current time as seed for random generator
    int secret = rand() % high + 1;
    printf("secret = %d\n",secret);

    while(chance > 0){
    printf("Enter your guess\n");

    int guess;
    scanf("%d",&guess);

    if (guess == secret){
        printf("YOU WIN\n");
        break;
    } else if (guess > secret){
        printf("guess>secret");
    } else {
        printf("guess<secret\n");
    }
    chance = chance - 1;
    }
    return 0;
}
/*compare it with the secret
 */