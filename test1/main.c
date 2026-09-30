#include <stdio.h>
#include <stdlib.h>
//Hoang
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int sumOdd(int n);
int divideArr(int arr[], int* size,
              int arrS[], int* sizeS, int pos);
int removeDup(int arr[], int* size);
int spliceArr(int arr[], int* size, int pos, int amount);
int main()
{
    int arr[] = {1,2,3,4,4,5,6,7,4,3,5,2};
    int size = sizeof(arr) / sizeof(arr[1]);
    int arrS[] = {1,2,3};
    int sizeS = sizeof(arrS) / sizeof(arrS[1]);
    //int n = 10;
    //int sum = sumOdd(n);
    //printf("\nSum Odd = %d", sum);
    //divideArr(arr, &size, arrS, &sizeS, 2);
    //printf("\nMang 1: ");
    //outputArray(arr, size);
    //printf("\nMang 2: ");
    //spliceArr(arr, &size, 2, 2);
    int count = removeDup(arr, &size);
    printf("\nCount = %d", count);
    outputArray(arr, size);


    return 0;
}
int spliceArr(int arr[], int* size, int pos, int amount){
    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        arr[i] = arr[i + amount];
    }
    amount = size - pos >= amount ? amount: size - pos;
    (*size) -= amount;
    return 1;
}

int removeDup(int arr[], int* size){
    int count = 0;
    for(int i = 0; i <= *size - 2; i++){
        for(int j = i + 1; j <= *size - 1; j++){
            if(arr[i] == arr[j]){
                spliceArr(arr, size, j , 1);
                j --;
                count ++;
            }
        }
    }
    return count;
}


int divideArr(int arr[], int* size,
              int arrS[], int* sizeS, int pos){
    if(pos < 0 || pos >= *size) return 0;
    (*sizeS) = 0;
    for(int i = pos; i <= *size - 1; i++){
        arrS[*sizeS] = arr[i];
        (*sizeS)++;
    }
    (*size) = pos;
    return 1;

}
// 2 1 3 1 1
//1
int sumOdd(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        if(i % 2 == 1){
            sum += i;
        }
    }
    return sum;
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
        printf("\nNhap Array[%d]:", i);
        scanf("%d", &array[i]);
    }
}
/*
1. viet ham tinh tong cac so chia het cho 2 du 1
2. viet ham tach 1 mang thanh 2 mang dua vao vi tri pos
3. viet ham xoa het cac phan tu trung trong mang


*/
