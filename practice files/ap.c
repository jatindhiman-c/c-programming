#include <stdio.h>

int main(){

int i,n,ap,d;
printf("enter value of common difference - ");
scanf("%d", &d);

printf("ap with common difference %d is  - \n",d);
for(i=1;i<=10;i++){

ap = ap + d;
printf("%d \t",ap);

}
return 0;

}