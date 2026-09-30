#include <stdio.h>
#include <stdlib.h>
int checkPrimeV3(void);
int main()
{

    int isPrime = checkPrimeV3();
    if(isPrime == 1){
        printf("\n is prime", isPrime);
    }
    else{
        printf("\n is not prime", isPrime);
    }
    return 0;
}
int checkPrimeV3(void){
    int number;
    printf("\nNhap so: ");
    scanf("%d", &number);
    fflush(stdin);
    if(number >= 2){
            for(int i = 2; i <= number - 1; i++){
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
