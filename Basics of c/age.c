#include <stdio.h>
int main() {
     int age;
     printf("enter age -");

     scanf("%d", &age);

     if(age<10)
     {
        printf("you are a kid\n");
    }

    else if(age>=10 && age<20) { 
        printf("you are a teenager\n");
       
  }

      else if(age>20){
        printf(" you are an elder\n");
     }
        
    
    return 0;
}