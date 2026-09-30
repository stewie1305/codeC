#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int findMinInArr(int array[], int size);
int delPosInArr(int array[], int* size, int pos);
int findKeyInArr(int array[], int size, int key);
int insertInArr(int array[], int* size, int pos, int key);
void sort(int array[], int size);
int sumArr(int array[], int size);
float tBC(int array[], int size);
int reverse(int arr[], int size);

int main()
{
    int arr[] = {1,2,3,2,5,7,8,9};
    int size = sizeof(arr) / sizeof(arr[1]);
    int arrS[100];
    int sizeS;
    //int min = findMinInArr(arr, size);
    //int result = delPosInArr(arr, &size,2);
    //int result = findKeyInArr(arr, size,4);
    //int result = insertInArr(arr, &size, 2, 4);
    //if(result == 1){
        //printf("\nPos = %d", result);
        //sort(arr, size);
        //outputArray(arr, size);
    //int sum = sumArr(arr, size);
    //printf("\nSum = %d", sum);
    float result = tBC(arr, size);
    printf("\nTrung binh cong = %.2f", result);
    //}
    //int result = reverse(arr, size);
    //if(result == 1){
        //printf("\nMang doi xung");
    //} else{
        printf("\nMang khong");
   // }

    //printf("\nMin = %d", min);







    return 0;
}




int reverse(int arr[], int size){
    for(int i = 0 ; i <= size/2 - 1; i++){
        if(arr[i] != arr[size - 1 - i]){
           return -1;
           break;
        }
    }
    return 1;

}

float tBC(int array[], int size){
    float sum = 0;
    int minPrime = array[0];
    int maxSquare = array[0];
    for(int i = 0; i <= size - 1; i++){
       if(perfectSquare(array[i])){
            if(array[i] > maxSquare){
                maxSquare = array[i];
            }
       }
       if(isPrime(array[i])){
            if(array[i] < minPrime){
                minPrime = array[i];
            }
       }
    sum = maxSquare + minPrime;
    }
    return sum / 2;
}


int sumArr(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    return sum;
}





void sort(int array[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(array[i] > array[j]){
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int insertInArr(int array[], int* size, int pos, int key){
    if(pos < 0 || pos > *size) return 0;
    for(int i = *size - 1; i >= pos; i--){
        array[i + 1] = array[i];
    }
    (*size) ++;
    array[pos] = key;
    return 1;
}

int findKeyInArr(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i ++){
        if(array[i] == key) return i;

    }
    return -1;
}

int delPosInArr(int array[], int* size, int pos){
    if(pos < 0 || pos > *size - 1) return 0;
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + 1];

    }
    (*size) --;
    return 1;
}

int findMinInArr(int array[], int size){
    int min = array[0];
    for(int i = 0; i <= size - 1; i++){
        if(min > array[i]){
            min = array[i];
        }
    }
    return min;
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
