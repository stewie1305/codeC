#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void deleteArray(int array[], int* size, int pos);
void removeDuplicate(int array[], int *size);
int main()
{
    int arr1[100] = {2,1,3,5,2,4,5,3};
    int size1 = 8;
    printf("\nMang trc khi xoa");
    outputArray(arr1, size1);
    removeDulpicate(arr1, &size1);
    printf("\nMang sau khi xoa");
    outputArray(arr1, size1);

    return 0;
}
void removeDulpicate(int array[], int *size){
    for(int i = 0; i <= *size - 1; i++){
        for(int j = i + 1; j < *size; j++){
            if(array[i] == array[j]){
                deleteArray(array, size, j);
            }
        }
    }
}

void deleteArray(int array[], int* size, int pos){
        for(int i = pos; i <=  *size - 1; i++){
            array[i] = array[i + 1];
        }
         (*size) --;
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


