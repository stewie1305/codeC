#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void concatArrayV1(int arr1[], int size1, int arr2[],
                   int size2, int arr3[], int* size3);

void reverseArrayV1(int array[], int size);
void reverseArrayV2(int array[], int size);
const int MAX = 100;

int main()
{
    int arr1[100] = {1,2,3,4,5};
    int size1 = 5;
    int arr2[100] = {7,8};
    int size2 = 2;
    int arr3[100] = {9,10};
    int size3 = 2;
   //inputArray(arr, &size);
   printf("\nMang vua nhap ne: ");
   printf("\nMang 1: ");
   outputArray(arr1, size1);
   printf("\nMang 2: ");
   outputArray(arr2, size2);
   printf("\nMang 3: ");
   outputArray(arr3, size3);
   //xai ham concat
   concatArrayV1(arr1, size1, arr2, size2, arr3, &size3);
   printf("\nMang 3 sau khi nhap");
   printf("\nMang 3: ");
   outputArray(arr3, size3);
   //xai ham reverse
   reverseArrayV2(arr1, size1);
   printf("\nMang 1: ");
   outputArray(arr1, size1);


    return 0;
}//tran nay la ham main
void reverseArrayV2(int array[], int size){
    for(int i = 0; i <= (size/2) - 1; i++){
      //doi thg o vtri 1 vs thg o vtri size - i -1;
      int tmp = array[i];
      array[i] = array[size - i- 1];
      array[size - i - 1] = tmp;
    }
}

void reverseArrayV1(int array[], int size){
    //tao mang gia de luu arr1 bi dao nguoc
    int arrTmp[100];
    int sizeTmp = 0; // phai la so -0, vi ch co j ca
    //nhet arr1 vao Tmp theo chieu nguoc
    for(int i = size - 1; i >= 0; i--){
        arrTmp[sizeTmp] = array[i];
        sizeTmp ++;
    }
    // sao chep mang tmp vao array
    for(int i = 0; i <= sizeTmp - 1; i++){
        array[i] = arrTmp[i];
    }
    //khong can sao chep kich thuoc vi 2 thg do = nhau
}

void concatArrayV1(int arr1[], int size1, int arr2[],
                   int size2, int arr3[], int* size3){
     //xoa het cac gia tri trong mang 3
     *size3 = 0;
     //nhet arr1 vao arr3
     for(int i = 0; i <= size1 - 1; i++){
        arr3[*size3] = arr1[i];//nhet
        (*size3) ++;
     }
     //nhet arr2 vao arr3
     for(int i = 0; i <= size2 - 1; i++){
        arr3[*size3] = arr2[i];
        (*size3) ++;
     }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
void inputArray(int array[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}


//37-arrayAssignmentWork
/*
concatArrayV1: noi cac mang lai vs nhau
dau vao ham nhan vao mang 1 mang 2 va mang 3
sau khi xu li mang 1 va mang 2 khong doi
mang 3 la su ket hop cua mang 1 noi voi mang 2

reverseArray: dao nguoc mang
ham nhan vao 1 mang, kich thuoc khong bi thay doi
c1: nhet

*/
