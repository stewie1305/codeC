#include <stdio.h>
#include <stdlib.h>
//28-checkPrimeV02 : ham co vao khong ra
void checkPrimeV02(int number);
int main()
{
   int number;
   printf("\nNhap so: ");
   scanf("%d", &number);
    checkPrimeV02(number);
    return 0;
}
void checkPrimeV02(int number){
    if(number >= 2){
        for(int i = 2; i <= number; i++){
            if(number % i == 0){
                printf("\n%d is not prime", number);
                return;
            }
        }
        printf("\n%d is prime", number);
    }
    else{
        printf("\n%d is not prime", number);
    }
}
