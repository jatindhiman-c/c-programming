#include <stdio.h> , <string.h>

int main(){
int i;
char str[] = "hello , how are you buddy?";


for(i=0;i< strlen(str);i++)
{
str[i] = str[i] - 2 ;
}
printf("%s", str);




return 0;
}