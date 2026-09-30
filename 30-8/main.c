#include <stdio.h>
#include <stdlib.h>
//30-7 ham nhan vao start va end,  tinh trung binh nhan cua cac so
float geomatric(int start, int end);
int main()
{
    printf("\nKet qua ne %f", geomatric(2, 5));
    return 0;
}
float geomatric(int start, int end){
    int mul= 1;
    int count = 0;
    for(int i = start; i <= end; i++){
        mul *= i;
        count++;
    }
    return pow(mul,(float) 1/ count);
}
