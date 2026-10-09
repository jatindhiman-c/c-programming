#include <stdio.h>

int main (){
int r,c,temp,tempt;
int arr[2][2] = {{2,4},
                 {3,6}};


for(r = 0; r<2;r++){

for(c = r + 1; c<2;c++){
  
temp = arr[r][c];
  arr[r][c] = arr[c][r];
 arr[c][r]  =  temp;


}}
for(r = 0; r<2;r++){

for(c = 0; c<2;c++){
printf("%d  ",arr[r][c]);
}
printf("\n");}
    return 0;
}