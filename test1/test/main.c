#include <stdio.h>
#include <stdlib.h>

int main()
{
   int b = 5;
   if(b == 5){
    b += 2;
   }else if(b == 7){
    b = 2;
   }else{
    b -= 3;
   }
   printf("b ne: %d", b);
}
