#include <stdio.h>
#include <stdlib.h>
//23-mulEvenOdd
/*
nhap vao so nguyen duong n >= 2
tinh tich cac so chan | tich cac so le
trong doan tu 1 den n-1
vd n = 5
tinh tich cac so chan: 8 => 2*4
tinh tich cac so le: 3 => 1*3

*/
int main()
{
 /*   int number;
    char buffer;
    int mulOdd = 1, mulEven = 1;
    int hasEven = 0, hasOdd = 0;



    do{
        printf("\nNhap so: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || number < 2){
            printf("\nNhap lai mau");
        }
    }while(buffer != 10);

            for(int i = 1; i <= number -1; i++){
                if(i % 2 == 0){
                    mulEven *= i;
                    hasEven = 1;
                }else{
                    mulOdd *= i;
                    hasOdd = 1;
                }
            }
            mulEven *= hasEven;
            mulOdd *= hasOdd;

            printf("\nMulOdd = %d", mulOdd);
            printf("\nMulEven = %d", mulEven);


*/

    int n;
    int mulEven = 1, mulOdd = 1, hasEven = 0, hasOdd = 0;
    char buffer;

    do{
        printf("\nNhap so: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10){
            printf("\nNhap lai");
        }
    }while(buffer != 10);

    for(int i = 1; i <= n -1 ; i++){
        if(i % 2 == 0){
            mulEven *= i;
            hasEven = 1;
        }
        else{
            mulOdd *= i;
            hasOdd = 1;
        }
    }
    mulEven *= hasEven;
    mulOdd *= hasOdd;

    printf("\nMulEven = %d", mulEven);
    printf("\nMulOdd = %d", mulOdd);





    return 0;
}
