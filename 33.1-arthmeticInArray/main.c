#include <stdio.h>
#include <stdlib.h>
//33.1-arthmeticInArray
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
float arthmeticInArray(int array[], int size);

int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain, &sizeMain);
    printf("\nMang vua nhap ne: ");
    outputArray(arrMain, sizeMain);

    printf("\nTrung binh cong = %.2f", arthmeticInArray(arrMain, sizeMain));
    return 0;
}
void inputArray(int array[], int* size){
    printf("\nNhap size ne: ");
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
float arthmeticInArray(int array[], int size){
    int sum = 0, dem = 0;
    float arthmetic = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += (array[i]);
        dem ++;
        arthmetic = (float) sum / dem;
    }
    return arthmetic;
}
