#include <stdio.h>
#include <stdlib.h>
//24-printParttern
//nhap vao height va width
// vd height = 5 width = 7
/*
* * * * * * *
*           *
*           *
*           *
*           *
* * * * * * *



*/
int main()
{
    /*
    int height, width;
    printf("\nNhap height: ");
    scanf("%d", &height);

    printf("\nNhap width: ");
    scanf("%d", &width);

    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){
            if(h == 1 || h == height || w == 1 || w == width){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    */


/*


    int height, width;

    printf("\nNhap height: ");
    scanf("%d", &height);

     printf("\nNhap width: ");
    scanf("%d", &width);

    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){
            if(h == 1 || h == height || w == 1 || w == width){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    */

    int height, width;

    printf("\nNhap height: ");
    scanf("%d", &height);
    printf("\nNhap width: ");
    scanf("%d", &width);

    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){
            if(h == 1 || h == height || w == 1 || w == width){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
     printf("\n");
    }








    return 0;
}
