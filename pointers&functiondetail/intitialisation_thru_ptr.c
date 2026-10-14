#include <stdio.h>

int main (){
int i;
int *j = &i;
*j = 9;
printf("%d",*j);
return 0;


}