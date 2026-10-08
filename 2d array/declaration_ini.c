#include <stdio.h>

int main(){
int  r,c;


      //?  declaration and init.                
//   int arr[3][2] = {{1,2},{14,5},{5,7}};          
 //   int arr[3][2] = {1,2,3,4,5,6};   //*  also correct
 

     
    //? another way to initialize

int arr[2][2];
arr[0][0] = 1;
arr[0][1] = 2;
arr[1][0] = 4;
arr[1][1] = 6;
  

   //? printing array

for(r=0;r<2;r++){
for(c=0;c<2;c++){
printf("%d  ",arr[r][c]);
}
printf("\n");
}

return 0;

} 