#include<stdio.h>

int main()
{
    int length;
    int breadth;

    printf("enter lenght-");
    scanf("%d",&length);

    printf("enter breadth-");
    scanf("%d", &breadth);

    int area = length*breadth; 
    printf("area of rectangle is %d", area);
    return 0;

}