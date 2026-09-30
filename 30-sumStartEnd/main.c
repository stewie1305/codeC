#include <stdio.h>
#include <stdlib.h>
//30-sumStartEnd
int sumStartEnd(int start, int end);
int main()
{
    int start, end;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);


   int sum = sumStartEnd(start, end);
   printf("\nSum = %d", sum);

    return 0;
}
int sumStartEnd(int start, int end){
     if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
int sum = 0;
    for(int number = start; number <= end; number ++){
        sum += number;
    }
    return sum;
}
