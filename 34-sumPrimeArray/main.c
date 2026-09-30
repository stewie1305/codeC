#include <stdio.h>
#include <stdlib.h>
//34-sumPrimeArray: tinh tong cac phan tu la snt
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int isPrime(int number);
int sumPrimeArray(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain, &sizeMain);
    printf("\nMang da nhap ne: ");
    outputArray(arrMain, sizeMain);
    printf("\nSum Prime = %d", sumPrimeArray(arrMain, sizeMain));
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
int isPrime(int number){
    for(int i = 2; i <= number - 1; i++){
        if(number % 2 == 0) return 0;
    }
    return number >= 2;
}
int sumPrimeArray(int array[], int size){
    int sumPrime = 0;
    for(int i = 0; i <= size - 1; i++){
        if(isPrime(array[i])){
            sumPrime += array[i];

        }
    }
    return sumPrime;
}
