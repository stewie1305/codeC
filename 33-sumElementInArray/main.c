#include <stdio.h>
#include <stdlib.h>
//33-sumElementInArry
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
//sumElementInArray: tinh tong cac phan tu trong mang
int sumElementInArray(int array[],int size);
int main()
{
    int arrMain[MAX];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    printf("\nMang vua nhap ne: ");
    outputArray(arrMain, sizeMain);
    //
    printf("\nSum ne: %d", sumElementInArray(arrMain, sizeMain));

    return 0;
}
void inputArray(int array[], int* size){
    printf("\nNhap size ne: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Arr[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }

}
int sumElementInArray(int array[],int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    return sum;
}
