#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int splice(int array[], int* size,
           int pos, int amount);
int arrInArr(int arr[], int size,
             int arrS[], int sizeS);
int removeArrInArr(int arr[], int* size,
                   int arrS[], int sizeS);
int main()
{
    int arr[] = {1,2,1,3,1,3,5,5,7};
    int size = sizeof(arr) / sizeof(arr[1]);
    int arrS[] = {1,3,5};
    int sizeS = sizeof(arrS) / sizeof(arrS[1]);
    //xai ham
    //int result = splice(arr, &size, 3,4);
    //int pos = arrInArr(arr, size, arrS, sizeS);
    removeArrInArr(arr, &size, arrS,sizeS);
    // in ket qua
    //printf("\nPos = %d", pos);
    printf("\nMang ne: ");
    outputArray(arr,size);
    return 0;
}
int removeArrInArr(int arr[], int* size,
                   int arrS[], int sizeS){
    while(1){
        int pos = arrInArr(arr, *size, arrS, sizeS);
        if(pos != -1){
            splice(arr, size, pos, sizeS);
        }else{
            return 1;
        }
    }
}

int arrInArr(int arr[], int size,
             int arrS[], int sizeS){
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrS[0]){
            for(int j = 0; j <= sizeS - 1; j++){
                if(arr[i + j] != arrS[j]) break;
                else{
                    if(j == sizeS - 1) return i;
                }

            }
        }
    }
    return -1;
}

int splice(int array[], int* size,
           int pos, int amount){
    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + amount];
    }
    (*size) -= amount;
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
