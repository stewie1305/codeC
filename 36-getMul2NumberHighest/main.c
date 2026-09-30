#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
//getMul2NumHighest: tim tich lon nhat cua 2 so bat ky trong mang
int getMul2NumHighest(int array[], int size);

int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain, &sizeMain);
    printf("\nMang vua nhap: ");
    outputArray(arrMain, sizeMain);
    printf("\nMul = %d", getMul2NumHighest(arrMain, sizeMain));


    return 0;
}

void inputArray(int array[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i<= *size - 1; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);

    }
}

int getMul2NumHighest(int array[], int size){
    //gia dinh
    int max = array[0] * array[1];
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(max < array[i] * array[j]){
                max = array[i] * array[j];
            }
        }
    }
    return max;

}
