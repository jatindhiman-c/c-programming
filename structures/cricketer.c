#include <stdio.h>
#include <string.h>



typedef struct cricketer{

char name[20];
int age;
int matches;
float avgr;
}cr;

int main(){
cr p[5] = {
 {"rohit",39,67,40.7},
{"virat",38,123,46.2},
{"shubman",27,70,64.6},
{"jaspreet",32,52,40.8},
{"vaibhav",15,50,43.5}};
    for(int i =0 ; i<5;i++){
printf(" %s \n %d \n %d \n %.2f \n", p[i].name, p[i].age, p[i].matches, p[i].avgr );
    }
p[1].age==p[0].age?
    printf("age of both players is equal "): printf("not equal age");
    return 0;
}