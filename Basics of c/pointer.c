#include <stdio.h>

int main (){
int i = 6;
int* j = &i; // j is pointer pointing to i


printf("the address of i is %p\n", &i);

printf("the address of i is %p\n", j);


printf("value of i is %d\n",*j);
return 0;


}