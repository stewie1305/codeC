#include <stdio.h>
#include <stdlib.h>
//25-upperCase
int main()
{
    char ch;
    printf("\nNhap ki tu: ");
    scanf("%c", &ch);
    fflush(stdin);

    if(ch >= 97 && ch <= 122){
        ch -= 32;
    }
    printf("\ch = %c", ch);



    return 0;
}
