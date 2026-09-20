#include <stdio.h> 
#include <string.h>


struct student
{
int age;
float marks;
char name[50];
};


int main(){

struct student rai[100];
struct student s1 = {16, 9.2, "jatin"};

struct student *ptr =  &s1;

printf("%s\n%d\n%f\n", ptr->name);
return 0;
//  ptr->name same as (*ptr).name
}
