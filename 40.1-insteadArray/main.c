#include <stdio.h>
#include <stdlib.h>
//40.1
/*
1.insteadArray(arr[], pos, key)
trong array o vi tri thu pos thya gtri la key
    arr 2   4   6   8   10
    i   0   1   2   3   4
    pos: 2 key = 9

    2. insertArray(arr[], pos, key): chen
    nhet key vao vi tri thu pos trong mang
    arr 2   4   6   8   10
      i  0  1   2   3   4
       2   4   9   8   10
       pos: 2 key 9

*/
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void insteadArray(int array[],int size, int pos, int key);
void insertArray(int array[], int *size, int pos, int key);
int main()
{
    int arr[100] = {1,2,3,4,5};
    int size = 5;
    int pos = 2, key = 9;
    printf("\nMang da nhap: ");
    outputArray(arr, size);
    //insteadArray(arr,size,pos,key);
    insertArray(arr, &size, pos, key);
    printf("\nMang sau khi doi: ");
    outputArray(arr,size);


    return 0;
}
void insertArray(int array[], int *size, int pos, int key){

       for(int j = *size; j >= pos; j--){
        array[j] = array[j -1];
       }
        array[pos] = key;
        (*size) ++;
}


void insteadArray(int array[],int size, int pos, int key){
    for(int i = 0; i <= size - 1; i++){
        array[pos] = key;
    }
}

void outputArray(int array[], int size){
    for(int i = 0; i<= size - 1; i++){
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
