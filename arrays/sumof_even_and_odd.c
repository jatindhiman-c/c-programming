#include <stdio.h>

int main(){
float  arr[5] = { 6,6,4,8,7};
int esum = 0,osum = 0;
for(int i = 0 ;  i<5 ;  i++){
if(i%2 ==0){
    esum += arr[i];}
 else if(i%2 !=0){
    osum += arr[i];
 }



}

printf("%d and %d \n", esum , osum);
int diff = esum - osum;
printf("%d  \n", diff);
return 0;
}