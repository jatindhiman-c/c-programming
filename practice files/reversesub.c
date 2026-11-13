#include <stdio.h>

int main(){
int num = 1234;
int num1 = 1234;
int rev,rem,a;
printf("Number is %d\n",num);

 for(int i = 0; i<4;i++)
{
rem = num%10;
num = num/10;
rev = rev*10 + rem;
}

a =rev-num1;
printf("%d\n",a);

    return 0;
}