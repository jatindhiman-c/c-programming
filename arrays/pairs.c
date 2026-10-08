#include <stdio.h>


int main (){
int arr[5] = { 4,5,6,3,7};
int x = 9;
 int one = 0,two = 0,count=0;
for(int i = 0; i < 5; i ++){
   
    one = arr[i];
    
for(int j = i; j < 5; j ++){

two =  arr[i] + arr[j];
if(two==x)      count++;

}}
printf("the no of pairs are/is %d",count);
return 0;

}