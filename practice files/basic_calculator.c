#include <stdio.h>
#include <math.h>



int main() {

   double n1,n2;
    printf("Enter first number - ");
    scanf("%lf",&n1);
    

char op;

printf("Enter the operator (+, -, *, / , %) - ");
again:
scanf(" %c",&op);

switch(op){

case '+':

    printf("Enter second number - ");
    scanf("%lf",&n2);
    double resulta = n1 + n2;
    printf("Result = %.2lf",resulta);
 break;
    case '-':

    printf("Enter second number - ");
    scanf("%lf",&n2);
    double results = n1 - n2;
    printf("Result = %.2lf",results);
    break;


    case '*':

    printf("Enter second number - ");
    scanf("%lf",&n2);
    double resultm = n1 * n2;
    printf("Result = %.2lf",resultm);
 break;

    case '/': 
    printf("Enter second number - ");
    scanf("%lf",&n2);
    double resultd = n1 / n2;
    printf("Result = %lf",resultd);
 break;

    case '%':

    printf("Enter second number - ");
    scanf("%lf",&n2);
    double resulmod = fmod(n1, n2); // fmod function is used to find the remainder of two numbers
    printf("Result = %.2lf",resulmod);
 break;

 default:
    printf("Invalid operator\n");
    printf("Please enter a valid operator (+, -, *, / , %%) - ");
    goto again;
}

return 0;
}