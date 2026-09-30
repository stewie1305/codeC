#include <stdio.h>
#include <stdlib.h>
//31-swapFunction
/*
viet ham nhan vao numberA va numberB
ham co nv doi gia tri trong numberA va numberB

o ngoai main: ta goi ham tren va dua vao 2 bien voi mong muon
doi gia tri, xem thu 2 bien ta dua vao ham co swap dc kh

*/
void swapFunction(int numberA, int numberB);
void swapFunctionV2(int* numberA, int* numberB);
int main()
{
    int numberA, numberB;
    printf("\nNhap A: ");
    scanf("%d", &numberA);
    printf("\nNhap B: ");
    scanf("%d", &numberB);
    swapFunctionV2(&numberA, &numberB);

    return 0;
}

//pass by value : truyen tham tri, duoi thay doi nhma tren main thi kh
void swapFunction(int numberA, int numberB){
        int tmp = numberA;
        numberA = numberB;
        numberB = tmp;
}
void swapFunctionV2(int* numberA, int* numberB){
    int tmp = *numberA;
    *numberA = *numberB;
    *numberB = tmp;
    printf("\nNumberA func = %d", numberA);
    printf("\nNumberB func = %d", numberB);
}

