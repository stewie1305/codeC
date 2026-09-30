#include <stdio.h>
#include <stdlib.h>
//18-timeCalculation
int main()
{
    int s = 0;
    int m = 0;
    int h = 0;

    printf("\nNhap so s can quy doi: ");
    scanf("%d", &s);

    h = s / 3600;
    s = s % 3600;
    m = s / 60;
    s = s %60;

    printf("\n%02d : %02d : %02d", h, m, s);



    return 0;
}
