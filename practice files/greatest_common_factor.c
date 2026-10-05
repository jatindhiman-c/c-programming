 #include <stdio.h>

 void hcf(int a, int b){

      int hcf=1;
      for(int i = 1; i <= a && i <= b; i++){
         if(a%i==0 && b%i==0){
               hcf = i;
         }
      }
      printf("HCF of %d and %d is %d", a, b, hcf);

return;

 }

 int main(){

    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    hcf(a,b);

    return 0;
 }