#include <stdio.h>

float avg(float , float , float );

float avg( float x , float y , float z){
    float avg = (x + y + z)/3;
    printf("avg of %f , %f , %f is %f", x,y,z,avg);
    return 0;

}

int main(){

    avg(3.123,1.466,80.185);
    return 0;
}