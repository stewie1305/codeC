#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soLuong = 0;
    float soTien = 0;
    do{
        int matHang;
        printf("\nNhap so luong mat hang:");
        scanf("%d", &matHang);
        for(int i = 1; i <= matHang; i++){
            printf("\nNhap so luong mat hang thu %d: %d",i, soLuong);
            scanf("%d", i, &soLuong);
        }

    }


    return 0;
}
