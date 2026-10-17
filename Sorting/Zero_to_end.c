#include <stdio.h>

int main (){
int arr[8] = {5,3,0,7,0,2,3,0};  //? to [5,3,7,2,3,0,0,0]
int temp,k,n=8;
for(int i = 0;i<8;i++){
    if(arr[i]==0){
    for(int j = i;j<8;j++)  {  
  temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
    }}

}
 
    

 for (int i = 0; i < 8; i++)
    {
        printf(" %d   ", arr[i]);
    }


    return 0;
}