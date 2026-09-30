#include <stdio.h>
#include <stdlib.h>
//12-checkPrime

/*
nhap vao 1 so nguyen
kiem tra xem so do co phai la so nguyen to khong

so nguyen to la gi?
la so chia het cho 1 va chinh no

--
so nguyen to phai tu 2 tro len
neu be hon 2 thi khong phai la so nguyen to
neu tu 2 tro len thi co the la so nguyen to

--
la so chi chia het cho 1 va chinh no
neu n k chia het cho so nao tu 2 => n-1 => snt
neu n chia het cho so nao tu 2 => n-1 => kh la snt

con neu chay tu 2 den n-1 ma n kh chia het cho thg nao thi
n la snt
*/
int main()
{
    /*
    int number;
    printf("\nInput a number: ");
    scanf("%d", &number);

    if(number >= 2){//n co the la so nguyen to
        for(int i = 2; i <= n-1; i++){
            if(n % i == 0 ){
                printf("\nKhong la so nguyen to: ");

            }
        printf("\nLa so nguyen to");
    }else{
        printf("\nKhong la so nguyen to: ");
    }*/

    int number;
    printf("\nInput a number: ");
    scanf("%d", &number);

    if(number >= 2){
        //ktra xem
        for(int i = 2; i  <= number -1; i++){
            if(number % i == 0){
                printf("\n%d is not prime", number);
                return 0;
            }
        }
        printf("\n%d is prime", number);


    }else{
        printf("\n%d is not prime", number);
    }






    return 0;
}

