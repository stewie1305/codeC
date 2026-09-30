#include <stdio.h>
#include <stdlib.h>
//31-checkEvenOdd
int checkEvenOdd(void);

int main()
{
  /*  int result = checkEvenOdd();
    if(result){
        printf("\nDay la so chan");
    }
    else{
        printf("\nDay la so le");
    }
    */
    printf("\nKet qua %d", checkEvenOdd());

    return 0;
}
int checkEvenOdd(void){
    int number;
    printf("\nNhap so: ");
    scanf("%d", &number);

    return number % 2 == 0;
}
