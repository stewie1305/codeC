#include <stdio.h>
#include <stdlib.h>
/* inductiveResult
nhap vao 1 so nguyen n
xuat ra man hinh ket qua cua
1^n + 2^n + 3^n + ... + n^n

vd nhap n =4
in ra mh kqua 1^4 + 2^4 + 3^4
*/
int main()
{
    int n;
    int sum = 0;
    printf("\nNhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
       sum += pow(i,n);
    }
    printf("\nSum =%d", sum);


    return 0;
}
