#include <stdio.h>
#include <stdlib.h>
//30-7
/*
viet ham xin n, in ra mh cac so le
*/
void printOdd(void);
int main()
{
    printOdd();
    return 0;
}
void printOdd(void){
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
         printf("%5d",i);
        }
    }


}
