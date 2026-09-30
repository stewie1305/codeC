#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int compareArray(int arr1[], int size1,
                  int arr2[], int size2);
int findFirstIndex(int arr[], int size, int key);
void findListIndex(int arr[], int size,
                   int arrS[], int* sizeS, int key);

int main()
{
    int arr1[] = {1,2,3,4,5,3,3,3};
    int size1 = sizeof(arr1) / sizeof(arr1[1]);
    int arr2[] = {1,2,3,4,5,6,7};
    int size2 = sizeof(arr2) / sizeof(arr2[1]);
    //xai ham
    //int result = compareArray(arr1, size1, arr2, size2);
    //int result = findFirstIndex(arr1, size1, 3);
    findListIndex(arr1, size1, arr2, &size2, 3);
    // in kqua
    //printf("\nPos = %d", result);
    outputArray(arr2, size2);





return 0;
}
void findListIndex(int arr[], int size,
                   int arrS[], int* sizeS, int key){
    *sizeS = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == key){
            arrS[*sizeS] = i;
            (*sizeS) ++;
        }

    }
}


int findFirstIndex(int arr[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == key) return i;
    }
    return -1;
}

int compareArray(int arr1[], int size1,
                  int arr2[], int size2){
    int size = size1;
    if(size1 > size2){
        size = size2;
    }
    for(int i = 0; i <= size - 1; i++){
        if(arr1[i] > arr2[i]) return 1;
        else if(arr1[i] < arr2[i]) return -1;
    }
    if(size1 > size2) return 1;
    else if(size1 < size2) return -1;
    else return 0;
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
