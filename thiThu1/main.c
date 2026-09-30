#include <stdio.h>
#include <stdlib.h>
float sumElement(int n);
int main()
{
   //int n;
   //printf("\nNhap n: ");
   //scanf("%d", &n);
   float sum = sumElement(4);
   printf("\nSum = %.2f", sum);
    return 0;
}
float sumElement(int n){
    float sum = 0;
    int a = 0;
    for(int i = 1; i <= n; i++){
        a += i;
        sum = sum + 1.0 / a;
        printf("\n a = %d", a);
    }
    return sum;
}

