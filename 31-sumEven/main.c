#include <stdio.h>
#include <stdlib.h>
//31-sumEven
//viết hàm nhận vào n, tính tổng các số chẳn từ 1 đến n
int sumEven(int number);
int main()
{
    int number;
    printf("\nNhap so: ");
    scanf("%d", &number);

    printf("\nTong la = %d", sumEven(number));

    return 0;
}
int sumEven(int number){
    int sum = 0;
    for(int i = 2; i <= number; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    return sum;
}
