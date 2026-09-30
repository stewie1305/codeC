#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;

    printf("\nNhap start: ");
    scanf("%d", &start);

    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

    //in ra cac so chan

    for(int = i; i <= end; i++){
        if(i % 2 == 0){
            printf("%5d", i);
        }
    }

    //in ra tong cac so le trong doan
    int sumOdd = 0;

    for(int i = start; i <= end; i++){
        if(i % 2 != 0){
            sumOdd +=i;
        }
    }
    printf("\nSumOdd =%d", sumOdd);



    //dem xem co bao nhieu so trong doan
    int count = 0;

    for(int i = start; i <= end; i++){
        count ++;
    }

    printf("\nCount =%d", count);


    //dem xem co bn so chan
    int countEven = 0;

    for(int = start; i <= end; i++){
        if(i % 2 == 0){
            countEven ++;
        }
    }

    printf("\nCountEven = %d", countEven);
    return 0;
}
