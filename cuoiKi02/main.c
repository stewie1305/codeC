#include <stdio.h>
#include <stdlib.h>
int inputArray(int array[], int* size);
int outputArray(int array[], int size);
int insertArrIntoArr(int arr[], int* size,
                     int sub[], int sizeS, int pos);
int main()
{
    int arr[] = {9,8,7,3,2,1};
    int size = sizeof(arr) / sizeof(arr[1]);
    int sub[] = {6,5,4};
    int sizeS = sizeof(sub) / sizeof(sub[1]);
    insertArrIntoArr(arr, &size, sub, sizeS,-1);
    outputArray(arr, size);
    return 0;
}
int insertArrIntoArr(int arr[], int* size,
                     int sub[], int sizeS, int pos){
    if(pos < 0 || pos > *size) return 0;
    for(int i = *size - 1; i >= pos; i--){
        arr[i + sizeS] = arr[i];
    }
    (*size) += sizeS;
    for(int i = 0; i <= sizeS - 1; i++){
        arr[pos] = sub[i];
        pos++;
    }
    return 1;
}

int outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}

int inputArray(int array[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
