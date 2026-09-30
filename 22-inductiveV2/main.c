#include <stdio.h>
#include <stdlib.h>
////22-inductiveV2
//nhập vào 1 số nguyên dương n >= 1
//tính tổng của phép tính
//1 + 1/3 + 1/6 + ... + 1/(1+2+3...+n)
int main()
{
    int n;
    float sum = 0;
    int mau = 0;

    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
    }while(n <= 1);

        for(int i = 1; i <= n; i++){
                mau += i;
                sum += (1.0/ mau);
        }

    printf("\nTong la: %.2f", sum);











    return 0;
}
