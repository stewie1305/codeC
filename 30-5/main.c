#include <stdio.h>
#include <stdlib.h>
//30-5
/*
ham nhap vao n, return so fibonacci thu n
*/
int fibonacci(int n);
int fibonacciV2(int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    int result = fibonacciV2(n);
    printf("\nKet qua ne %d", result);
    return 0;
}
int fibonacci(int n){
    int prev = 0;
    int curr = 1;
    int result = 1;

    for(int i = 1; i <= n - 1; i++){
        result = curr + prev;
        prev = curr;
        curr = result;
    }
    return result;
}
int fibonacciV2(int n){
    if(n == 1 || n == 2) return 1;
    return fibonacci(n -1)+ fibonacci(n-2);
}
