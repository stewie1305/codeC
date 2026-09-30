#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nBang cuu chuong");
    for(int i = 1; i <= 10; i++){
        printf("\nBang Cuu Chuong %d\n", i);
        for(int j = 0; j < 10; j++){
            printf("\n%d x %d = %d", i, j, i*j);
        }
    }

    return 0;
}
