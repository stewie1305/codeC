#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void inputArray(int array[], int* size);
void outputArray(int array[], int size);
int insteadArray(int array[], int size,
                  int pos, int key);
int deleteArray(int array[], int* size,
                int pos);

int insertArray(int array[], int* size,
                int pos, int key);

int checkAnna(int array[], int size);
int main()
{
    int array[100] = {1,2,3,2,1};
    int size = 5;
    int pos, key;
    //printf("\nNhap vi tri: ");
    //scanf("%d", &pos);
    //printf("\nNhap gia tri: ");
    //scanf("%d", &key);
    //xai ham
    //int result = insteadArray(array, size, pos, key);
   // int result = insertArray(array, &size, pos, key);
   //int result = deleteArray(array, &size, pos);
   int result = checkAnna(array, size);
    // in ra
    if(result == 1){
        printf("\nMang sau thay doi: ");
        outputArray(array, size);
    }else{
        printf("\nPos kh hop le");
    }






    return 0;
}
int checkAnna(int array[], int size){
    for(int i = 0; i <= (size / 2) - 1; i++){
        if(array[i] != array[size - i - 1]){
            return 0;
        }
    }
    return 1;
}



int insertArray(int array[], int* size,
                int pos, int key){
 if(pos < 0 || pos > *size) return 0;
 // tien hanh nhet so vao
 for(int i = *size - 1; i >= pos; i--){
        array[i + 1] = array[i];
 }
  (*size) ++;
  array[pos] = key;
  return 1;



}
int deleteArray(int array[], int* size,
                int pos){
    if(pos < 0 || pos > *size - 1) return 0;
        for(int i = pos; i <=*size - 1; i++){
            array[i] = array[i + 1];
        }
         (*size) --;
        return 1;







}
int insteadArray(int array[], int size,
                  int pos, int key){
    if(pos < 0 || pos >= size - 1){
        return 0;
    }else{
        array[pos] = key;
        return 1;
    }

}
void inputArray(int array[], int* size){
    printf("\nNhap size: ");
    scanf("%d", size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nNhap Array[%d]: ",i);
        scanf("%d", &array[i]);
    }
}
void outputArray(int array[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%5d", array[i]);
    }
}
/*
insteadArray: thay the pt o vi tri pos = key
mo ta: f(arr[], pos, key)
vao trong arr den vi tri pos va thay = key;

    arr: 2  4   6   8   10
       i: 0 1   2   3   4          pos: 2 , key: 15

insertArray: nhet 1 phan tu vao vi tri pos cua mang
mo ta; f(arr[], int pos, int key)
nvu cua ham la nhet key vaso vi tri pos trong mang

    arr: 2  4   6   8   10
    i:   0  1   2   3   4       pos: 2  key: 15



    deleteArray: xoa 1 phan tu o vi tri pos
    mo ta: f(arr[], pos)
    arr: 2  4   6   8   10
    i:   0  1   2   3   4   pos: 2

    c1: ham xoa dc return 1, kh xoa dc return 0;
    c2: ham neu xoa dc thi return phan tu da xoa(de hoan tac)
    neu khong xoa dc thi return null|| undefined|| []

    checkAnna: ktra xem 1 mang co doi xung kh
    arr 4   2   2   4 return 1;
    arr 4   2   3   2   3   4 return 0;
    arr 1   2   3   2   1 return 1;
*/
