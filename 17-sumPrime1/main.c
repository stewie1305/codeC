#include <stdio.h>
#include <stdlib.h>
//17-sumPrime1
int main()
{
   int start, end;
   int sumPrime = 0;
   printf("\nNhap start: ");
   scanf("%d", &start);

   printf("\nNhap end: ");
   scanf("%d", &end);

   if(start > end){
    int tmp = start;
    start = end;
    end = tmp;
   }


    for(int number = start; number <= end; number++){
        int isPrime = 1;
        if(number >= 2){//check
           for(int i = 2; i <= number-1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
           }
               if(isPrime == 1){
                sumPrime += number;
               }

        }
    }
    printf("\nsumPrime = %d", sumPrime);



    return 0;
}
