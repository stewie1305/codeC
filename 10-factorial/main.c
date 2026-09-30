#include <stdio.h>
#include <stdlib.h>
//10-factorial

/*
nhap vao so nguyen n
tinh giai thua cua n ( tinh n!)
vd
nhap n = 5
tinh 5! = 120
*/

int main()
{
    int n;
    int result = 1;
     printf("\nNhap n: ");
     scanf("%d", &n);

     for( int i = 1; i <= n; i++){
        result *=i;
     }
     printf("\nResult = %d", result);






    return 0;
}
