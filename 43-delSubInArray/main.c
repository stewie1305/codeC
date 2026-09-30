#include <stdio.h>
#include <stdlib.h>
//43-delSubInArray
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int splice(int array[], int *size,
           int pos, int amount);
int arrInArr(int arr[], int size,
              int arrS[], int sizeS);
int arrInArrV2(int arr[], int size,
              int arrS[], int sizeS);
int delSubInArr(int arr[], int* size,
                 int sub[], int sizeSub);
void sort(int array[], int size);
int main()
{
    int arr[] = {2,1,3,1,3,5,5,7};
    int size = sizeof(arr) / sizeof(arr[1]);
    int arrS[] = {1,3,5};
    int sizeS = sizeof(arrS) / sizeof(arrS[1]);
    //xai ham
    //splice(arr, &size, 3,4); //3 la pos, 4 la amount
    //int result = arrInArr(arr, size, arrS, sizeS);
    //int result = arrInArrV2(arr, size, arrS, sizeS);
    //printf("\nresult = %d", result);
    //delSubInArr(arr, &size, arrS, sizeS);
    sort(arr, size);
    //in ket qua
    printf("\nMang ne: ");
    outputArray(arr, size);

    return 0;
}
void sort(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(array[i] > array[j]){
                //swap
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}


int delSubInArr(int arr[], int* size,
                 int sub[], int sizeSub){
    while(1){
        int pos = arrInArr(arr, *size, sub, sizeSub);
        if(pos != -1){
            splice(arr, size, pos, sizeSub);
        }else{
            return 1;
        }
    }
}

int arrInArrV2(int arr[], int size,
              int arrS[], int sizeS){
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

int arrInArr(int arr[], int size,
              int arrS[], int sizeS){
    //duyet mang
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrS[0]){
            // duyet mang arrS de so sanh
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

int splice(int array[], int *size,
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
        printf("%5d",array[i]);
    }
}

void inputArray(int array[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d]", i);
        scanf("%d", &array[i]);
    }
}
