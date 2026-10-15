#include <stdio.h>

int main()
{

    int arr[10] = {2, 5, 3, 6, 9, 8, 1, 4, 7, 10};
    int temp;
pass:
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    for (int i = 0; i < 10; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            goto pass;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf(" %d   ", arr[i]);
    }
    return 0;
}