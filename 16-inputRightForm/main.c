#include <stdio.h>
#include <stdlib.h>
//16-inputRightForm
//nhap so nguyen dich thuc
//neu ng dung nhap sai, chui,nhap lai
/*
12 okr
17 oke
-21 oke
15a chui, nhap lai
17.5 chui, nhap lai

*/
int main()
{
   int number;
   char ch;

   do{
        printf("\nNhap number: ");
        scanf("%d", &number);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10){
            printf("\nDo u know input interger???");
        }
   }while(ch != 10);


    return 0;
}
