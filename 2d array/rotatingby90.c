#include <stdio.h>

int main()
{
    int r, c, temp, tempt;
    int arr[2][2] = {{2, 4},
                     {3, 6}};

    for (r = 0; r < 2; r++)
    {

        for (c = r + 1; c < 2; c++)
        {

            temp = arr[r][c];      // 2  3
            arr[r][c] = arr[c][r]; // 4  6
            arr[c][r] = temp;
        }
    }

    for (r = 0; r < 2; r++)
    {
        temp = arr[r][0];
        arr[r][0] = arr[r][1];
        arr[r][1] = temp;
    }
    for (r = 0; r < 2; r++)
    {

        for (c = 0; c < 2; c++)
        {
            printf("%d  ", arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}