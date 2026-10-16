#include <stdio.h>

int main(){
int arr[10] = {2,6,4,8,9,1,5,10,7,3};
int i,j,n=10;
int min;
for(i=0;i<n;i++){
    for(j=n;j>=i+1;j--){
if(arr[i]>arr[j]){
min = arr[j];
arr[j] = arr[i];
arr[i]= min;}

    }}

for(i=0;i<10;i++) printf("%d  ",arr[i]);

    return 0;
}