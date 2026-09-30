#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int findKeyArr(int array[], int size, int key);

int main()
{
    int arr[] = {2,0,1,4,3,6,4,7,9};
    int size = sizeof(arr) / sizeof(arr[1]);
    int pos = findKeyArr(arr, size, 8);
    printf("\nPos = %d", pos);
    return 0;
}
int findKeyArr(int array[], int size, int key){
    for(int i = 0; i<= size - 1; i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
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
