#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV04
int isPrime(int number);
int main()
{
    int number;
    printf("\nNhap so nguyen: ");
    scanf("%d", &number);

    if(isPrime(number)){
        printf("\n%d is prime", number);
    }
    else{
        printf("\n%d is not prime", number);
    }

    return 0;
}
int isPrime(int number){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                return 0;
            }
        }
        return number >= 2;

}
