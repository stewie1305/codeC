#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int findMinArr(int array[], int size);
int delPosArr(int array[], int* size, int pos);
int findIndex(int array[], int size, int key);
int insertArr(int array[], int* size, int pos, int key);
void sort(int array[], int size);
void reverse(int array[], int size);
int main()
{
    int arr[] = {1,2,3,3,2,1,4,5,4,6};
    int size = sizeof(arr) / sizeof(arr[1]);
    //int min = findMinArr(arr, size);
     //delPosArr(arr, &size, 2);
     //int index = findIndex(arr, size,3);
     //printf("\nIndex = %d", index);
     //insertArr(arr, &size, 3,4);
     //sort(arr, size);
     reverse(arr, size);
     outputArray(arr, size);
    //printf("\nMin = %d", min);

    return 0;
}
void reverse(int array[], int size){
    for(int i = 0; i <= size / 2 - 1; i++){
       int tmp = array[i];
       array[i] = array[ size - 1 - i];
       array[size - 1 - i] = tmp;
    }
}

void sort(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(array[i] > array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int insertArr(int array[], int* size, int pos, int key){
    if(pos < 0 || pos > *size) return 0;
    for(int i = *size - 1; i >= pos; i--){
        array[i + 1] = array[i];
    }
    array[pos] = key;
    (*size) ++;
    return 1;
}


int findIndex(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
            return i;
        }
    }
    return 0;
}

int delPosArr(int array[], int* size, int pos){
    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + 1];
    }
    (*size) --;
    return 1;
}

int findMinArr(int array[], int size){
    int min = array[0];
    for(int i = 0; i <= size - 1; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}




void inputArray(int array[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
