// #include <string.h> is used with stdio.h when ever using fun of strings
#include <stdio.h>
#include <string.h>


int main(){

    char st[] = "function";

    // printf("%d", strlen(st)); 
    // for length of st excluding null


char ch[43];
strcpy(ch,st);//to copy 
printf("%s %s", ch, st);


return 0;


}