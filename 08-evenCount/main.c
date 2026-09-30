#include <stdio.h>
#include <stdlib.h>
//08-evenCount
/*
nhap vao 2 so nguyen lan luot la start va end
in ra man hinh cac so trong doan tu start den end
- mo ta:
    nhap start: -2
    nhap end: 6

*/
int main()
{
  int start, end;
  int tmp;
  printf("\nNhap start :");
  scanf("%d", &start);
  printf("\nNhap end :");
  scanf("%d", &end);
      if(start > end){
        tmp = start;
        start = end;
        end = tmp;
      }
   /* for (int i = start; i<= end; i++){
        printf("%5d", i);
    }
 */
    //tinh tong cac so trong doan tu start den end
     int sum = 0;

     for(int i = start; i<= end; i++){
        sum+= i;

     }


     /*
     tao project 08-workEvenCount
     in ra man hinh cac so chan trong doan
     tinh tong cac so le trong doan
     dem xem co bn so  trong doan
     dem xem co bn so chan trong doan
     */

    return 0;
}
