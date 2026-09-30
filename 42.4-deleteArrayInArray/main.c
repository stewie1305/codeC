#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void deleteArrayInArray(int array[], int* size,
                       int pos, int count);
int main()
{
    int arr[100] = {1,2,3,4,5};
    int size = 5;
    int pos = 1;
    int count = 2;
    printf("\nMang trc xoa");
    outputArray(arr, size);
    deleteArrayInArray(arr, &size, pos, count);
    printf("\nMang sau xoa");
    outputArray(arr, size);


    return 0;
}
void deleteArrayInArray(int array[], int* size,
                       int pos, int count){
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + count];
    }
    (*size) -= count;


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
        printf("\nNhap Array[%d]: ",i);
        scanf("%d", &array[i]);
    }
}
