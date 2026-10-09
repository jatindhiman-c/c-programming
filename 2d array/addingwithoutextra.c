#include <stdio.h>

int main(){

int arr[2][2] = {{1,2},{2,3}};
int arrt[2][2] = {{3,5},{4,7}};

for(int r = 0; r<2;r++){

for(int c = 0; c<2;c++){
arr[r][c] = arr[r][c]+arrt[r][c];

}}

for(int r = 0; r<2;r++){

for(int c = 0; c<2;c++){

printf("%d \t",arr[r][c]);





}
printf("\n");
}



return 0;
}