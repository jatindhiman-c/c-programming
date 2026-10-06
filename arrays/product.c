#include <stdio.h>

int main(){
float  arr[5] = {1,4,1,2,1}; 



  int product = 1;
for(int i=0;i<5;i++)
 {product *= arr[i];}


   
printf("product of array elements is: %d\n", product);


return 0;
}