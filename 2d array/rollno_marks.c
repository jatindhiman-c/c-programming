#include <stdio.h>

 int main(){
 int arr[4][2];

for(int r=0;r<4;r++){
for(int c=0;c<2;c++){
 if(c==0){
 printf("ENTER ROLL NUMBER OF STUDENT(%d)  - ",r+1);
 scanf("%d",&arr[r][c]);
 }

 else if (c!=0)
 {
    {printf("ENTER MARKS of student(%d) - ",r+1);
scanf("%d", &arr[r][c]);}

 }

}}

printf("ROLL NO \t MARKS\n");
for(int r=0;r<4;r++){


for(int c=0;c<2;c++){
 
 
    printf("  %d   \t        ", arr[r][c]);
 

 
}

printf("\n");
}





return 0;
 }
 