#include <stdio.h>
#include <stdlib.h>
//21-primeProgram
/*
viet 1 ctrinh cho ng dung nhap vao 1 so nguyen dich thuc
ktra xem no phai la so nguyen to kh
sau do lai cho ng dung nhap vao 1 so nguyen dich thuc
ktra xem no phai la so nguyen to kh
neu nhap 0 thi ngung



*/
int main()
{
   int number;
   char buffer;
   while(1 == 1){
        //ep nhap so nguyen
       do{
           printf("\nNhap vao number: ");
           scanf("%d", &number);
           scanf("%c", &buffer);
           fflush(stdin);
           if(buffer != 10){
            printf("\nNhap lai di m");
           }
       }while(buffer != 10);
       //thoat
       if(number == 0){
          break;
       }

       //ktra so nguyen to

       int isPrime = 1;
       if(number >= 2){
            for(int i = 2; i < number -1; i++){
                if(number % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime == 1){
                printf("\nDay la so nguyen to", number);
            }else{
                printf("\nDay khong phai la so nguyen to", number);
            }
       }else{
            printf("\nDay khong phai la so nguyen to", number);
       }

   }
    return 0;
}
