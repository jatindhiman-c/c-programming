  #include <stdio.h>


 int main(){
 
int i,n,r,sume,sum,j;
sum =0;
  i=0;
  
printf("ENTER A NUMBER TO COUNT DIGITS - ");
scanf("%d", &n);

while (n!=0){


    r = n%10;

sum += r;


 n = n/10;
 i++;


while(n = n/10 %2 ==0 ){

     sume +=  n%2;
}


}

printf("NO OF DIGITS ARE %d and sum is %d and %d",i,sum,sume);

return 0;
 }