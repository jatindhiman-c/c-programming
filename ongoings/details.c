#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct details{
 char accno[12];
 char name[22];
 char apin[6];
 double balance;
 char status[10];
}details;

details acc;

int main(){
    int x;
    char inname[22];
     char apin[6];
    char accno[12];
     char inapin[6];
    char inaccno[12];
    float blc = 0;
   
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
scanf("  %s",inaccno);
FILE* ptr = fopen("accpin","r");

printf("ENTER PIN OF 4 DIGITS  - ");
scanf("  %s",inapin);



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
   
    acc.balance = 1000;
FILE* ptr = fopen("accpin","a");
FILE* dls = fopen("details","a");

printf(" ENTER MOBILE NUMBER AS YOUR ACCOUNT NUMBER  - ");
scanf("%s",accno);

printf("CREATE PIN OF 4 DIGITS  - ");
scanf("%s",apin);

fprintf(ptr,"%s\n",accno);
fprintf(ptr,"%s\n",apin);
printf("ENTER YOUR NAME - ");
scanf("%s",inname);

fprintf(dls,"%s\n",accno);
fprintf(dls,"%s\n",inname);
fprintf(dls,"%s\n",apin);

fprintf(dls,"%lf\n",acc.balance);
strcpy(acc.status,"active");
fprintf(dls,"%lf\n",acc.status);


fclose(ptr);
fclose(dls);
printf("REDIRECTING TO LOGIN PAGE , USE YOUR CREDENTIALS FOR LOGIN \n  ");
goto redirect;
break;
}

}
    



if(fp==true && fan==true) {printf("AUTHENTICATION SUCCEEDED\n");


int h;
printf("SELECT THE INDEX\n");
    printf(" 1) ACCOUNT DETAILS \n 2) DEPOSITE MONEY \n 3) WITHDRAW MONEY \n 4) TRANSFER MONEY \n 5) CLOSE ACCOUNT\n ");
scanf("%d",&h);



switch(h){
case  1:
{
    char caccno[22];
    FILE* dls = fopen("details","r");
if(dls==NULL) printf("ERROR OCCURED");
while(fgets(caccno,22,dls)!=NULL){
    if(strstr(caccno,inaccno)!=NULL){
        strcpy(acc.accno,inaccno);
        break;
    }
}
if(fgets(acc.name,22,dls)==NULL);

if(fgets(acc.apin,22,dls)==NULL);



;

if(fgets(acc.status,22,dls)==NULL);
     
   
  printf("%s\n",acc.accno);
printf("%s",acc.name);
printf("%s",acc.apin);
printf("%lf\n",acc.balance);
printf("%s\n",acc.status);




 

    break;
}











}}



else printf("AUTHENTICATION FAILED\n");

    return  0;
}