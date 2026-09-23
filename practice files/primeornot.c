#include <stdio.h>

int main()
{

    int i,count,n;
    printf("ENTER A NUMBER - ");
    scanf("%d",&n);
    count = 0;

    for(i=1;i<=n-1;i++){
    if(n%i==0){
        count ++;
    }
    }

    if(count > 2){
    printf("composite");

    }

    else{
        printf("prime");
    }
    return 0;

}