 accounts = malloc(capacity*sizeof(details));
if(accounts==NULL){printf("ERROR OCCURED\n");
    return 1;}

if(totalacc==capacity){
    capacity *=2;
details* new = realloc(accounts,capacity*sizeof(details));
accounts[totalacc].sno = 10001 + totalacc;
totalacc++;

}
accounts[totalacc].sno = 10001 + totalacc;
FILE* dls = fopen("details","a");
printf("ENTER YOUR NAME - ");
scanf("%s",accounts[totalacc].name);
fprintf(dls,"%s\n",accounts[totalacc].name);
strcpy(accounts[totalacc].accno,inaccno);
fprintf(dls,"%s\n",accno);
 strcpy(accounts[totalacc].apin,inapin);
fprintf(dls,"%s\n",apin);
 accounts[totalacc].balance;
fprintf(dls,"%f\n",accounts[totalacc].balance);
strcpy(accounts[totalacc].status,"active");
fprintf(dls,"%s\n",accounts[totalacc].status);









if(fgets(acc.status,22,dls)==NULL);