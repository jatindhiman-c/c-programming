#include <stdio.h>

void swap ( int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
printf("value of a is %d and value of b is %d", &a,&b);
}

int main(){
     int a = 5;
    int b = 7;
 swap(&a ,&b);
 return 0;

}



