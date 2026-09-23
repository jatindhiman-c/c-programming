#include <stdio.h>

int main(){

int i,n,ap,d;
ap = 1;
printf("enter value of common ratio - ");
scanf("%d", &d);

printf("gp with common ratio %d is  - \n",d);
for(i=1;i<=10;i++){

ap *= d ;
printf("%d \t",ap);

}
return 0;

}