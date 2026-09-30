#include <stdio.h>
#include <stdlib.h>
//13-countPrime
/*nhap vao start va end
in ra man hinh cac so prime trong doan */
int main(){
     int n;
    printf("\nNhap so n: ");
    scanf("%d", &n);

    int maxPrime = -1;

    for (int number = 1; number <= n; number++) {
        int isPrime = 1;

        if (number >= 2) {
            for (int i = 2; i <= number - 1; i++) {
                if (number % i == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime == 1) {
                maxPrime = number; // cập nhật số nguyên tố lớn nhất
            }
        }
    }

        if(maxPrime != -1){
            printf("so nguyen to lon nhat: %5d", maxPrime);
        }









  // start la -2 va end la 5


    return 0;
}
