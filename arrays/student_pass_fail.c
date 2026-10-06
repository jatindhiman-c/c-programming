#include <stdio.h>

int main(){
float  student[5]; 

for(int i=0;i<5;i++){
    printf("Enter marks of student[%d] - \n",i);
    scanf("%f",&student[i]);
}
for(int j=0;j<5;j++){
    if(student[j] < 35 )
    printf("Student[%d] is failed\n",j);
    else printf("Student[%d] is passed\n",j);
}


return 0;
}