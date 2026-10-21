#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct details{
 char accno[12];
 char apin[6];
 double balance;
}details;

int main(){
    int x;
     char apin[6];
    char accno[12];
     char inapin[6];
    char inaccno[12];
    int blc = 0;
    char count[3];
    int y;
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
FILE* dls = fopen("details","a");
count;

printf("%d",count);
fprintf(dls,"%d\n",count);
fprintf(ptr,"%d\n",count);
fprintf(ptr,"%s\n",accno);
printf("CREATE PIN OF 4 DIGITS  - ");
scanf("%s",apin);

fprintf(ptr,"%s\n",apin);


fprintf(dls,"%s\n",accno);
fprintf(dls,"%s\n",apin);
fprintf(dls,"%d\n",blc);


fclose(ptr);
fclose(dls);
printf("REDIRECTING TO LOGIN PAGE , USE YOUR CREDENTIALS FOR LOGIN \n  ");
goto redirect;
break;
}

}
    



if(fp==true && fan==true) {printf("AUTHENTICATION SUCCEEDED\n");}
else printf("AUTHENTICATION FAILED\n");

int x2;
printf("SELECT THE INDEX\n");
    printf(" 1) ACCOUNT DETAILS \n 2) DEPOSITE MONEY \n 3) WITHDRAW MONEY \n 4) TRANSFER MONEY \n 5) CLOSE ACCOUNT\n ");
scanf("%d",&x2);



switch(x2){
case  1:{

    details acc [100];



 

    break;
}











}

    return  0;
}