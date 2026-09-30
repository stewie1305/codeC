#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int arrayInArray(int array1[], int size1,
                  int key[], int sizeKey);
int search(int array[], int size, int key);
int main()
{
    int arr[] = {2,3,4,6,8,9,4,6,8};
    int size = sizeof(arr) / sizeof(arr[0]) ;
    int arrKey[] = {4,6,8};
    int sizeKey = sizeof(arrKey) / sizeof(arrKey[0]);
    int pos = arrayInArray(arr, size, arrKey, sizeKey);
    printf("\nPos = %d", pos);
    printf("\nMang ne: ");
    outputArray(arr, size);


    return 0;
}
int arrayInArray(int array[], int size,
                  int key[], int sizeKey){
    for(int i = 0; i <= size - 1; i++){
        for(int j = 0; j <= sizeKey - 1; j++){
            if(array[i] == key[j]){
                return i;
            }
        }
    }
    return 0;

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
