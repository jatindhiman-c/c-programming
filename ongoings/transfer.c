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
details rec,r;
    


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

fprintf(dls,"%lf\n",acc.balance = 1000);
strcpy(acc.status,"active");
fprintf(dls,"%s\n",acc.status);


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

    char caccno[22];
    char balc[12];
    FILE* dls = fopen("details","r");
if(dls==NULL) printf("ERROR OCCURED");
while(fgets(caccno,22,dls)!=NULL){
    if(strstr(caccno,inaccno)!=NULL){
        strcpy(acc.accno,inaccno);
        break;
    }
}

if(fgets(acc.name,22,dls)==NULL){return 1;}
if(fgets(acc.apin,22,dls)==NULL){return 1;}
if(fgets(balc,22,dls)==NULL){return 1;}
{sscanf(balc,"%lf",&acc.balance);}
if(fgets(acc.status,10,dls)==NULL){return 1;}   

switch(h){
case  1:
{

  printf("%s\n",acc.accno);
printf("%s",acc.name);
printf("%s",acc.apin);
printf("%lf\n",acc.balance);
printf("%s",acc.status);
 break;
}

case 2:{
printf("ENTER AMMOUNT TO BE DEPOSITED - ");
double dip;
scanf("%lf",&dip);

acc.balance += dip;
printf("AMOUNT DEPOSITED\n");
printf("CURRENT BALANCE IS %lf\n",acc.balance);
break;
}

case 3:{
printf("ENTER AMOUNT TO BE WITHDRAWN - ");
double with;
scanf("%lf",with);
acc.balance -= with;
printf("AMOUNT WITHDRAWN \n");
printf("CURRENT BALANCE IS %lf",acc.balance); 
    break;
}

case 4:{
   



 printf("ENTER ACCOUNT NUMBER OF RECIEVER - ");
    scanf(" %s",rec.accno);
    printf("ENTER AMOUNT TO BE TRANSFERED - ");
    double tr;
    scanf("%lf",&tr);

    acc.balance -= tr;
    rec.balance += tr;
        break;
    }





}
char ctr[12];
FILE* dls = NULL;
 fopen("details","r");
if(dls==NULL) printf("ERROR OCCURED");
while(fgets(ctr,22,dls)!=NULL){
    if(strstr(ctr,rec.accno)!=NULL){
        strcpy(rec.accno,ctr);}
    }
        if(fgets(rec.name,22,dls)==NULL){return 1;}
if(fgets(rec.apin,22,dls)==NULL){return 1;}
if(fgets(balc,22,dls)==NULL){return 1;}
{sscanf(balc,"%lf",&rec.balance);}
if(fgets(rec.status,10,dls)==NULL){return 1;}   

FILE* tmp = ("temp","a");
if(dls == NULL || tmp == NULL){
while(fscanf(dls,"%s %s %s %lf %s",r.accno,r.name,r.apin,r.balance,r.status)==6);
if(strcmp(r.accno,acc.accno)!= 0 && strcmp(r.accno,acc.accno)!= 0){
    fprintf(tmp,"%s\n%s\n%s\n%lf\n%s",r.accno,r.name,r.apin,r.balance,r.status);
}}}



else printf("AUTHENTICATION FAILED\n");

    return  0;
}