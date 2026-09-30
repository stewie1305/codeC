#include <stdio.h>
#include <stdlib.h>
//31-geometricMean
//hàm nhận vào start và end
//  tính trung bình nhân của các số từ start đến end
float geometricMean(float start, float end);
int main()
{
    float start, end;
    printf("\nNhap start: ");
    scanf("%f", &start);
    printf("\nNhap end: ");
    scanf("%f", &end);

    printf("\nGeometric mean = %.2f", geometricMean(start, end));

    return 0;
}
float geometricMean(float start, float end){
    float result = 1;
    int mul = 1, dem = 0;

    for(int i = start; i <= end; i++){
        mul *= i;
        dem++;
        result = pow(mul,(float) 1 / dem);
    }
    return result;
}
