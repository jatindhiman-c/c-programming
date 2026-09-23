#include <stdio.h>

int main()
{

    int p,b,i,r;

    printf("enter a base - ");
    scanf("%d", &b);
    printf("enter power - ");
    scanf("%d", &p);
r = 1;
    for(i=1;i<=p;i++){

    r *= b;
    }

        printf("value of power of number is %d ",r);
        return 0;
}