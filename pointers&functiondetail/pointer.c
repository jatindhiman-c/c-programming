#include <stdio.h>

int main (){ // int* is pointer of an integer whereas int** is pointer of a pointer of an integer
int i = 6;
int* j = &i; // j is pointer pointing to i
int** k = &j; // k is pointer pointing to j where j  is also a pointer 

printf("the address of i is %p\n", &i);

printf("the address of i is %p\n", j);

printf("the address of j is %p\n", k);

printf("value of i is %d\n",*j);// same as using i
return 0;


}// pass by refrence is sai when we provide address// pointer to give any input  to a function 
// and it can change the value of the variable in main function because it is pass by reference