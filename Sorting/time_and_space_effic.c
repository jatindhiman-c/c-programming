#include <stdio.h>

int main(){
int arr[11] = {1,2,3,4,5,6,7,9,9,8,10};
int sumarr = 0,duplicate = 0,sum = 0;
for(int i = 0; i<11;i++){

    sumarr += arr[i];
}
for(int i =0;i<=10;i++){
    sum = sum + i;
}
duplicate = sumarr - sum;
printf("duplicate element is %d",duplicate);
    return 0;
}