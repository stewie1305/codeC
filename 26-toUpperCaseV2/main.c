#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV2
void toUpperCaseV2(char character);//khai bao

int main()
{
    char ch;
    printf("\nNhap ki tu: ");
    scanf("%c", &ch);
    toUpperCaseV2(ch);//call

    return 0;
}
void toUpperCaseV2(char character){//build
    //process
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    //output
    printf("\nky tu = %c", character);
}
