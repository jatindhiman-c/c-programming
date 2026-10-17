#include <stdio.h>
#include <stdlib.h>
int main(){
 
    int* ptr = (int*)malloc(20*sizeof(char));
    printf("%p\n",ptr);
free(ptr);
printf("%p\n",ptr);
ptr = NULL;
printf("%p",ptr);

    return 0;
}