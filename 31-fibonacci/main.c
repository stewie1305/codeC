#include <stdio.h>+

#include <stdlib.h>
//31-fibonacci
//hàm nhận vào n, return số fibonacci thứ n
int fibonacci(int number);
int main()
{
    int number;
    printf("\nNhap so: ");
    scanf("%d", &number);
    printf("\n%d la so thu %d", fibonacci(number), number);
    return 0;
}
int fibonacci(int number){
    int prev = 0, curr = 1, result = 1;
    for(int i = 1; i <= number - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    return result;
}
