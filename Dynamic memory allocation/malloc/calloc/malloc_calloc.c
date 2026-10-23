#include <stdio.h>
#include <stdlib.h>
int main(){
 
    int* ptr = (int*)malloc(20*sizeof(char));
    printf("%p",ptr);

//! if there is no memory possible to allocate then malloc returns  NULL 

    return 0;
}