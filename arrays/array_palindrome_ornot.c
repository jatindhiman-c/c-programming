#include <stdio.h>

int main(){
      int count = 0;
int arr[5] = { 5,4,3,4,5};
for(int i = 0;i<5;i++ ){
if(arr[i]==arr[4-i]) { 
  
   count++;
}

}

 if(count>3) printf("palindrome");

 else if(count<=3)
 printf("not a palindrome");
return 0;
}                