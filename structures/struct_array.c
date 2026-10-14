#include <stdio.h> 
#include <string.h>


typedef struct student
{
int age;
float marks;
char name[50];
}student;


int main(){
 student rai[10];
rai[0].age = 16;
rai[0].marks = 9.4;
strcpy(rai[0].name , "jatin");
//or
 student s1 = {16, 9.2, "jatin"};
printf("%s\n%d\n%f\n", s1.name,s1.age,s1.marks );


// printf("%s\n",rai[0].name);
// printf("%d\n",rai[0].age);

// printf("%f\n",rai[0].marks);



return 0;


}