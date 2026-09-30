#include <stdio.h>
#include <stdlib.h>
//21-primeProgram
int main()
{
    int n;
    int isPrime = 1;

    do{
        printf("\nNhap n: ");
        scanf("%d", &n);
       if(n >= 2){//check
            for(int i = 2; i <= n - 1; i++){
                if(n % i == 0){
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime == 1){
                printf("\nDay la so nguyen to");
            }else{
                printf("\nDay khong phai la so nguyen to");
            }

       }else{
           printf("\nDay khong phai la so nguyen to");
       }
    }while( n != 0);







    return 0;
}
