#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int delPosInArr(int array[], int* size, int pos);
int main()
{
    int arr[] = {2,5,1,3,7};
    int size = sizeof(arr) / sizeof(arr[1]);
    delPosInArr(arr, &size, 2);
    outputArray(arr, size);
    return 0;
}
int delPosInArr(int array[], int* size, int pos){
    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + 1];

    }
    (*size) --;
    return 1;
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
