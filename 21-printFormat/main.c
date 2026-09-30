#include <stdio.h>
#include <stdlib.h>
//21-printFormat
/*
ep nguoi dung nhap alphabet thuong
sau do in ra duoi dang so chu va octal






*/
int main()
{
  /*  char ch;


    do{
        printf("\nNhap ki tu di: ");
        scanf("%c", &ch);
        fflush(stdin);
       // if(ch < 'a' || ch > 'z'){
        if(ch < 97 || ch > 122){
            printf("\nNhap chu thuong di m??");
        }


    }while(ch < 'a' || ch > 'z');// hoac la 'a' va 'z'

    printf("%c %d %o", ch, ch, ch);





    */



    char ch;

    do{
        printf("\nNhap ki tu: ");
        scanf("%c", &ch);
        fflush(stdin);
        if(ch < 97 || ch > 122){
            printf("\nNhap lai mau");
        }

    }while(ch < 97 || ch > 122);

    printf("%c %d %o,", ch, ch, ch);

    return 0;
}
