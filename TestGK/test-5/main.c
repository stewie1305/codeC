#include <stdio.h>
#include <stdlib.h>
void rebuild(int* n);
int main()
{
    int n;
    int soCuoi = 0;
    int soDau = 0;
    int soMoi = 0;
    printf("\nNhap n: ");
    scanf("%d", &n);
    rebuild(&n);
/*
    if(n <= 10){
        printf("\nso moi = %d", n);
    }else{


        soCuoi= n % 10;
        printf("SoCuoi %d", soCuoi);


        if(n > 10){
            n = n / 10;
            soDau = n / 10 % 10;
            soDau *= 10;
        }
        if(n < 10){
            soDau += 10;
        }




        soMoi = soCuoi + soDau;
        printf("\nSo moi = %d", soMoi);
    }
    */
    //printf("\nSo moi = %d", rebuild(&n));

    return 0;
}
void rebuild(int* n){
    int soDau = 0;
    int soCuoi = 0;
    int soMoi = 0;
    if(n <= 10){
        printf("\nSo moi = %d", *n);
    }
    else{
        soCuoi = *n % 10;
        if(*n > 10){
            *n = *n / 10;
            soDau = *n / 10 % 10;
            soDau *= 10;
        }
        if(*n < 10){
            soDau += 10;
        }
        *n = soDau + soCuoi;
    }
   printf("\nSo moi = %d", *n);

}
