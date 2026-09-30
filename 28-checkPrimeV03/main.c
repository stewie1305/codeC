#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV03
int checkPrimeV03(void);
int main()
{
   int isPrime = checkPrimeV03();
   if(isPrime){
        printf("\n is prime");
   }
   else{
        printf("\n is not prime");
   }

    return 0;
}
int checkPrimeV03(void){
    int number;
    printf("\nNhap so: ");
    scanf("%d", &number);

    if(number >= 2){
        for(int i = 2; i <= number -1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return 1;
    }
    else{
        return 0;
    }

}
