#include <stdio.h>
#include <stdlib.h>
//22-inductiveV2
/*
nhap vao so nguyen duong n >= 1
tinh tong cua 1 + 1/2 + 1/3 + 1/6 + ... + 1/(1+2+3+...+n)
*/
int main()
{
   int number;
   char buffer;

   do{
       printf("\nNhap so di: ");
       scanf("%d", &number);
       scanf("%c", &buffer);
       fflush(stdin);
       if(buffer != 10 || number < 1){
            printf("\nNhap lai di m");
       }

   }while(buffer != 10 || number < 1);

   int sum = 0;
   float result = 0;
   for(int i = 1; i <= number; i++){
        sum += i;
        result += (float)1/sum;
   }
   printf("\nresult = %.2f", result);




    return 0;
}
