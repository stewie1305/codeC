#include <stdio.h>
#include <stdlib.h>
// 11-fibonacci
/*
day so hoan hao
nhap vao 1 so nguyen n
tim so o vi tri thu n trong day fibonacci
*/
int main()
{
    //khi n = 1 thi
    int prev = 0;
    int curr = 1;
    int result = 1;

    int n;//xin vtri muon tim
    printf("\nNhap n di: ");
    scanf("%d", &n);

    for(int i = 1; i <= n - 1; i++){
        result = prev + curr;
        prev = curr;
        curr = result;
    }

    printf("\n%d la so o vi tri thu %d", result);



    return 0;
}
