#include <stdio.h>

int main(){
int a,b,c,d;
printf(" Enter first digit - ",a);
scanf("%d", &a);

printf(" Enter second digit - ",b);
scanf("%d", &b);

printf(" Enter third digit - ",c);
scanf("%d", &c);

printf(" Enter fourth digit - ",d);
scanf("%d", &d);
 if(a>b && a>c && a>d){

    printf(" the greatest of all is %d",a);

 }
 if(c>b && c>a && c>d){

    printf(" the greatest of all is %d",c);
    
 }
 if(b>a && b>c && b>d){

    printf(" the greatest of all is %d",b);
    
 }
 if(d>b && d>c && d>a){

    printf(" the greatest of all is %d",d);
    
 }
    return 0; 
}