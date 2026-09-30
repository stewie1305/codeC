#include <stdio.h>
#include <stdlib.h>
//05-triangleType
/*
nhap vao 3 bien so nguyen lan luot la a,b,c
ktra xem a,b,c co tao dc tam giac kh
neu co thi tam giac gi
*/
int main()
{
  int a, b, c;

   printf("\nNhap a: ");
   scanf("\n %u", &a);

   printf("\nNhap b: ");
   scanf("\n %u", &b);

   printf("\nNhap c: ");
   scanf("\n %u", &c);

   //code xuong duoi nay la co a,b,c
   //kiem tra a,b,c co tao thanh tam giac kh
   if( a + b > c && a + c > b && b + c > a){//la tam giac
        if( a == b || a == c || b == c){
            if( a == b && b == c){
                printf("\nLa tam giac deu");
            }else if(a*a + b*b == c*c ||
                  a*a + c*c == b*b ||
                  b*b + c*c == a*a ){//co goc vuong
                printf("\nTam giac vuong can");
            }else{
                printf("\nTam giac can");
            }
        }else if( a*a + b*b == c*c ||
                  a*a + c*c == b*b ||
                  b*b + c*c == a*a){//co goc vuong
            printf("\nTam giac vuong");

        }else{
            printf("\nTam giac thuong");
        }

    }else{
        printf("\nKhong la tam giac");

    }



    return 0;
}
