#include <stdio.h>

int main()
{
//logical operators (&&,||)
// works when both statements are true  for example


int a; int b;
a = 1;
b = 1;
// here 1 stands for true nd 0 stands for false    nd in this case both are true so logical and will give true that is 1
printf("the value of a nd b is %d\n", a && b);

//now lets take on of them as 0
a = 1;
b = 0;
printf("the value of a nd b is %d\n", a && b);
// now we can see output as 0 because one of them is false so logical and will give false that is 0
       // this is logical or operator(&&) it works when one of the statement is true for example

//now about logical or operator (||) it works when one of the statement is true for example
printf("the value of a nd b is %d\n", a||b);
 
// now its logical not operator (!) it works when the statement is false for example
printf("the value of a nd b is %d\n", !a);

int e = 12;
int d = 222;
e>d?printf("e is greater") :printf("d is greater");
     return 0;

}