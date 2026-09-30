#include <stdio.h>
#include <stdlib.h>
//20-sumAllElement
/* nhap vao mot so nguyen duong n
tinh tong cac don vi cua so nguyen n

vd: n = 1234
=> result = 10

vd: n = 3234
=> result = 12
*/
int main()
{
  /* int n;
   int sum = 0;
   printf("\nNhap n: ");
   scanf("%d", &n);

 /* do{
    sum += n % 10;
    n = n / 10;

  }while(n != 0);

    printf("\nSum la: %d", sum);




    while(n != 0){
        sum += n % 10;
        n = n / 10;
    }

    printf("\nSum la: %d", sum);
      */



    int number;
    int sum = 0;

    printf("\nNhap so: ");
    scanf("%d", &number);

    while(number != 0){
        sum += number % 10;
        number = number / 10;
    }
    printf("\nTong la: %d", sum);





    return 0;
}
