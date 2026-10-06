#include <stdio.h>
int main() {    
    int arr[5] ;
    arr[6] = 10; // This will cause an out-of-bounds access
   
    return 0;
}