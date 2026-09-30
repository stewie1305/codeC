#include <stdio.h>
#include <stdlib.h>
//31-printOdd
//viết hàm xin người dùng n,
//in ra màn hình các số lẽ trong khoảng từ 1 đến n
void printOdd(void);
int main()
{
    printOdd();
    return 0;
}
void printOdd(void){
    int number;
    printf("\nNhap so di: ");
    scanf("%d", &number);
    for(int i = 1; i <= number; i++){
        if(i % 2 != 0){
            printf("%5d ", i);
        }
    }
}
