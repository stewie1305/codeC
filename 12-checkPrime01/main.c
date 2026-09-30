#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("\nInput a number: ");
    scanf("%d", &number);

    if(number >= 2){//check thu xem
      for(int i = 2; i <= number -1; i++){
        if(number % i == 0){
            printf("%d is not prime: ", number);
            return 0;
        }
      }
      printf("\n%d is prime: ", number);
    }else{
        printf("\n%d is not prime: ", number);
     }







    return 0;
}
