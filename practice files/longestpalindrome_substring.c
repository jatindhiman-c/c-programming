#include <stdio.h>
#include <string.h>

int main(){
   int count = 0;
    char word[100];
printf("check for palindrome....\n Enter the word:");
scanf("%s",word);
int n = strlen(word);
int indi;

for(int i = 0; i<=n;i++) 
{
    if (word[i]==word[n-(i+1)]){indi = i;
        break;}
}

for(int i= indi;i<indi*2;i++){printf("%c",word[i]);}

    return 0;
}