#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void reverseArray(int arrS[], int* sizeS,
                 int arrM[], int sizeM);

int main()
{
   int arr1[100] = {1,2,3,4};
   int size1 = 4;
   int arr2[100] = {5,6,7};
   int size2 = 3;
   printf("\nMang truoc dao nguoc");
   printf("\nArr1: ");
   outputArray(arr1, size1);
   printf("\nArr2: ");
   outputArray(arr2, size2);
   reverseArray(arr2, &size2, arr1,size1);
   printf("\nMang sau dao nguoc");
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
        printf("\nNhap Array[%d]:", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }

}
void reverseArray(int arrS[], int* sizeS,
                 int arrM[], int sizeM){
    *sizeS = 0;
    for(int i = sizeM - 1; i >= 0; i--){
        arrS[*sizeS] = arrM[i];
        (*sizeS) ++;
    }

}
