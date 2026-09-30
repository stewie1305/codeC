#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void deleteElemantByPos(int array[], int* size, int pos);
int removeKeyInArray(int array[], int* size, int key);
int removeKeyInArrayV2(int array[], int* size, int key);
int removeDuplicate(int array[], int* size);
int search(int array[], int size, int key);
int removeDuplicateV2(int array[], int* size);
int insertArrayIntoArray(int array[], int* size,
                         int sub[], int sizeSub, int pos);

int main()
{
   int arr[] = {2,4,6,8};
   int size = sizeof(arr) / sizeof(arr[0]);
   int sub[] = {1,3,5};
   int sizeSub = sizeof(sub) / sizeof(sub[0]);
   printf("\nMang ne");
   outputArray(arr, size);
   // int amount = removeKeyInArrayV2(arr, &size, key);
   //int amount = removeDuplicateV2(arr, &size);
   //printf("\nAmount = %d", amount);
   insertArrayIntoArray(arr, &size, sub, sizeSub, 2);
   printf("\nMang sau xoa");
   outputArray(arr,size);


    return 0;
}
int insertArrayIntoArray(int array[], int* size,
                         int sub[], int sizeSub, int pos){
    for(int i =*size - 1; i >= pos; i--){
        array[i + sizeSub] = array[i];
    }
    (*size) += sizeSub;
    for(int i = 0; i <= sizeSub - 1; i++){
        array[pos] = sub[i];
        pos++;
    }


}




int removeDuplicateV2(int array[], int* size){
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){
        for(int j = i + 1; j <= *size - 1; j++){
            if(array[i] == array[j]){
                deleteElemantByPos(array, size, j);
                j --; // lui lay da
                count ++;
            }
        }
    }
    return count;
}

int removeDuplicate(int array[], int* size){
   int tmp[MAX];
   int sizeTmp = 0;
   int count = 0;
   //duyet mang arr
   for(int i = 0; i <= *size - 1; i++){
        if(search(tmp, sizeTmp, array[i]) == -1){
            tmp[sizeTmp] = array[i];
            sizeTmp ++;
        }else{
            count ++;
        }
   }
   for(int i = 0; i <= sizeTmp - 1; i++){
        array[i] = tmp[i];
   }
   *size = sizeTmp;
   return count;
}

// ham tim kiem, duoc thi dua vi tri, khong dc dua -1
int search(int array[], int size, int key){
    for(int i = 0; i <= size - 1; i++){
        if(array[i] == key) return i;
    }
    return -1;
}

int removeKeyInArrayV2(int array[], int* size, int key){
    int count = 0;
    for(int i = 0; i <= *size - 1; i++){
        if(array[i] == key){
            deleteElemantByPos(array, size, i);
            i --; // lui lai lay da, tranh xoa hut
            count ++;
        }
    }
    return count; // return so pt da xoa
}

/* ham xoa pt o vi tri pos trong mang*/
void deleteElemantByPos(int array[], int* size, int pos){
    // chua xu li pos va size - 2 moi toi uu
    for(int i = pos; i <= *size - 1; i++){
        array[i] = array[i + 1];
    }
    (*size) --;
}

int removeKeyInArray(int array[], int* size, int key){
    int tmp [MAX];
    int sizeTmp = 0; // tao mang tam la tmp
    int count = 0;
    // duyet mang array
    for(int i = 0; i <= *size - 1; i++){
        if(array[i] != key){ // neu pt khac key
            tmp[sizeTmp] = array[i];// thi nhet
            sizeTmp ++;
        }else{
            count ++;
        }
    }
    // arr copy tmp
    for(int i = 0; i <= sizeTmp - 1; i++){
        array[i] = tmp[i]; //dap doi xung
    }
    *size = sizeTmp;// sao chep lai size
    return count;
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
        printf("\nNhap Array[%d]:", i);
        scanf("%d", &array[i]);
    }
}
