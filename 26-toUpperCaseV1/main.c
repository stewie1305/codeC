#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV1
void toUpperCaseV1(void); //khai bao


int main()
{
   toUpperCaseV1();//call - su dung ham da viet
    return 0;
}
void toUpperCaseV1(void){//build
    char ch;
    //input
   printf("\nNhap chu: ");
   scanf("%c", &ch);
   fflush(stdin);
    //process
        if(ch >= 97 && ch <= 122){
            ch -= 32;
        }
    //output
   printf("\n Chu hoa la %c", ch);
}


