#include <stdio.h>
#include <stdlib.h>
 /*
     tao project 08-workEvenCount
     in ra man hinh cac so chan trong doan
     tinh tong cac so le trong doan
     dem xem co bn so trong doan
     dem xem co bn so chan trong doan
     */
int main()
{

     int start, end;
     int tmp;
     int sum = 0;
     int count = 0;
     int oddCount = 0;
     printf("\nNhap start: ");
     scanf("%d", &start);
     printf("\nNhap end: ");
     scanf("%d", &end);
     printf("\nDay cac so chan: ");
         if(start > end)
            {
                tmp = start;
                start = end;
                end = tmp;
            }
         for(int i = start; i<= end; i++)
         {
                count++;
            if(i%2 == 0)
                printf("\%5d", i);
            if(i%2 == 1)
            {
                sum+= i;
                oddCount++;
            }
          }
     printf("\nSum = %d", sum);
     printf("\nCount = %d", count);
     printf("\nOddCount = %d", oddCount);






    return 0;

}

