#include <stdio.h>


int main(){
int i,j;
int x,y;
int arr[9] = {1,2,3,4,4,5,3,5,6};

for(i=0;i<9;i++){
for(j=i+1;j<9 ;j++){
if(arr[i]==arr[j]) {
    x = arr[i];
    
    printf("dupilcate elements are at arr[%d] and arr[%d]  and value of duplicate element is %d \n",i,j,x);
    
}


}
}  
   return 0;
}