#include <stdio.h>
 int main(){


    printf("Enter a character - ");
    char ch;
    scanf(" %c", &ch);
char uch;
    if(ch>=97 &&  ch<= 122){
uch = ch - 32;
        printf(" %c in uppercase is %c" ,ch,uch);
    }
    else if(ch>=65 &&  ch<=90){
        printf("already in uppercase");
    }
    else if(ch<=65  &&  ch<=90 || ch<=97 &&  ch>= 122 ){

        printf("invalid input");
    }
    return 0;
 }