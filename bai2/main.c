#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x, n;
   printf("\nNhap x: ");
   scanf("%d", &x);
   printf("\nNhap n: ");
   scanf("%d", &n);

   printf("\nS(%d,%d) = %d ", x, n, pow(-1,n+1) * pow(x,n));
    return 0;
}
