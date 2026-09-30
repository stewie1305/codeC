#include <stdio.h>
#include <stdlib.h>
void checkPrimeV1(void);
int main()
{
    checkPrimeV1();

    return 0;
}
void checkPrimeV1(void){
    int number;
    printf("\nNhap so: ");
    scanf("%d", &number);

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
        printf("\n%d is not prime");
    }
}
