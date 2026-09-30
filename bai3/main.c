#include <stdio.h>
#include <stdlib.h>
int fibonacci(int number);
int main()
{
    int number;
    printf("\nNhap vao so: ");
    scanf("%d", &number);
    fflush(stdin);

    printf("\n%d la so thu %d",fibonacci(number), number);
    return 0;
}
int fibonacci(int number){
    int prev = 0;
    int curr = 1;
    int result = 1;
    for(int i = 1; i <= number - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    return result;
}
