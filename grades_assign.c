#include <stdio.h>
int main(){

    int grade;
    printf("enter your grades \n");
    scanf("%d", &grade);

    if(grade<40){
        printf("you are fail\n");
    
    }
    else if(grade>=40 && grade<60){
        printf("you need more hardwork\n");
    }

    else if(grade>60 && grade<80){
        printf("you can do beter by a bit hardwork\n");
    }

    else if(grade>=80 && grade<90){
        printf("you are good\n");
    }

    else if(grade>=90 && grade<=100){
        printf("you are excellent\n");
    }

    else{
        printf("invalid input\n");
    }
    return 0;

}