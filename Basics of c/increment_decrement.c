#include <stdio.h>

int main(){
 int i;
  i = 5;
   printf("value of i is %d\n", i);

   i = i + 5;
printf("value of i is %d\n", i);

i++;
printf("value of i is %d\n", i);
//i++ and ++i might give the same output above but they are completly diff 
//in i++ first it will print i then it will add 1 in it where as in ++i first it will add 1 nd then print  
return 0;
}
