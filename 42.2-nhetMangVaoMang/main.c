#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void nhetMangVaoMang(int arr1[], int* size1,
                      int arr2[], int size2, int pos);
int main()
{
    int arr1[100] = {1,2,3,7,8};
    int size1 = 5;
    int arr2[100] = {4,5,6};
    int size2 = 3;
    int pos = 3;
    printf("\nMang trc chen");
    outputArray(arr1, size1);
    nhetMangVaoMang(arr1, &size1, arr2, size2, pos);
    printf("\nMang sau chen");
    outputArray(arr1, size1);
    return 0;
}
void nhetMangVaoMang(int arr1[], int* size1,
                      int arr2[], int size2, int pos){
    if(pos < 0 || pos > *size1 - 1) return 0;
    for(int i = *size1 - 1; i >= pos; i--){
        arr1[i + size2 ] = arr1[i];
    }

    for(int i = 0; i <= size2 - 1; i++){
        arr1[pos] = arr2[i];
        pos++;
    }
    (*size1) += size2;
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
