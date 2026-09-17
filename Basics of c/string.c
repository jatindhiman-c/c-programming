// string is 1 d char array terminated by null char \0
#include <stdio.h>

int main(){
int i;
char string[4] = {'a','b','c','\0'};  // same as doing char string[] = "abc";

// for ( i = 0; i < 4; i++)
// {
//     printf(" %c", string[i]);
// }
// this is same as doing
printf("%s",string);

return 0;

}



