#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
//intputArray : ham nhan vao mang va nhap gia tri trong mang
void inputArray(int array[], int* size);
//outputArray : ham in cac phan tu trong mang
void outputArray(int array[], int size);
//
int main()
{
   int arrMain[MAX]; //tao 100 bien co ten la arr main
   int sizeMain = 0; //kich thuoc gia
   inputArray(arrMain, &sizeMain);

   printf("\nMang vua nhap ne: ");
    outputArray(arrMain, sizeMain);


   /* for(int i = 0; i <= sizeMain - 1; i++){
        printf("%5d", arrMain[i]);

    }
     */
    return 0;
}
//pass by refrences: truyen tham chieu (mqh giua con tro vs nhau), deu bi thay doi
//trong ham, neu la con tro
/*
address thi dung name
value thi dung *name
*/
void inputArray(int array[], int* size){
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
