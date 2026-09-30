#include <stdio.h>
#include <stdlib.h>
//34-sumArray
const int MAX = 100;//hang so
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
//avgSumInArray: tinh tbc cua cac phan tu trong mang
float avgSumInArray(int array[], int size);
//sumEvenInArray; tinh tong cac phan tu co gia tri la chan
int sumEvenInArray(int array[], int size);
//sumIndexEvenInArray: tinh tong cac phan tu o vi tri chan
int sumIndexEvenInArray(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain, &sizeMain);
    printf("\nMang vua nhap ne: ");
    outputArray(arrMain, sizeMain);

    printf("\nTrung binh cong = %.2f", avgSumInArray(arrMain, sizeMain));
    printf("\nTong cac phan tu co gtri chan = %d", sumEvenInArray(arrMain, sizeMain));
    printf("\nTong cac ptu o vi tri chan = %d", sumIndexEvenInArray(arrMain, sizeMain));
    return 0;
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

float avgSumInArray(int array[], int size){

    int sum = 0;
    //duyet mang: chay tu dau den cuoi amng
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    return (float) sum / size;
}

int sumEvenInArray(int array[], int size){
    int sumEven = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i]% 2 == 0){
            sumEven += array[i];
        }
    }
    return sumEven;
}
int sumIndexEvenInArray(int array[], int size){
    int sumIndex = 0;
    for(int i = 0; i <= size - 1; i++){
        if(i % 2 == 0){
            sumIndex += array[i];
        }
    }
    return sumIndex;
}



