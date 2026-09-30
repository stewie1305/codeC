#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
//37- arratAssignment: gan mang hoac dan mang
/*
cpyArray: sao chep mang
copy mang thi nhu nao?
b = 5;
a = 10;
a = b;   => pass by value: truyen tham tri
         => muon gia tri de tham khao: copy
         a sao chep b
         b ng bi copy: giu nguyen
         a ng di copi: thay doi gia tri



concatArray: noi mang
    v2: nhet
    v1: ham nhan vao mang 1, mang2, mang3
    sau khi ham xu li mang1 kh doi,
                      mang2 kh doi
                      mang3 thanh mang1 + mang2

    b1 xoa mang 3;
    b2 nhet mang 1 vao mang3
    b3 nhet mang 2 vao mang 3


reverseArray: dao nguoc mang

    c1: nhet theo chieu nguoc
    c2: swap doi xung

gan doi xung | nhet | swap doi xung | duyet nguoc


*/
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void cpyArray(int arrS[], int* sizeS,
              int arrM[], int sizeM);
void cpyArrayV2(int arrS[], int* sizeS,
              int arrM[], int sizeM);
void concatArrayV2(int arrS[], int* sizeS,
              int arrM[], int sizeM);

int main()
{
    int arr1[100] = {3,1,2,7,5};
    int size1 = 5;
    int arr2[100] = {2,6,7};
    int size2 = 3;
    //muon arr1 copi arr2
    printf("\nmang trc copi: ");
    printf("\nArr1: ");
    outputArray(arr1, size1);
    printf("\nArr2: ");
    outputArray(arr2, size2);
    //cho arr1 copy arr2
    //cpyArray(arr1, &size1,arr2, size2);
    concatArrayV2(arr1, &size1, arr2, size2);
    printf("\nmang sau copi: ");
    printf("\nArr1: ");
    outputArray(arr1, size1);
    printf("\nArr2: ");
    outputArray(arr2, size2);

    return 0;
}
void inputArray(int array[], int* size){
    printf("\nNhap size: ");
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

void cpyArray(int arrS[], int* sizeS,
              int arrM[], int sizeM){
    //sao chep gia tri aka duyet mang muon copy - nhin mang
    for(int i = 0; i <= sizeM - 1; i++){
        arrS[i] = arrM[i];// gan doi xung
    }
    *sizeS = sizeM;
}
void cpyArrayV2(int arrS[], int* sizeS,
              int arrM[], int sizeM){
    //xoa thg di copy
    *sizeS = 0;
    for(int i = 0; i <= sizeM - 1; i++){
        arrS[*sizeS] = arrM[i];// nhet
        (*sizeS) ++;
    }
}
void concatArrayV2(int arrS[], int* sizeS,
              int arrM[], int sizeM){
    //nhet arrM vao arrS
     for(int i = 0; i <= sizeM - 1; i++){
        arrS[*sizeS] = arrM[i];
        (*sizeS) ++;
     }

}
