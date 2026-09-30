#include <stdio.h>
#include <stdlib.h>
//33.4-sumPrimeInArray
//tinh tong cac so la so nguyen to trong mang
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int sumPrimeInArray(int array[], int size);


int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain, &sizeMain);
    printf("\nMang vua nhap ne: ");
    outputArray(arrMain, sizeMain);
    int isPrimeInArray(arrMain, sizeMain);
    printf("\nSum = %d", sumPrimeInArray(arrMain, sizeMain));

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
int sumPrimeInArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        int isPrime = 1;
        if(array[i] >= 2){
            for(int number = 2; number <= array[i] - 1; number++){
                if(array[i] % number == 0){
                    isPrime = 0;
                    break;
                }
            }
                if(isPrime == 1){
                    sum += array[i];
                }

        }
    }
    return sum;
}
