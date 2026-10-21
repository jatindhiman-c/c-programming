#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int x;
     char apin[6];
    char accno[12];
     char inapin[6];
    char inaccno[12];
     bool fp = false;
    bool fan = false;
printf(">>SELECT 1 OR 2\n");
again:
    printf(" 1) LOGIN \n 2) CREATE ACCOUNT\n");
scanf("%d",&x);
switch (x)
{
case 1:{
   
      
   
     redirect:
    printf(" ENTER MOBILE NUMBER AS YOUR ACCOUNT NUMBER  - ");
scanf("%s",inaccno);
FILE* ptr = fopen("accpin","r");

printf("ENTER PIN OF 4 DIGITS  - ");
scanf("%s",inapin);



while(fgets(accno,12,ptr)!=NULL){
    accno[strcspn(accno,"\n")]=0;
    if(strcmp(accno,inaccno)==0)
     fan = true;

if(fgets(apin,6,ptr)!=NULL){
      apin[strcspn(apin,"\n")]=0;
    if(strcmp(apin,inapin)==0) 
    fp = true;
    
   
}}
fclose(ptr);
    break;
}

case 2 :
    {

   
    printf(" ENTER MOBILE NUMBER AS YOUR ACCOUNT NUMBER  - ");
scanf("%s",accno);
FILE* ptr = fopen("accpin","a");
fprintf(ptr,"%s\n",accno);
printf("CREATE PIN OF 4 DIGITS  - ");
scanf("%s",apin);
;
fprintf(ptr,"%s\n",apin);

fclose(ptr);
printf("REDIRECTING TO LOGIN PAGE , USE YOUR CREDENTIALS FOR LOGIN \n  ");
goto redirect;
break;}


    

}

if(fp==true && fan==true) {printf("AUTHENTICATION SUCCEEDED");}
else printf("AUTHENTICATION FAILED");



    return  0;
}