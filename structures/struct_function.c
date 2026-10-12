#include <stdio.h>
#include <string.h>


struct student{
    int age;
    float marks;
    char name[50];
    
    
};

void printfinfo(struct student s1){


    printf("%s\n%d\n%f\n", s1.name,s1.age,s1.marks );
 // dont use return 0; with void
}

int main(){

 struct student rai[50];

struct student s1 = {16, 9.2, "jatin"};
printfinfo(s1);

return 0;
}
