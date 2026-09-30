#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int findMax(int array[], int size);
int findMin(int array[], int size);
void thayThe(int array[], int size);
void fibbonacciArr(int array[], int* size, int n);
int perfectSquare(int n);
int isPrime(int n);
float trungBC(int array[], int size);
void thayTheViTri(int array[], int size);
int subPrime(int array[], int size);

int main(){

   	int arr[100] = {2,1,3,4,5,7,7,9};
	int size = 8;
	//thayThe(arr, size);
	//float result = trungBC(arr, size);
	int result = subPrime(arr, size);
	printf("\nKet qua = %d", result);
	//thayTheViTri(arr, size);
	//fibbonacciArr(arr, &size, 5);
	//outputArray(arr, size);



    return 0;
}
int subPrime(int array[], int size){
    int sub = 0;
    int maxPrime = array[0];
    int secondMaxPrime = array[0];
    for(int i = 0; i <= size - 1; i++){
        if(isPrime(array[i])){
            if(array[i] > maxPrime){
                maxPrime = array[i];
            }
        }
        if(isPrime(array[i])){
            if(array[i] > secondMaxPrime  array[i] < maxPrime){
                secondMaxPrime = array[i];
            }
        }
    sub = maxPrime - secondMaxPrime;
    }
    return sub;
}



void thayTheViTri(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        if(isPrime(array[i])){
            array[i] = i;
        }
    }
}

float trungBC(int array[], int size){
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
int isPrime(int n){
    for(int i = 2; i <= n - 1; i++){
        if(n % i == 0) return 0;
    }
    return n >= 2;
}

int perfectSquare(int n){
    if(sqrt(n) == (int)sqrt(n)) return 1;
    else return 0;
}

void fibbonacciArr(int array[], int* size, int n){
    int prev = 0;
    int curr = 1;
    int result = 1;
    *size = 0;
    for(int i = 1; i <= n; i++){
        array[*size] = result;
        result = prev + curr;
        prev = curr;
        curr = result;
        (*size) ++;

    }
}



void thayThe(int array[], int size){
	int i;
	int min = findMin(array, size);
	int max = findMax(array, size);
	for(i = 0; i <= size - 1; i++){
		if(array[i] == max){
			array[i] = min;
		}
	}
}

int findMin(int array[], int size){
	int i;
	int min = array[0];
	for(i = 0; i <= size - 1; i++){
		if(min > array[i]){
			min = array[i];
		}
	}
	return min;
}

int findMax(int array[], int size){
	int i;
	int max = array[0];
	for(i = 0; i <= size - 1; i++){
		if(max < array[i]){
			max = array[i];
		}
	}
	return max;
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
