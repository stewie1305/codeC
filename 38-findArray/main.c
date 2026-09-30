#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int findFirstIndex(int array[], int size, int key);
void findListIndex(int array[], int size,
                   int arrayR[], int* sizeR, int key);
int main()
{
    int arr1[100] = {8,2,4,6,6,5,2,7};
    int size1 = 8;
    int arrR[100] = { 1,2,3,4};
    int sizeR = 4;
    int key;
    printf("\nNhap key: ");
    scanf("%d", &key);
    /*
    //inputArray(arr1, &size1);
    printf("\nMang vua nhap: ");
    outputArray(arr1, size1);
    int pos = findFirstIndex(arr1, size1, key);
    if(pos == -1){
        printf("\nKhong ton tai");
    }else{
        printf("\nTim dc o vi tri %d", pos);
    }*/
    findListIndex(arr1, size1, arrR, &sizeR, key);
    if(sizeR == 0){
        printf("\nKhong tim duoc");
    }else{
        printf("\nCac vi tri tim duoc ne: ");
        outputArray(arrR, sizeR);
    }


    return 0;
}
void findListIndex(int array[], int size,
                   int arrayR[], int* sizeR, int key){
    *sizeR = 0;
    //duyet mang
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
            arrayR[*sizeR] = i;
            (*sizeR) ++;
        }
    }
}

int findFirstIndex(int array[], int size, int key){
    //duyet mang
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){//neu co pt nao giong key
            return i;// lap tuc ngung tim, nem vi tri ra

        }
    }
    return -1;// tim nhu cho ma khong co => -1

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

//38-findArray
/*
find first index: tim vi tri dau tien ma key xuat hien
    ham nhan vao 1 mang array va key
    tim key xuat hien dau tien trong mang

findListIndex: tim danh sach cac vi tri xuat hien key
    ham nhan vao array, key, arrR
    ham tim key trong array, tim thay o dau thi luu vi tri
    vao arrR
    arrR la mang luu cac vi tri can tim

*/
