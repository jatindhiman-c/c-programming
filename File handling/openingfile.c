#include <stdio.h>


int main(){

FILE* ptr  = fopen("jatin.txt","r");

char str[50];
 while(fgets(str,50,ptr)!=NULL) 
printf("%s",str);

//? for creating new files;;
FILE* new  = fopen("createdbyvs.txt","w");
    return 0;
}