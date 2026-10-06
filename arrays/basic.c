#include <stdio.h>

int main(){
//array can also be made of float, char, double, etc. but here we are making an array of integers
int  arr[5] = {3,4,5,6,2};  // 5 boxes created in memory
 // 5 boxes filled with values(initialization)
arr[0] = 8;  // first box filled/ changed with value 8

// arr[5] = {3,4,5,6,2};    doing this after declaration is invalid and will give error
// this can only be done in the declaration line only
printf("%d", arr[0]);  // Print the first element of the array


return 0;
}