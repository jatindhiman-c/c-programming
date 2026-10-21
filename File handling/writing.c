#include <stdio.h>


int main(){


char str[50] = "hellow new file";

FILE* new  = fopen("createdbyvs.txt","w");
fputs(str,new);
fclose(new);
    return 0;
}