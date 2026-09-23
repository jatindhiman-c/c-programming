 #include <stdio.h>


 int main(){
 
int i,n,r,sum;
sum =0;
  i=0;
  
printf("ENTER A NUMBER TO COUNT DIGITS - ");
scanf("%d", &n);

while (n!=0){

    r = n%10;

sum += r;


 n = n/10;
 i++;

}

printf("NO OF DIGITS ARE %d and sum is %d",i,sum);

return 0;
 }