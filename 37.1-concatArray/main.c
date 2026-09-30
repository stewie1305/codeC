#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int concatArrayV1(int arrS[], int* sizeS,
                  int arrM1[], int sizeM1,
                  int arrM2[], int sizeM2);

int main()
{
    int arr1[100] = {2,3,4,5,6};
    int size1 = 5;
    int arr2[100] ={1,7,8};
    int size2 = 3;
    int arr3[100] = {9,10};
    int size3 = 2;

    printf("\nmang trc khi noi : ");
    printf("\nArr1: ");
    outputArray(arr1, size1);
    printf("\nArr2: ");
    outputArray(arr2, size2);
     printf("\nArr3: ");
    outputArray(arr3, size3);
    concatArrayV1(arr3, &size3, arr1, size1, arr2, size2);
    printf("\nmang sau khi noi : ");
    printf("\nArr1: ");
    outputArray(arr1, size1);
    printf("\nArr2: ");
    outputArray(arr2, size2);
    printf("\nArr3: ");
    outputArray(arr3, size3);


    return 0;
}
int concatArrayV1(int arrS[], int* sizeS,
                  int arrM1[], int sizeM1,
                  int arrM2[], int sizeM2){
    *sizeS = 0;
    for(int i = 0; i<= sizeM1 - 1; i++){
        arrS[i] = arrM1[i];

    }
    *sizeS = sizeM1;
   for(int i = 0; i <= sizeM2 - 1; i++){
        arrS[*sizeS] = arrM2[i];
        (*sizeS) ++;
   }

}
void inputArray(int array[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%5d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i<= size - 1; i++){
        printf("%5d", array[i]);
    }
}
