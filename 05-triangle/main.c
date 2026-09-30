#include <stdio.h>
#include <stdlib.h>
//05-triangle
/*
nhap vao 3 so nguyen lan luot la dai dien cho
3 bien a,b,c

kiem tra xem 3 bien a,b,c co the tao thanh 1
tam giac khong
neu co thi la tam giac gi
can,deu,vuong,vuong can, thuong
*/
int main()
{
     int a;
    printf("\nPlz input a number, ");
    scanf("%d", &a);

    int b;
    printf("\nPlz input a number, ");
    scanf("%d", &b);

    int c;
    printf("\nPlz input a number, ");
    scanf("%d", &c);



    if(a + b > c && a + c > b && b + c > a){//la tam giac ne
        if(a == b || b == c || a == c){//ktra tam giac can
            if(a == b && b == c && a == c){
                printf("\nDay la tam giac deu, ");
            }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\nDay la tam giac vuong can, ");
            }else{
                printf("\nDay la tam giac can, ");
            }
    }else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
        printf("\nDay la tam giac vuong, ");
    }else{
        printf("\nDay la tam giac thuong, ");
    }
    }else{
        printf("\nDay khong phai tam giac, ");
    }


    return 0;
}
