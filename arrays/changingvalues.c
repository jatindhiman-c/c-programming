#include <stdio.h>

int main(){
float  arr[5] = { 67,6,4,8,7};

for(int i = 0 ;  i<5 ;  i++){
if(i%2 ==0){
    arr[i] = arr[i] + 10;}
 else if(i%2 !=0){
    arr[i] = arr[i]*2;
 }

printf("The value of arr[%d] is %.2f\n", i, arr[i]);

}


return 0;
}