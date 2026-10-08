#include <stdio.h>

int main(){
float  arr[5] = { 67,6,4,8,7};
int max = arr[0];
for(int i=0;i<5;i++){

    if(arr[i] > max)
    max = arr[i];

}

printf("Maximum of array elements is: %d\n", max);


return 0;
}