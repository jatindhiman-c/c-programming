#include <stdio.h>

typedef struct pokemon{
    char name;
    int hp;
    int attack;
       
}normal;
typedef struct legendary{

    int extrahp;
    normal asset;  // ! this type of nesting is used when there are some common elements to be stored
}legendary; 

int main(){
 struct legendary mewto;
 mewto.extrahp  = 45;
 mewto.asset.attack = 190;  //! way to initialise a specific data after nesting 


    return 0;
}  