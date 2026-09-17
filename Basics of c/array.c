#include <stdio.h>

int main(){

    int marks[4];
int i;

for(i=0;i< 4;i++){
printf("enter element %d\n ",i);
scanf("%d", &marks[i]);
}



for(i=0;i<4;i++){
    printf(" value of element %d in array is %d\n ", i,marks[i]);
}

int num[4] = {2,3,4,4};
for(i=0;i<4;i++){
printf(" value of element %d in array is %d\n \n ", i,num[i]);
}

return 0;



}