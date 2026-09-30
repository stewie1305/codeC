#include <stdio.h>
#include <stdlib.h>
//checkPrimeV2
int main()
{
    int number;
    printf("\nInput a number: ");
    scanf("%d", &number);

    int isPrime = 1;//1 true || 0 false

    if(number >= 2){//ktra tiep
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                isPrime = 0;//mat niem tin || break: thoat khoi vong lap gan nhat
                break;
            }
        }
        if(isPrime == 1){
            printf("\n%d is prime", number);
        }else{
            printf("\n%d is not prime", number);
        }

    }else{
        printf("\n%d is not prime", number);
    }


    return 0;
}
