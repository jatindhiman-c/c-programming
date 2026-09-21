#include <stdio.h>
#include <string.h>

int main(){
int i,there;
char ch;
    char str[14] = "recognisation";
    printf("enter element which need to be recognised - ");
    scanf("%c", &ch);

    for(i=0;i<=14;i++){
        // printf("ascii values of %c in str[%d] is %d\n",str[i],i,str[i]);
if(str[i]==ch){
there = 1;
break;}

}
    

    if(there){

    printf("yes");
    
    }
    else{

        printf("no");
    }
    




return 0;

}