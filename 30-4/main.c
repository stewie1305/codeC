#include <stdio.h>
#include <stdlib.h>
/*

viet ham nhan vao n, tinh n giai thua
*/
int factorial(int n);
int factorialV2(int n);

int main()
{
   int n;
   printf("\nNhap n di: ");
   scanf("%d", &n);

   printf("\nKet qua la %d", factorial(n));
   printf("\nKet qua la %d", factorialV2(n));
    return 0;
}
int factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}
int factorialV2(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n-1);
}
