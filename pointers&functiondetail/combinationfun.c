#include <stdio.h>

void com(){

int n,r,j,k;
printf("Enter value of n - ");
scanf("%d",&n);
printf("Enter value of r - ");
scanf("%d",&r);
int nmr = n - r;
int fact=1,comb=1,rfact=1,nmrfact=1,d = 1;


for(int i = 1; i <= n; i++){
    fact *=i;}


for(int j = 1; j <= r; j++){
    rfact *= j;}


    for(int k = 1; k <= nmr; k++){
    nmrfact *= k;}


d = (rfact*nmrfact);
comb = fact/d;
printf("Combination of %dC%d is %d", n, r, comb);
return;
}

int main(){


com();

return 0;
}