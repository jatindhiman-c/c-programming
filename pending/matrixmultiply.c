#include <stdio.h>

int main(){
int temp;
int arr[2][2] = {{1,2},{2,3}};
int arrt[2][2] = {{3,5},{4,7}};

for(int r = 0; r<2;r++){    //! transpose of arrt
for(int c = r+1; c<2;c++){
 temp =  arrt[r][c];
 arrt[r][c]  =  arrt[c][r];
 arrt[c][r] = temp;
}}
for(int r = 0; r<2;r++){
for(int c=0;c<2;c++){

if()










}}






for(int r = 0; r<2;r++){

for(int c = 0; c<2;c++){

printf("%d \t",arr[r][c]);





}
printf("\n");
}


for(int r = 0; r<2;r++){

for(int c = 0; c<2;c++){

printf("%d \t",arrt[r][c]);





}
printf("\n");
}


return 0;
}