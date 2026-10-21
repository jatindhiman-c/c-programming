#include <stdio.h>

int main(){
float  arr[5] = { 9,6,4,8,7}; 
int smax = arr[0], max = arr[0];
for(int i=0;i<5;i++){

    if(arr[i] < max)
    max = arr[i];

if(arr[i]<max)  smax = arr[i];

}


printf("Maximum of array elements is: %d\n", smax);


return 0;
}