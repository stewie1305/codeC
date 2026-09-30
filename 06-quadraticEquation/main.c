#include <stdio.h>
#include <stdlib.h>
//06-quadraticEquation

/*
nguoi dung nhap vao 3 so thuc lan luot la a b c
la he so cua phuong trinh ax^2 + bx + c = 0
tim nghiem cua phuong trinh  la bao nhieu
a^2 => a*a => pow(a, 2)
can 2 cua a => sqrt(a)
can 5 cua a => pow(a, (float)1/5)
*/
int main()
{
   //xin nguoi dung a b c

   //tinh delta

   // xet delta > < = 0

/*   float a, b, c;

   printf("\nNhap a: ");
   scanf("%u", &a);

   printf("\nNhap b: ");
   scanf("%u", &b);

   printf("\nNhap c: ");
   scanf("%u", &c);

   float delta = pow(b, 2) - 4*a*c;

   if(delta > 0){
    printf("\nPhuong trinh co 2 nghiem pb");
    float x1 = (-b + sqrt(delta)) / (2*a);
    float x2 = (-b - sqrt(delta)) / (2*a);
    printf("\nNghiem thu 1 la %f", x1);
    printf("\nNghiem thu 2 la %f", x2);
   }else if(delta == 0){
    printf("\nPhuong trinh co 2 nghiem kep");
    float x = ((-b) / (2*a));
    printf("\nNghiem la %f", x);
   }else{
    printf("\nPhuong trinh vo nghiem");
   }
*/

float a, b, c;
   printf("\nNhap a: ");
   scanf("%u", &a);

   printf("\nNhap b: ");
   scanf("%u", &b);

   printf("\nNhap c: ");
   scanf("%u", &c);

   if(a == 0){//bx + c = 0
        if(b == 0){// c = 0
            if(c == 0){
               printf("\nPt vo so nghiem");
            }else{
               printf("\nPt vo nghiem");
            }
        }else{
            printf("\nPt 1 nghiem: %f", -c/b);
        }
   }else{//ax^2 + bx + c = 0
       float delta = b*b - 4*a*c;

       if(delta == 0){
         printf("\nPt co nghiem kep ");
         printf("x1 = x2 = %f", -b/(2*a));
       }else if(delta > 0){
         printf("\nPt co 2 nghiem phan biet");
         printf("\nx1 = %f", (-b + sqrt(delta))/(2*a));
         printf("\nx2 = %f", (-b - sqrt(delta))/(2*a));
       }else{
         printf("\nPt vo nghiem");

       }
   }


    return 0;
}
