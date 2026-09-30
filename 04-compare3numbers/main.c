#include <stdio.h>
#include <stdlib.h>
//04-compare3numbrs
//nhap tu bam phim 3 so nguyen
//lan luot la a, b, c
//nhiem vu: xuat ra man hinh ten bien co gtri lon nhat

/*
    nhap a : 10
    nhap b : 20
    nhap c : 20

    a lon nhat (a > b && a > c)
    b lon nhat (b > a && b > c)
    c lon nhat (c > a && c > b)
    a va b lon nhat ( a == b && a > c )
    a va c lon nhat (a == c && a > b )
    b va c lon nhat (b == c && b > a )
    a, b, c bang nhau ( a == b && b == c)

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
D:\code\C\04-compare3numbers\main.c    scanf("%d", &c);

    if(a > b && a > c){
        printf("\n%d is the biggest", a);

    }else if(b > a && b > c){
        printf("\n%d is the biggest", b);

    }else if(c > a && c > b){
        printf("\n%d is the biggest", c);

    }else if(a == b && a > c){
        printf("\n%d is the biggest", a, b);

    }else if (a == c && a > b){
        printf("\n%d is the biggest", a, c);

    }else if (b ==c && b > a){
        printf("\n%d is the biggest", b, c);

    }else{
        printf("\n%d is the same value", a, b, c);
    }



    return 0;
}












/*
nhap vao 3 so nguyen lan luot la dai dien cho
3 bien a,b,c

kiem tra xem 3 bien a,b,c co the tao thanh 1
tam giac khong
neu co thi la tam giac gi
can,deu,vuong,vuong can, thuong
*/
