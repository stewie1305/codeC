#include <stdio.h>
#include <stdlib.h>
//20-extraHomeWork
/*
bai1: nhap vao so nguyen duong n
dem so luong chu so la so nguyen to
vd 1222333999888 => ket qua 6
bai2 : nhap vao 1 so nguyen duonng n
tinh tong 1 + 2 - 3 + 4 - 5 + ... +





*/
int main()
{
    //bai1: nhap vao so nguyen duong n
// dem so luong chu so la so nguyen to

    long long int  number;
    char buffer;
    int element = 0, dem = 0;
    int isPrime = 1;


    do{
        printf("\nNhap so di: ");
        scanf("%lli", &number);
        scanf("%c", &buffer);
        if(buffer != 10){
            printf("\nNhap lai di");
        }
    }while(buffer != 10);


    do{
        element = number % 10;
        if(element >= 2){
        for(int i = 2; i <= element - 1; i++){
            isPrime = 1;
            if(element % i == 0){
                    isPrime = 0;
                    break;
            }
        }
        if(isPrime == 1){
                dem ++;

        }
    }
    number = number / 10;

    }while(element != 0);

     printf("\nKet qua la: %d", dem);


     //bai 2
     //nhap vao 1 so nguyen duonng n
// tinh tong 1 + 2 - 3 + 4 - 5 + ... +

     int number;
     char buffer;
     int sum = 0;

     do{
        printf("\nNhap so i: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10){
            printf("\nNhap lai mau");
        }
     }while(buffer != 10);

     for(int i = 1; i <= number; i++){
            sum += pow((-1), i) * i;
     }
     printf("\nTong la = %d", sum);



    //bai 3
    //nhap so nguyen duong n , tinh tong -2/3 + -3/4 + ...

    int number;
    float sum = 0;
    char buffer;

    do{
        printf("\nNhap so: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10){
            printf("\nNhap lai mau");
        }
    }while(buffer != 10);

    for( int i = 1; i <= number; i++){
        sum += (float) pow(-1,i)* (2*i) / (2* i +1);
    }
    printf("\nTong la = %f", sum);



    //bai 4
    // so dao nguoc 1234 => 4321

    int number;
    int result = 0;
    char buffer;

    do{
        printf("\nNhap so: ");
        scanf("%d", &number);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10){
            printf("\nNhap lai di");
        }

    }while(buffer != 10);

    while( number > 0){
        result= result * 10 + number % 10;
        printf("%d", result);
        number = number / 10;
    }

    printf("\nResult = %d", result);













    return 0;
}
