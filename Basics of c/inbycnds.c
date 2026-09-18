#include <stdio.h>

int main(){

  char st[10];
  
//  printf("values of elements");
//  scanf("%s", st);                      one time input

int i = 0;
while(i<10){

  printf("enter values for [%d] \n " ,i);
  scanf( " %c", &st[i]);
  i++;
}


  return 0;
}