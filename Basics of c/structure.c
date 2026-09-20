#include <stdio.h>
#include <string.h>


struct students{

char name[50];
int age;
float marks;


};


int main(){


  struct students s1,s2,s3;
  {
    s1.age = 16;
s1.marks = 9.6;
strcpy(s1.name,"jatin");

printf("student name = %s\n", s1.name);
printf("student marks = %f\n", s1.marks);
printf("student age = %d\n", s1.age);

s2.age = 17;
s2.marks = 9.7;
strcpy(s2.name,"tanu");

printf("student name = %s\n", s2.name);
printf("student marks = %f\n", s2.marks);
printf("student age = %d\n", s2.age);


s3.age = 17;
s3.marks = 7.9;
strcpy(s3.name,"nirvana");

printf("student name = %s\n", s3.name);
printf("student marks = %f\n", s3.marks);
printf("student age = %d\n", s3.age);









  }



return 0;
}


