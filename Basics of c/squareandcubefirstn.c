#include <stdio.h>

int main(){

    int i,n,square,cube;
    i = 1; 
    
  
printf("enter last digit");
scanf("%d", &n);
    
    while(i<=n){
      square = i*i;

    cube = i*i*i; 
    
    printf("square of %d is - %d   and cube of %d is %d\n",i,square,i,cube);
        i++;
      
        
    }

    return 0;
}
