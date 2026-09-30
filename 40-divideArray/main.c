#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int* size);
void ouputArray(int array[], int size);
void divideArray(int arrMain[], int* sizeMain,
                 int arrSub[], int* sizeSub, int pos);
int main()
{
    int arr1[100] = { 2, 4,6 ,8, 10};
    int size1 = 5;
    int arr2[100] = {1,2,3,4};
    int size2 = 4;
    int arr3[100] = {1,2,3,4};
    int size3 = 4;
    int pos = 2;
    /*
    printf("\nMang vua nhap");
    printf("\nMang 1: ");
    outputArray(arr1, size1);
    printf("\nMang 2: ");
    outputArray(arr2, size2);
    printf("\nMang sau khi tach");
    divideArray(arr1, &size1, arr2, &size2, pos);
    */
    divideArrayV2(arr1, size1, arr2, &size2, arr3, &size3, pos);
    printf("\nMang 1: ");
    outputArray(arr1, size1);
    printf("\nMang 2: ");
    outputArray(arr2, size2);
     printf("\nMang 3: ");
    outputArray(arr3, size3);

    return 0;
}

void divideArrayV2(int arrMain[], int sizeMain,
                 int arrSub1[], int* sizeSub1,
                 int arrSub2[], int* sizeSub2, int pos){
    *sizeSub1 = 0;
    *sizeSub2 = 0;
    for(int i = 0; i <= pos - 1; i++){
        arrSub1[*sizeSub1] = arrMain[i];
        (*sizeSub1) ++;
    }

    for(int i = pos; i <= sizeMain - 1; i++){
        arrSub2[*sizeSub2] = arrMain[i];
        (*sizeSub2) ++;
    }
}

void divideArray(int arrMain[], int* sizeMain,
                 int arrSub[], int* sizeSub, int pos){
    *sizeSub = 0;// xoa mang sub trc khi luu phan con lai
    for(int i = pos; i <= *sizeMain - 1; i++){
        arrSub[*sizeSub] = arrMain[i];
        (*sizeSub) ++;
    }
    //giam kich thuoc arrMain ve dung cho bi cat
    *sizeMain = pos;

}
void inputArray(int array[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size -1; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}

//40-divideArray
/*
divideArray : tach mang
mo ta ham: f(arrMain[], pos, arrSub[])
    arrMain 2 4 6 8 10      pos: 2
    index:  0 1 2 3 4
    arrSub

divideArrayV2:
mo ta ham; f(arrMain[], pos, arrSub1[], arrSub2[])
khuc 1 bo vao arrSub1
khuc 2 bo vao arrSub2
arrMain kh doi

*/
/*
1.insteadArray(arr[], pos, key)
trong array o vi tri thu pos thya gtri la key
    arr 2   4   6   8   10
    i   0   1   2   3   4
    pos: 2 key = 9
    arr 2   4   9   8   10

2. insertArray(arr[], pos, key): chen
    nhet key vao vi tri thu pos trong mang
    arr 2   4   6   8   10
      i  0  1   2   3   4
      pos: 2 key 9

*/

