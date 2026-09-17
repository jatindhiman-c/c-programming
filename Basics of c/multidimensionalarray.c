#include <stdio.h>

int main(){

    int c,r;
    //int array[r][c];
    int array[3][3];
   

    for(r=0;r<3;r++){
        
for(c=0;c<3;c++)
{

    printf("enter element [%d][%d]\n", r,c);
    scanf("%d", &array[r][c]);
}

    }
    for(r=0;r<3;r++){

        for(c=0;c<3;c++){

            printf("  %d", array[r][c]);
        }
        printf("\n");


        }
    

    

//   int  arr[3][3] = {
//         {3,4,5},
//         {3,6,7},
//             {9,6,1}
//         };              also a way to enter values of elements of an array

        




    return 0;

}