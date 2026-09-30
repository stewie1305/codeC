#include <stdio.h>
#include <stdlib.h>
void inputArray(int array[], int* size);
void ouputArray(int array[], int size);
int findMin(int array[], int size);
int delPosInArr(int array[], int* size, int pos);
int findIndex(int array[], int size, int key);
int insertArr(int array[], int* size, int pos, int key);
void sortArr(int array[], int size);
int sumArr(int array[], int size);
float avgArr(int array[], int size);
void reverseArr(int array[], int size);
int isPrime(int n);
int sumPrime(int array[], int size);
int sumEven(int array[], int size);
void printPrime(int array[], int size);
int compareArr(int array[], int sizeM,
               int arrS[], int sizeS);
int maxMul(int array[], int size);
void concatArr(int arr[], int* size,
               int arrS[], int sizeS);
int divArr(int arr[], int* size,
           int arrS[], int* sizeS, int pos);
int arrInArr(int arr[], int size,
             int arrS[], int sizeS);
int insertArrIntoArr(int arr[], int* size,
                     int arrS[], int sizeS, int pos);
int splice(int arr[], int* size, int pos, int amount);
int removeDup(int arr[], int *size);
int removeArrInArr(int arr[], int* size,
                    int arrS[], int sizeS);
void delKeyInArr(int arr[], int* size, int key);
int main()
{
   int arr[100] = {2,3,5,7,5,7,8,8,91};
   int size = 9; //sizeof(arr) / sizeof(arr[1]);

   int arrS[100] = {5,7,8};
   int sizeS = 3; //sizeof(arrS) / sizeof(arrS[1]);
   //int result = findMin(arr, size);
   //printf("\nMin : %d ", result);
    //delPosInArr(arr, &size, 3);
    //int result = findIndex(arr, size, 91);
    //printf("\nResult = %d", result);
    //insertArr(arr, &size, 3,4);
    //sortArr(arr, size);
    //int sum = sumArr(arr, size);
    //printf("\nSum = %d", sum);
    //float sum = avgArr(arr, size);
    //printf("\nSum = %.2f", sum);
    //reverseArr(arr, size);
    //outputArray(arr, size);
    //int sum = sumPrime(arr, size);
    //int sum = sumEven(arr, size);
    //printf("\nSum = %d", sum);
    /*int result = compareArr(arr, size, arrS, sizeS);
    if(result == 1){
        printf("\nMang 1 lon hon");
    }else if(result == -1){
        printf("\nMang 2 lon hon");
    }else{
        printf("\nHai mang = nhau");
    }
    */
    //concatArr(arr, &size, arrS, sizeS);
    //divArr(arr, &size, arrS, &sizeS, 4);
    //printf("\nMang 1 ne:");
    //outputArray(arr, size);
    //printf("\nMAng 2 ne: ");
    //outputArray(arrS, sizeS);
    //int result = maxMul(arr, size);
    //printf("\nResult = %d", result);
    //printPrime(arr, size);
    //int pos = arrInArr(arr, size, arrS, sizeS);
    //printf("\nPos = %d", pos);
    //insertArrIntoArr(arr, &size, arrS, sizeS, 4);
    //splice(arr, &size, 3,4);
    //removeDup(arr, &size);
    removeArrInArr(arr, &size, arrS, sizeS);
    //delKeyInArr(arr, &size, 5);
    outputArray(arr, size);
    //printf("\nMAng 2 ne: ");
    //outputArray(arrS, sizeS);
    return 0;
}
void delKeyInArr(int arr[], int* size, int key){
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] == key){
            splice(arr, size, i,1);

        }
    }
}

int removeArrInArr(int arr[], int* size,
                    int arrS[], int sizeS){
    while(1){
        int pos = arrInArr(arr, *size, arrS, sizeS);
        if(pos != -1){
            splice(arr, size, pos, sizeS);
        }else{
            return 1;
        }

    }
}
int removeDup(int arr[], int *size){
    int count = 0;
    for(int i = 0; i <= *size - 2; i++){
        for(int j = i + 1; j <= *size - 1; j++){
            if(arr[i] == arr[j]){
                splice(arr, size, j,1);
                j --;
                count ++;
            }
        }
    }
    return count;
}

int splice(int arr[], int* size, int pos, int amount){
    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        arr[i] = arr[i + amount];
    }
    (*size) -= amount;
    return 1;
}

int insertArrIntoArr(int arr[], int* size,
                     int arrS[], int sizeS, int pos){
    if(pos < 0 || pos >*size) return 0;
    for(int i = *size - 1; i >= pos; i--){
        arr[i + sizeS] = arr[i];
    }
    (*size) += sizeS;
    for(int i = 0; i <= sizeS - 1; i++){
        arr[pos] = arrS[i];
        pos ++;
    }
    return 1;
}

int arrInArr(int arr[], int size,
             int arrS[], int sizeS){
    int check = 0;
    for(int i = 0; i <= size - 1; i++){
        if(arr[i] == arrS[check]){
            if(check == sizeS - 1) return i - check;
            check ++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;
}

int divArr(int arr[], int* size,
           int arrS[], int* sizeS, int pos){
    if(pos < 0 && pos >= *size) return 0;
    (*sizeS) = 0;
    for(int i = pos; i <= *size - 1; i++){
        arrS[*sizeS] = arr[i];
        (*sizeS) ++;
    }
    (*size) = pos;
    return 1;

}

void concatArr(int arr[], int* size,
               int arrS[], int sizeS){
    for(int i = 0; i <= sizeS - 1; i++){
        arr[*size] = arrS[i];
        (*size) ++;
    }
}
int maxMul(int array[], int size){
    int maxMul = array[0] * array[1];
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(array[i] * array[j] > maxMul){
                maxMul = array[i] * array[j];
            }
        }
    }
    return maxMul;
}

int compareArr(int array[], int sizeM,
               int arrS[], int sizeS){
    int size = sizeM;
    if(sizeM > sizeS) size = sizeS;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] > arrS[i]) return 1;
        else if(array[i] < arrS[i]) return -1;
    }
    if(sizeM > sizeS) return 1;
    else if(sizeM < sizeS) return -1;
    else return 0;

}

void printPrime(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        if(isPrime(array[i])){
            printf("%5d", array[i]);
        }
    }
}

int sumEven(int array[], int size){
    int sumEven = 0;
    for(int i = 0; i <= size - 1; i++){
        if(array[i] % 2 == 0){
            sumEven += array[i];
        }
    }
    return sumEven;
}


int sumPrime(int array[], int size){
    int sumPrime = 0;
    for(int i = 0; i <= size - 1; i++){
        if(isPrime(array[i])){
            sumPrime += array[i];
        }
    }
    return sumPrime;
}

int isPrime(int n){
    for(int i = 2; i <= n - 1; i++){
        if(n % i == 0) return 0;
    }
    return n >= 2;
}

void reverseArr(int array[], int size){
    for(int i = 0; i <= size / 2 - 1; i++){
        int tmp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = tmp;

    }
}

float avgArr(int array[], int size){
    float sum = 0;
    int count = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
        count ++;
    }
    return sum / count;
}

int sumArr(int array[], int size){
    int sum = 0;
    for(int i = 0; i <= size - 1; i++){
        sum += array[i];
    }
    return sum;
}

void sortArr(int array[], int size){
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

int insertArr(int array[], int* size, int pos, int key){
    if(pos < 0 || pos > *size) return 0;
    for(int i = *size - 1; i >= pos; i--){
        array[i + 1] = array[i];

    }
     array[pos] = key;
    (*size) ++;

    return 1;
}


int findIndex(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key) return i;
    }
    return 0;
}


int delPosInArr(int array[], int* size, int pos){
    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + 1];
    }
    (*size) --;
    return 1;
}




int findMin(int array[], int size){
    int min = array[0];
    for(int i = 0; i <= size - 1; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
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
