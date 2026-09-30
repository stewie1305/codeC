#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n);
int main()
{
   int n;
   printf("\nNhap n: ");
   scanf("%d", &n);
   printf("%d", fibonacci(n));
    return 0;
}
int fibonacci(int n){
    int prev = 0;
    int curr = 1;
    int result = 1;
    while(n <= 0){
        return -1;
    }
    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }
    return result;
}
