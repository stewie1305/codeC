#include <stdio.h>
#include <stdlib.h>
int factorial(int number);
int main()
{
    int number;
    printf("\nNhap so: ");
    scanf("%d", &number);
    int result = factorial(number);
    printf("\nKet qua = %d", result);
    return 0;
}
int factorial(int number){
    int result = 1;
    for(int i = 1; i <= number; i++){
        result *= i;
    }
    return result;
}
