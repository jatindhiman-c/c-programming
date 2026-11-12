#include <stdio.h>
#include <string.h>

int main(){
   int count = 0;
    char word[100];
printf("check for palindrome....\n Enter the word:");
scanf("%s",word);
int n = strlen(word);
for(int i = 0; i<=n;i++) 
{
    if (word[i]==word[n-(i+1)])count ++;
}

count > 3? printf("It is palindrome"):printf("Not a palindrome");

    return 0;
}