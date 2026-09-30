#include <stdio.h>
#include <stdlib.h>
//33.2-sumEvenInArray
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int sumEvenInArray(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain, &sizeMain);
    printf("\nMang da nhap ne: ");
    outputArray(arrMain, sizeMain);

     printf("\nSum Even = %d", sumEvenInArray(arrMain, sizeMain));
    return 0;
}
void inputArray(int array[], int* size){
    printf("\nNhap size ne: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%u", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
int sumEvenInArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}
