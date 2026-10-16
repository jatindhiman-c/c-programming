#include <stdio.h>



int main (){

int arr[5] = {2,4,3,1,5};
int i,j,temp;
for(i=0;i<5;i++){
for(j=4;j>i;j--){
if(arr[i]>arr[j]){
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;


}
}
}

 
for(int i = 0;i<5;i++){
printf("%d   ",arr[i]);}




    return 0;
}