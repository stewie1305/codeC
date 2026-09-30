#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void deleteArray(int array[], int* size, int pos);
void deleteAllElement(int array[], int* size,int key);




int main()
{
    int arr1[100] = {1,2,3,4,5,5,6,4,3,2,0};
    int size1 = 11;
    int arr2[100] = {1,2,3};
    int size2 = 3;
    int key;
    printf("\nNhap key: ");
    scanf("%d", &key);
    deleteAllElement(arr1, &size1, key);
    printf("\nMang da xoa: ");
    outputArray(arr1, size1);




    return 0;
}


void deleteArray(int array[], int* size, int pos){
        for(int i = pos; i <=  *size - 1; i++){
            array[i] = array[i + 1];
        }
         (*size) --;
}
void deleteAllElement(int array[], int* size, int key){

    for(int i = 0; i <= *size - 1; i++){
         if(array[i] == key){
            deleteArray(array, size, i);
         }
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
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
