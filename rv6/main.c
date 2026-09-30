#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void outputArray(int array[], int size);
int arrInArr(int arr[], int size, int arrS[], int sizeS);
int insertArrInArr(int arr[], int* size,
                   int arrS[], int sizeS, int pos);
int spliceArr(int arr[], int *size, int pos, int amount);
int delSubInArr(int arr[], int* size, int arrS[], int sizeS);
void foo(int x);
int main()
{

}
void foo(int x){
    if(x > 0)foo(--x);
    printf("%d", x);

}
int delSubInArr(int arr[], int* size, int arrS[], int sizeS){
    while(1){
        int pos = arrInArr(arr, *size, arrS, sizeS);
        if(pos != -1){
            spliceArr(arr, size, pos, sizeS);
        }else{
            return 1;
        }
    }
    return 0;
}

int insertArrInArr(int arr[], int* size,
                   int arrS[], int sizeS,int pos){
    if(pos < 0 || pos >*size) return 0;
    for(int i = *size - 1; i >= pos; i--){
        arr[i + sizeS] = arr[i];
    }
    (*size) += sizeS;
    for(int i = 0; i <= sizeS - 1; i++){
        arr[pos] = arrS[i];
        pos ++;
    }
    return 1;
}
int spliceArr(int arr[], int *size, int pos, int amount){
    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        arr[i] = arr[i + amount];
    }
    (*size) -= amount;
    return 1;
}


int arrInArr(int arr[], int size, int arrS[], int sizeS){
    int check = 0;
    for(int i = 0; i<= size - 1; i++){
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

void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
