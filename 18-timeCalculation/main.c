#include <stdio.h>
#include <stdlib.h>
//18-timeCalculation
//nhap vao 1 so nguyen dai dien cho s
//tu do quy ra gio phut giay
//vd: 4700s
//01:18:20
//in theo format
//hint: dung %02d | su dung / va %
int main()
{
/*
    int sec;
    int hour = 0;
    int minute = 0;
    printf("\nInput second :", sec);
    scanf("%d", &sec);

    printf("\nTime ");

       if(sec < 60){
            printf("%02d:%02d:%02d",hour, minute, sec);
        }else if(sec >= 60 && sec < 3600){
            minute = sec / 60;
            sec = sec % 60;
            printf("%02d:%02d:%02d",hour, minute, sec);
        }else{
            hour = sec / 3600;
            minute = sec % 3600 / 60;
            sec = sec % 3600 % 60;
        }
    printf("%02d:%02d:%02d",hour, minute, sec);
    */

    int s;
    printf("\nInput s: ");
    scanf("%d", &s);

    int hour = s / 3600;
    int minute = s % 3600 / 60;
    int sec = s % 3600 % 60;

    printf("%02d:%02d:%02d",hour, minute, sec);





    return 0;
}
