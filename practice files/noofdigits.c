 #include <stdio.h>


 int main(){
 
int i,n;
  i=0;
  
printf("ENTER A NUMBER TO COUNT DIGITS - ");
scanf("%d", &n);

while (n!=0){
 n = n/10;
 i++;

}

printf("NO OF DIGITS ARE %d",i);
return 0;
 }