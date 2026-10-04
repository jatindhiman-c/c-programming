#include <stdio.h>

void com(int n)
{

    int r, j, k;
    r = -1;
    do
    {
        r++;

        int fact = 1, comb = 1, rfact = 1, nmrfact = 1, d = 1;
        int nmr = n - r;

        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }

        for (int j = 1; j <= r; j++)
        {
            rfact *= j;
        }

        for (int k = 1; k <= nmr; k++)
        {
            nmrfact *= k;
        }

        d = (rfact * nmrfact);
        comb = fact / d;
        printf("%d   ", comb);
    } while (r <= n - 1);
    printf("\n");
    return;
}

int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++) 
                                    { if (j >= i)  printf("  "); }
        

        com(i);
    }
    return 0;
}