#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, end;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);
    for(int i = start; i <= end; i++){
        if(i % 4 == 3){
            printf("%5d", i);
        }
    }


    return 0;
}
