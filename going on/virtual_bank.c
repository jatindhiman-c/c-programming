#include <stdio.h>

 typedef struct accountdetails{
    char name[15]; // account holder name
    char accnumber[10]; // acount number
    char ppass[50]; // personal password
    char pin[6]; // account pin

}accountdetails;






int main(){
    int x;
printf(">>SELECT 1 OR 2\n");
again:
    printf(" 1) LOGIN \n 2) CREATE ACCOUNT");
scanf("%d",&x);

switch(x){
case 1: {

break;
}

case 2:
{
accountdetails newacc;
    printf("ENTER NAME FOR ACCOUNT HOLDER - ");
scanf("%s",newacc.name);
 printf("ENTER  YOUR MOBILE NUMBER AS ACCOUNT NUMBER - ");
scanf("%s",newacc.accnumber);
 printf("ENTER YOUR PERSONAL PASSWORD - ");
scanf("%s",newacc.ppass);
 printf("ENTER YOUR ACCOUNT PIN - ");
scanf("%s",newacc.pin);
break;
}
default:{

    printf("INVALID INPUT\n TRY AGAIN\n");
    goto again;
    break;
}



}




    return 0;
}