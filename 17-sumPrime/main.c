#include <stdio.h>
#include <stdlib.h>
//1. SumPrime:
//tính tổng các số nguyên tố trong khoảng từ
// start đến end

int main()
{
    int start, end;
    int sum = 0;
    int isPrime = 1;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
            start = end;
            end = tmp;
    }

    for(int number = start; number <= end; number++){
            isPrime = 1;
            if(number >= 2){//check
                for(int i = 2; i <= number-1; i++){
                        if(number % i == 0){
                            isPrime = 0;
                            break;
                        }
                }
                if(isPrime == 1){
                    sum += number;

                }
            }
        }
    printf("sum %d", sum);







    return 0;
}
