#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void ouputArray(int array[], int size);
int sortArr(int array[], int size);
void printLongestArr(int array[], int size);
int main()
{
    int arr[100] = {2,3,4,1,2,3,3,4,4,2,4,5,7,1,2};
    int size = 15;
    //sortArr(arr, size);
    printLongestArr(arr, size);
    //outputArray(arr, size);
    return 0;
}
void printLongestArr(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(array[i] < array[j]){
                i++;
               printf("%5d", array[j]);
            }



        }

    }



}

int sortArr(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(array[i] > array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
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
