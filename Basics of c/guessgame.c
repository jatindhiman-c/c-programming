
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    
    int num = rand() % 100 + 1;
    
    int guess;
    printf("GUESS A NUMBER BETWEEN 1 TO 100 - ");
    scanf("%d", &guess);
    
    int try;
    try = 1;

label:
if(guess>num){
    printf("YOU GUESSED HIGHER\n");
}



else if("%d",guess<num){
    printf("YOU GUESSED LOWER\n");
}



 else if("%d", num=guess){
    printf("YOU GOT THE RIGHT GUESS\n");}

if(num!=guess){
    printf("YOU FAILED %d TIMES\n", try);
    
      try++;
 
    printf("GUESS AGAIN - ");
    scanf("%d", &guess);
    goto label;
}

printf(" YOU GUESSED IT RIGHT IN %dTH TIME\n", try);
 

    return 0;
}
