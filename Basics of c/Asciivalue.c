#include <stdio.h>

int main(){

    char ch,c;
printf("enter the character for ascii value - ");
scanf(" %c", &ch);
// printf("enter the character for ascii value - ");
// scanf(" %c", &c);

printf("ASCII value of '%c' is  - %d  \n", ch,ch);
printf("ASCII value  is %d \n ", ch);

// if(ch==c){
//     printf("yes");

 
// for char we can directyly compare variable directly instead of using format specifiers for ascii  values

//! or we can do
int x;
x = (int)ch;
printf("%d",x);



return 0;}