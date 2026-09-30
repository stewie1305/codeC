#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isPrime(int number);
int splice(int array[], int* size, int pos, int amount);
void outputArray(int array[], int size);
int findIndex(int array[], int size, int key);
int insertStr(char str[], int pos, char key);
int spliceStr(char str[], int pos, int amount);
void delKeyStr(char str[], char key);
int factorial(int n);
int insertArrIntoArr(int arr[], int* size,
                     int sub[], int sizeS, int pos);
int delPosStr(char str[], int pos);
void delKeyArr(int arr[], int* size, int key);
int findIndexStr(char str[], char key);
void trim(char str[]);
int sumAllElement(int n);
void reverseArr(int arr[], int size);
int strInStr(char str[], char sub[]);
float sum(int n);
int insertStrIntoStr(char str[], char sub[], int pos);
void validName(char str[]);
void reWordInStr(char str[]);
int fibonacci(int n);
int main()
{
    //int result = isPrime(6);
    //printf("\n%d", result);
    //float result = sum(3);
    //printf("\n result = %.2f", result);
    int arr[] = {2,1,5,3,4,5,6,5};
    int size = sizeof(arr) / sizeof(arr[1]);
    //char str[100] = "     mINh     HoAnG";
    //validName(str);
    //reWordInStr(str);
    //char sub[100] = "an";
    //insertStrIntoStr(str, sub, 3);
    //printf("\nChuoi ne: %s", str);
    //int result = strInStr(str, sub);
    //printf("\n%d", result);
    //trim(str);
    //int result = findIndexStr(str, 'e');
    //c
    //delKeyArr(arr, &size, 5);
    //reverseArr(arr, size);
    //outputArray(arr, size);
    //insertStr(str, 4, 'e');
    //spliceStr(str,2,5);
    //delKeyStr(str, 'a');
   // printf("\nChuoi ne: %s", str);

    //int sub[] = {2,3,5};
    //int sizeS = sizeof(sub) / sizeof(sub[1]);
    //insertArrIntoArr(arr, &size, sub, sizeS, 3);
    //int result = findIndex(arr, size,8);
   // printf("\n%d", result);
    //splice(arr, &size, 2,5);
    //outputArray(arr, size);
    //int result = factorial(0);
    //int result = sumAllElement(1234);
    //printf("\nResult = %d", result);
    //delPosStr(str,4);
   // printf("\nChuoi ne: %s", str);
   int result = fibonacci(4);
   printf("\nResult = %d", result);
    return 0;
}
int fibonacci(int n){
   int result = 1;
   int curr = 1;
   int prev = 0;
   for(int i = 1; i <= n - 1; i++){
    result = prev + curr;
    prev = curr;
    curr = result;
   }
   return result;
}

void reWordInStr(char str[]){
    char tmp [100] = "";
    int sizeTmp = 0;
    char result[100] = "";
    strrev(str);
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] != 32){
            tmp[sizeTmp] = str[i];
            sizeTmp++;
        }if(str[i] == 32 || i == strlen(str) - 1){
            tmp[sizeTmp] = '\0';
            strrev(tmp);
            strcat(result, tmp);
            strcat(result, " ");
            strcpy(tmp, "");
            sizeTmp = 0;

        }
    }
    result[strlen(result)- 1] = '\0';
    strcpy(str, result);

}

void reWorkInStr(char str[]){
    char tmp[100] = "";
    int sizeTmp = 0;
    char result[100] = "";
    strrev(str); //dao ngc mang
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] != 32){
           tmp[sizeTmp] = str[i];
            sizeTmp ++;

        } if(str[i] == 32 || i == strlen(str) - 1){
            tmp[sizeTmp] = '\0';
            strrev(tmp);
            strcat(result, tmp);
            strcat(result, " ");
            strcpy(tmp, "");
            sizeTmp = 0;

            }


    }
    result[strlen(result) - 1] = '\0';
    strcpy(str, result);

}
void validName(char str[]){
    trim(str);
    strlwr(str);
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i - 1] == 32){
            if(str[i] >= 'a' && str[i] <= 'z'){
                str[i] -= 32;
            }
        }
    }
    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] -= 32;
    }
}



int strInStr(char str[], char sub[]){
    int check = 0;
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == sub[check]){
            if(check == strlen(sub) - 1) return i - check;
            check ++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;
}
float sum(int n){
    float sum = 0;
    int mau = 0;
    for(int i = 1; i<= n; i++){
            mau += i;
        sum = sum + 1.0 / i;
    }
    return sum;
}
void reverseArr(int arr[], int size){
    for(int i = 0; i <= size / 2 - 1; i++){
        int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
}

int sumAllElement(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n = n / 10;

    }
    return sum;
}

void trim(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 32 && str[i + 1] == 32){
            spliceStr(str, i, 1);
            i--;
        }
    }
    if(str[0] == 32) spliceStr(str, 0, 1);
    if(str[strlen(str) -1] == 32) spliceStr(str, strlen(str) - 1, 1);
}

int findIndexStr(char str[], char key){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == key){
            return i;
        }
    }
    return -1;
}
void delKeyArr(int arr[], int* size, int key){
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] == key){
            splice(arr, size, i, 1);
        }
    }
}

int delPosStr(char str[], int pos){
    if(pos < 0 || pos >= strlen(str)) return 0;
    for(int i = pos; i <= strlen(str) - 1; i++){
        str[i] = str[i + 1];
    }
    str[strlen(str)] = '\0';
}

int insertArrIntoArr(int arr[], int* size,
                     int sub[], int sizeS, int pos){
    if(pos < 0 || pos > *size) return 0;
    for(int i = *size - 1; i >= pos; i--){
        arr[i + sizeS] = arr[i];
    }
    (*size) += sizeS;
    for(int i = 0; i <= sizeS - 1; i++){
        arr[pos] = sub[i];
        pos ++;
    }
    return 1;

}

int factorial(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}
void delKeyStr(char str[], char key){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == key){
            spliceStr(str,i, 1);
        }
    }

}


int spliceStr(char str[], int pos, int amount){
    int size = strlen(str);
    if(pos < 0 || pos >= size) return 0;
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
}
int insertStr(char str[], int pos, char key){
    if(pos < 0 || pos > strlen(str) - 1) return 0;
    for(int i = strlen(str) - 1; i >= pos; i--){
        str[i + 1] = str[i];

    }
    str[strlen(str)] = '\0';
    str[pos] = key;
}
int findIndex(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key){
            return i;
        }
    }
    return -1;
}

int isPrime(int number){
    for(int i = 2; i <= number - 1; i++){
        if(number % i == 0) return 0;
    }
    return number >= 2;
}
int splice(int array[], int* size, int pos, int amount){
    if(pos < 0 || pos >= *size) return 0;
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    (*size) -= amount;
    return 1;
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
