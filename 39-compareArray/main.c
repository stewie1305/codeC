#include <stdio.h>
#include <stdlib.h>
//39-compareArray
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int compareArray(int arr1[], int size1,
                  int arr2[], int size2);
int main()
{
    int arr1[100] = {2,1,3,7};
    int size1 = 4;
    int arr2[100] = {2,1,3,7,6,9};
    int size2 = 6;
    printf("\nMang trc nhap");
    printf("\nmang 1: ");
    outputArray(arr1, size1);
    printf("\nmang 2: ");
    outputArray(arr2, size2);
   int result = compareArray(arr1, size1, arr2, size2);
    if(result == 1){
        printf("\nMang 1 lon hon");
    }else if(result == -1){
        printf("\nMang 2 lon hon");
    }else{
        printf("\nHai mang bang nhau");
    }


    return 0;
}void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
void inputArray(int array[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size -1 ; i++){
        printf("\nMNhap Aarray[%d]: ", i);
        scanf("%d", array[i]);
    }
}
int compareArray(int arr1[], int size1,
                  int arr2[], int size2){
    int size = size1; // size1 < size2 ? size1 : size2
    if(size1 > size2){
        size = size2;// tim size be nhat de tranh so sanh voi rac
    }
    //so sanh gia tri doi xung
    for(int i = 0; i <= size - 1; i++){
        if(arr1[i] > arr2[i]) return 1;
        else if(arr1[i] < arr2[i]) return -1;
    }
    if(size1 > size2) return 1;
    else if(size1 < size2) return -1;
    else return 0;
}
