#include <stdio.h>


int main(){

int n,i,f;
n = 4;
f = 1;
for(i=1;i<=n;i++){

    f *= i;

}

  printf("value of %d factorial is %d",i,f);

return 0;
}