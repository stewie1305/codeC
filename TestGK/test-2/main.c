#include <stdio.h>
#include <stdlib.h>
int sumAllElement(int n);
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    printf("\nSum all element = %d", sumAllElement(n));

    return 0;
}
int sumAllElement(int n){
    int sum = 0;
    do{
        sum += n % 10;
        n = n / 10;
    }while(n != 0);
    return sum;
}
