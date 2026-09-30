#include <stdio.h>
#include <stdlib.h>
//27-computeArea
/*
viet ham n han vao dai rong
tinh dien tich hinh chu nhat


*/
float computeArea(float width, float height);
int main()
{
    float width, height;
    printf("\nNhap width: ");
    scanf("%f", &width);
    printf("\nNhap height: ");
    scanf("%f", &height);

   float area = computeArea( width, height);
    printf("\nComputeArea = %f", area);
    return 0;
}
float computeArea(float width,  float height){

      float  area = height * width;
    return area;
}
