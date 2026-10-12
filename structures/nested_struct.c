#include <stdio.h>

struct classes{
    char section;
     struct nest;  // ! this type of nesting is used when there are some common elements to be stored  
};
struct nest{

    int no_of_students;
    int benches;
}; 

int main(){


    return 0;
}