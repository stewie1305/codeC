#include <stdio.h>
#include <stdlib.h>
int sumAllElement(int number);
int sumAllElementV2(int number);
int main()
{
    int number;
    printf("\nNhap so: ");
    scanf("%d", &number);
    int sum = sumAllElementV2(number);
    printf("\nSum = %d", sum);
    return 0;
}
int sumAllElement(int number){
     int sum = 0;
    while(number != 0){
        sum += number % 10;
        number = number / 10;
    }
    return sum;
}
int sumAllElementV2(int number){//de quy
    if(number == 0) return 0;
    return number % 10 + sumAllElement(number / 10);
}
