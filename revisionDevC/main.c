#include <stdio.h>
#include <stdlib.h>
float areaOfTriangle(int a, int b, int c);
int main()
{
    float result = areaOfTriangle(3,7,9);
    printf("\nket qua %.2f", result);
    return 0;
}
float areaOfTriangle(int a, int b, int c){
    float s = 0;
    s = 1.0 * 1/2 * (a + b + c);
    printf("\nS = %.2f", s);
    float result = 0;
    result = sqrt(s * (s - a)* s *(s - b)* s *(s - c));
    return result;
}
