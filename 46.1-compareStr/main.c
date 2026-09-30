#include <stdio.h>
#include <stdlib.h>
int compareStr(char str[], char sub[]);
int strLen(char str[]);
void strUpr(char str[]);
int search(char str[], int key);
int removeDup(char str[]);
int spliceStr(char str[], int pos, int amount);
int delPosArr(char str[], int pos);
int removeKey(char str[], int key);
int main()
{
    char str[100] = "abccdeefghh";
    char sub[100] = "abcce";
    //strUpr(str);
    //removeDup(str);
    //spliceStr(str,2,3);
    removeKey(str, 'h');
    printf("\nChuoi ne: %s", str);

    /*int result = compareStr(str, sub);
    if(result == 1){
        printf("\nChuoi 1 lon hon");
    }else if(result == - 1){
        printf("\nChuoi 2 lon hon");
    }else{
        printf("\nHai chuoi bang nhau");
    }
    */

    return 0;
}
int removeKey(char str[], int key){
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] == key){
            delPosArr(str, i);
            i--;
        }
    }
}


int delPosArr(char str[], int pos){
    int size = strLen(str);
    if(pos < 0 || pos >= size) return 0;
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + 1];
    }
    str[size - 1] = '\0';
    return 1;

}

int spliceStr(char str[], int pos, int amount){
    int size = strLen(str);
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    str[size -amount] = '\0';
}

int removeDup(char str[]){
    char sub[100];
    sub[0] = '\0';
    int sizeS = strLen(sub);
    int count = 0;
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(search(sub,str[i]) == -1){
            sub[sizeS] = str[i];
            sizeS ++;
        }else{
            count ++;
        }
    }

    for(int i = 0; i <= sizeS - 1; i++){
        str[i] = sub[i];
    }
    str[size] = '\0';
    return count;
}

int search(char str[], int key){
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] == key); return i;
    }
    return -1;
}

void strUpr(char str[]){
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
}

int compareStr(char str[], char sub[]){
    int sizeM = strLen(str);
    int sizeS = strLen(sub);
    int size = sizeM;
    if(sizeM > sizeS){
        size = sizeS;
    }
    for(int i = 0; i <= size - 1; i++){
        if(str[i] > sub[i]) return 1;
        else if(str[i] < sub[i]) return -1;
    }
    if(sizeM > sizeS) return 1;
        else if(sizeM < sizeS) return -1;
        else return 0;
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != 0) i++;
    return i;
}
