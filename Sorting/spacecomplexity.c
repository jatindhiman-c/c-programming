#include <stdio.h>

int main(){
int i;
int arr[8] = {1,2,3,4,5,6,5,7};
int carr[8] = {0,0,0,0,0,0,0,0};
int x;

for( i = 0;i<8;i++){
x = arr[i];
if (carr[x]==0){
carr[x] = 1;
}
else goto end;
}
end:
printf("element at arr[%d]  which is %d is duplicate ",i,x);
    return 0;
}