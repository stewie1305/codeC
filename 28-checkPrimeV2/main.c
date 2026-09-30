#include <stdio.h>
#include <stdlib.h>
void checkPrimeV2(int number);
int main()
{
    int number;
    printf("\nNhap so: ");
    scanf("%d", &number);
    checkPrimeV2(number);

    return 0;
}
void checkPrimeV2(int number){
    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                printf("\n%d is not prime", number);
                return 0;
            }
        }
        printf("\n%d is prime", number);
    }
    else{
        printf("\n%d is not prime", number);
    }
}
