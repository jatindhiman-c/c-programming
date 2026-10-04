#include <stdio.h>

void swap ( int a, int b){
int temp;
temp = a;
a = b;
b = temp;// pass by value is defined as the value of a and b  whichis not changed in main function
return;
}

int main(){
    int a = 1, b = 5;
 swap(1 ,5);
 printf("value of a is %d \n value of b is %d", a,b);
 return 0;

}// scope/declaration of a and b is only in main function and swap function does not change the value of a and b in main function because it is pass by value






 
