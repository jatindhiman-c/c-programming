#include <stdio.h>
#include <stdbool.h>

int main(){
int temp;
int arr[10] = {7,5,6,4,8,9,10,1,3,2};
int  n = 10;


 //! BUBBLE SORT
for(int i = 0;i<n-1;i++){
    bool flag = true;      
for(int j = 0;j<n-1-i;j++){    
if(arr[j]>arr[j+1])             
{temp = arr[j];                 //! this is called bubble sort
arr[j]=arr[j+1];                //!its time complexity is O(n*n)
arr[j+1] = temp;                //! and space complexity is O(1)
flag = false;}     



}
 if(flag==true) break;
}
 
for(int i = 0;i<10;i++){
printf("%d   ",arr[i]);}

    return 0;
}