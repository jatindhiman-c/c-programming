// string is 1 d char array terminated by null char \0
#include <stdio.h>

int main(){
int i;
char string[4] = {'a','b','c','\0'};  // same as doing char string[] = "abc";
// char string[20] = {"hello world"};
// for ( i = 0; i < 4; i++)
// {
//     printf(" %c", string[i]);
// }
// this is same as doing

printf("%s\n",string);
printf(" address of string is %p\n", &string);
printf(" address of string[1] is %p\n", &string[1]);
printf(" address of string[1] is %p\n", &1[string]);  //! 1[string] is same as doing string[1]
printf(" address of string[1] is %s\n", *(0 + string));  //! is is also same as string[1] for address and it also gives ascii value with %d+ 



return 0; 

}



