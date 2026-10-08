#include <stdio.h>

int main(){
int x = -1;
int max_r =0;
int max_c =0;
int r,c;
int arr[2][2] = {{1,8},{2,6}};


for(r = 0; r<2;r++){

for(c = 0; c<2;c++){
if (arr[r][c]>x)
{
    x = arr[r][c];       
    max_r = r;           //!   NEW LEARNING
    max_c = c;           //!   NEW LEARNING
}

}}
printf("maximum element is %d from arr[%d][%d]",x,max_r,max_c);
return 0;
}