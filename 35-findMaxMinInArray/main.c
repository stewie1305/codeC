#include <stdio.h>
#include <stdlib.h>
//35-findMaxMinInArray
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int findMaxInArray(int array[], int size);
int main()
{
   int arrMain[MAX];
   int sizeMain;
   inputArray(arrMain, &sizeMain);
   printf("\nMang vua nhap ne: ");
   outputArray(arrMain, sizeMain);
   printf("\nMax = %d", findMaxInArray(arrMain, sizeMain));
    return 0;
}
void inputArray(int array[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d]: ", i);
        scanf("%d",  &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
int findMaxInArray(int array[], int size){
     int max = array[0];
    for(int i = 0; i <= size - 1; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
     return max;
}
/*
1. tim tich lon nhat cua 2 so bat ki trong mang
2.tim tong lon nhat cua day so lien tiep trong mang

*/
