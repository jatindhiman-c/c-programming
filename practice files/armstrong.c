#include <stdio.h>

int main()
{

    int a, b, c, abc, n,nc;

    printf("ENTER NUMBER - ");
    scanf("%d", &n);
    nc =  n;
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n;
    

        abc = a * a * a + b * b * b + c * c * c;
    nc == abc ? printf("it is ok") : printf("not ok");

    return 0;
}