#include <stdio.h>
#include <stdlib.h>
//19-perfectSquare
/* nhap vao so nguyen n
ktra so do co phai so chinh phuong khong
so chinh phuong la so can 2 ra so nguyen
*/
int main()
{
  /*  int number;
      char buffer;//hung phan du

    do{
        printf("\nNhap so: ");
        scanf("%d", &number);
        scanf("%c", &buffer);// hung phan du
        fflush(stdin); //xoa phan du con lai
        if(buffer != 10 || number < 0){
            printf("\nNhap lai di thg kia!!!");
        }

       }while(buffer != 10 || number < 0);

   /* for(int i = 0; pow(i,2) <= number; i++){
        if(pow(i,2) == number){
            printf("\n%d is perfectSquare", number);
            return 0;

        }

    }
    printf("\n%d is not perfectPrime", number);
    */


   /*
    int result = sqrt(number);

    if(sqrt(number) > result){
        printf("\n%d is not perfectSquare", number);
    }else{
        printf("\n%d is perfectSquare", number);
    }

    if(sqrt(number) == (int)sqrt(number)){
        printf("\n%d is perfectSquare", number);
    }else{
        printf("\n%d is not perfectSquare", number);
    }
*/








    int n = 0;
    char ch;

    do{
      printf("\nNhap n: ");
      scanf("%d", &n);
      scanf("%c", &ch);
      fflush(stdin);
      printf("\n%d", n);

      if(ch != 10 || n < 0 ){
        printf("\nNhap lai di m ");
      }
    }while(ch != 10 || n < 0);

    if(sqrt(n)== (int)sqrt(n)){
        printf("\n%d la so chinh phuong", n);
    }else{
        printf("\n%d khong la so chinh phuong", n);
    }







    return 0;
}
