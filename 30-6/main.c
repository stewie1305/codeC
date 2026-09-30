#include <stdio.h>
#include <stdlib.h>
//30-6 ham nhan n, tinh tong cac so chan
int sumEven(int n);

int main()
{
    int sum = sumEven(7);
    printf("\nTong ne %d", sum);
    return 0;
}
int sumEven(int n){
    int sumEven = 0;
        for(int i = 1; i <= n; i++){
           if(i % 2 == 0){
            sumEven += i;
           }
        }
        return sumEven;


}
