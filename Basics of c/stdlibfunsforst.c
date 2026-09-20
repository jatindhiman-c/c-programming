
#include <stdio.h>
#include <string.h>// #include <string.h> is used with stdio.h when ever using fun of string


int main(){

 char st[10] = "function";

{// sterlen to determine length of string excluding null character
    
    printf("%d \n", strlen(st)); 
    //for length of st excluding null
}


{// strcpy to copy the content of one string into other

    char ch[43];
strcpy(ch,st); //to copy the content of one string into other
printf("%s %s\n", ch, st);}


{// strcat (to join two st)
    char sh[10] = "library";
strcat(st,sh);// to join two differen strings
printf("%s \n",st);}


{// strcmp ( to compare)
    int v = strcmp("sh","ch");  // to compare two different strings , it gives 0 when both strings are equal (based on ascii values)
//in above case if ch comes first in dictionary then it will give negative value and if second (ch) comes first then it will give positive value 


printf("%d \n", v);

int v2 = strcmp("ch","sh");
printf("%d \n", v2);

int v3 = strcmp("ch","ch");
printf("%d \n", v3);
}










return 0;








}