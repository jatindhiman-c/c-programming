#include <stdio.h>

void per(){

int n,r,j,k;
printf("Enter value of n - ");
scanf("%d",&n);
printf("Enter value of r - ");
scanf("%d",&r);
int nmr = n - r;
int fact=1,perm=1,rfact=1,nmrfact=1,d = 1;


for(int i = 1; i <= n; i++){
    fact *=i;}





    for(int k = 1; k <= nmr; k++){
    nmrfact *= k;}


d = (nmrfact);
perm = fact/d;
printf("Permutation of %dP%d is %d", n, r, perm);
return;
}

int main(){


per();

return 0;
}