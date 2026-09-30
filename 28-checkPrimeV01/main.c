#include <stdio.h>
#include <stdlib.h>
//nhap vao 1 so nguyen ktra no co phai la snt khong
//28-checkPrimeV01

void checkPrimeV01(void);// khai bao
int main()
{

   checkPrimeV01();//call

    return 0;
}
void checkPrimeV01(void){//build
    int number;
    printf("\nNhao so: ");
    scanf("%d", &number);

    if(number >= 2){
        for(int i = 2; i <= number - 1; i++){
            if(number % i == 0){
                printf("\n%d is not prime", number);
                return;
            }
        }
        printf("\n%d is prime", number);
   }
   else{
    printf("\n%d is not prime", number);
   }

}
