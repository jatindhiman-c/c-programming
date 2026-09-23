#include <stdio.h>

int main()
{

    int f,n,i;

    printf("enter a number - ");
    scanf("%d", &n);
    f =1;
    for(i=1;i<=n;i++){

        f *= i;
    }

        printf("value of factorial is %d ",f);
        return 0;
}