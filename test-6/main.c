#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int sumAllElement(int number);
int sumArray(int array[], int size);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputArray(arrMain, &sizeMain);
    printf("\nMang vua nhap: ");
    outputArray(arrMain, sizeMain);
    printf("\nSum = %d", sumArray(arrMain, sizeMain));

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
int sumAllElement(int number){
    int sum = 0;
    while(number != 0){
        sum += number % 10;
        number = number / 10;
    }
    for(int i = 2; i <= sum - 1; i++){
        if(sum % i == 0)
            return 0;
    }
    return 1;

}
int sumArray(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        if(sumAllElement(array[i])== 1){
            sum += array[i];
        }
    }
    return sum;
}
