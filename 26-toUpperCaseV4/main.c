#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV4

 char toUpperCaseV4(char character);
int main()
{
    //input
    char ch;
    printf("\nNhap ky tu: ");
    scanf("%c", &ch);

    ch = toUpperCaseV4(ch);
printf("\nKy tu moi = %c", ch);

    return 0;
}
char toUpperCaseV4(char character){
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    return character;
}
