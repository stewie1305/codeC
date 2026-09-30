#include <stdio.h>
#include <stdlib.h>
//31-factorial
//viết hàm nhận vào n, tính n giai thừa
int factorial(int number);
int main()
{
    int n;
    printf("\nNhap so: ");
    scanf("%d", &n);
    printf("\nMul = %d", factorial(n));
    return 0;
}
int factorial(int number){
    int mul = 1;
    for(int i = 1; i <= number; i++){
        mul *= i;
    }
    return mul;
}
