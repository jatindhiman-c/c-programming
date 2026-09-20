#include <stdio.h>  
#include <string.h>

 typedef struct student{
    // this is used to give nick name or we can say creating an alias for our struct
    int age;
    float marks;
    char name[50];
    
    
} data;


void printfinfo(data s1){


    printf("%s\n%d\n%f\n", s1.name,s1.age,s1.marks );
 // dont use return 0; with void
}

int main(){

 data rai[50];

data s1 = {16, 9.2, "jatin"};
printfinfo(s1);

return 0;
}