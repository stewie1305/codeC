#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int compareArray(int array1[], int size1,
                  int array2[], int size2);
int main()
{
    int arr1[100] = {2, 1, 3, 7};
    int size1 = 4;
    int arr2[100] = {2, 1, 3,7};
    int size2 = 4;
    printf("\nMang da nhap: ");
    printf("\nMang 1: ");
    outputArray(arr1, size1);
    printf("\nMang 2: ");
    outputArray(arr2, size2);
    int result = compareArray(arr1, size1, arr2, size2);
    if(result == 1){
        printf("\nMang 1 lon hon mang 2");
    }else if(result == -1){
        printf("\nMang 2 lon hon mang 1");
    }else{
        printf("\nHai mang bang nhau");
    }

    return 0;
}

int compareArray(int array1[], int size1,
                  int array2[], int size2){
    int min = size1;
    if(size1 > size2){
        min = size2;
    }
    for(int i = 0; i <= min - 1; i++){
        if(array1[i] > array2[i]){
            return 1;
        }else if(array1[i] < array2[i]){
            return -1;
        }
    }
    for(int i = 0; i<= min -1; i++){
        if(array1[i] == array2[i]){
            if(size1 < size2){
                return -1;
            }else if(size1 > size2){
                return 1;
            }
        }
    }
    return 0;




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
/*
 Bài 2: compareArray: so sánh mảng
    hàm nhận vào arr1[], arr2[]
    so sánh 2 mảng return 1 arr1 > arr2
                         -1 arr1 < arr2
                          0 arr1 == arr2
    arr1 2 1 5 7
    arr2 2 1 3 7 6 9 => arr1 lớn hơn => return 1
*/
