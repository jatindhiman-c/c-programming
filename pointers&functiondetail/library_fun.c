#include <stdio.h>
#include <math.h>


int main(){

{double n;// sqrt() is used to give underoot values like 7 for 49...
printf("ENTER A NUMBER - ");
scanf("%lf",&n);

double root = sqrt(n);
printf("%lf\n",root);}

{// next function is pow( x , y ) and it gives x to the power y
float x , y;
 printf("enter base - ");
scanf("%f",&x);
 printf("enter power - ");
 scanf("%f",&y);

 float result = pow( x , y);
 printf("%f",result);

}




return 0;


}