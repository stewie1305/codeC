#include <stdio.h>
#include <stdlib.h>
int checkPrimeV4(int number);
int main()
{
    int number;
    printf("\nNhap so: ");
    scanf("%d", &number);

    int isPrime = checkPrimeV4(number);

    if(isPrime == 1){
        printf("\n%d is prime", number, isPrime);
    }else{
        printf("\n%d is not prime", number, isPrime);
    }

    return 0;
}
int checkPrimeV4(int number){
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
