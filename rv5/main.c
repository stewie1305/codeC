#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void concatArr(int arr[], int* size,
               int arrS[], int sizeS);
int divideArr(int arr[], int* size,
              int arrS[], int* sizeS, int pos);
int arrInArr(int arr[], int size, int arrS[], int sizeS);
int insertArrIntoArr(int arr[], int* size,
                     int arrS[], int sizeS, int pos);
int splice(int arr[], int* size, int pos, int amount);
int removeDup(int arr[], int* size);
int removeArrInArr(int arr[], int* size,
                    int arrS[], int sizeS);
void delKey(int arr[], int* size, int key);
int main()
{
    int arr[100] = {1,2,3,4,3,4,5,5,7};
    int size = 9;
    int arrS[100] = {3,4,5};
    int sizeS = 3;
    //concatArr(arr, &size, arrS, sizeS);
    //divideArr(arr, &size, arrS, &sizeS, 2);
    //printf("\nMang 1:");
    //outputArray(arr, size);
    //printf("\nMang 2: ");
    //insertArrIntoArr(arr, &size, arrS, sizeS, 3);
    //splice(arr, &size, 3,4);
    //removeDup(arr, &size);
    //removeArrInArr(arr, &size, arrS, sizeS);
    delKey(arr, &size, 3);
    outputArray(arr, size);
    //int result = arrInArr(arr,size,arrS,sizeS);
    //printf("\nResult = %d", result);
    return 0;


}
void delKey(int arr[], int* size, int key){
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] == key){
            splice(arr, size, i, 1);
        }

    }

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

int removeDup(int arr[], int* size){
    int count = 0;
    for(int i = 0; i <= *size - 2; i++){
        for(int j = i + 1; j <= *size - 2; j++){
            if(arr[i] == arr[j]){
                splice(arr, size,j,1);
                count ++;
            }
        }
    }
    return count;
}

int splice(int arr[], int* size, int pos, int amount){
    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        arr[i] = arr[i + amount];

    }
     (*size) -= amount;
    return 1;
}

int insertArrIntoArr(int arr[], int* size,
                     int arrS[], int sizeS, int pos){
    if(pos < 0 || pos >*size) return 0;
    for(int i = *size - 1; i >= pos; i--){
        arr[i + sizeS] = arr[i];
    }
    (*size) += sizeS;
    for(int i = 0; i <= sizeS - 1; i++){
        arr[pos] = arrS[i];
        pos++;
    }
}


int arrInArr(int arr[], int size, int arrS[], int sizeS){
    int check = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrS[check]){
            if(check == sizeS - 1) return i - check;
            check ++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;
}

int divideArr(int arr[], int* size,
              int arrS[], int* sizeS, int pos){
    (*sizeS) = 0;
    for(int i = pos; i <= *size - 1; i++){
        arrS[*sizeS] = arr[i];
        (*sizeS) ++;
    }
    (*size) = pos;
}
void concatArr(int arr[], int* size,
               int arrS[], int sizeS){
    for(int i = 0; i <= sizeS - 1; i++){
        arr[*size] = arrS[i];
        (*size) ++;
    }
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













