#include <stdio.h>
#include <stdlib.h>
int perfectSquare(int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    printf("\n %d ", perfectSquare(n));
    return 0;
}
int perfectSquare(int n){
    if(sqrt(n) == (int)sqrt(n)){
        return 1;
    }
    else return -1;
}
