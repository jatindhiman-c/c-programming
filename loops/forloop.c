#include <stdio.h>

int main ()
{
    int input;
    printf("how many times you want to print ? - \n");
    scanf("%d", &input);
    int i;
    
    //for(initialize;condition;update)

// using break; in loop means exit loop now nd countinue; means go to increment now!!or skip an iteration ex
 //for(xyx)
 //if(i==8)
 //countinue; this will skip it 6


for(i=1;i<input+1;i++){

    printf("printing hello %d times\n",i);
}

return 0;
} 
