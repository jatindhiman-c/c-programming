#include <stdio.h>
#include <stdlib.h>
int main(){
 
    int* ptr = (int*)malloc(20*sizeof(char));
    ptr = (int*)realloc(ptr,40*sizeof(char));
    printf("%p",ptr);



    return 0;
}