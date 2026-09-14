#include <stdio.h>

int main(){

    int i;
    int n;
    int m;
    int sum;
    
    printf("enter first digit - ");
    scanf("%d", &n);


printf("enter second digit - ");
    scanf("%d", &m);

    
     for(i=n;i<=m;i++){


         sum +=i;

    }
    
    printf("value of sum from %d to %d is %d\n",n,m,sum);
  
     return 0;
}