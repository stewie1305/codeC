#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
int insertKeyInStr(char str[], int pos, int key);
int main()
{
    char str[100] = "xin chao ban";
    insertKeyInStr(str,4,'e');
    printf("\nChuoi ne: %s", str);
    return 0;
}
int insertKeyInStr(char str[], int pos, int key){
    int size = strLen(str);
    if(pos < 0 || pos > size) return 0;
    for(int i = size - 1; i >= pos; i--){
        str[i + 1] = str[i];
    }
    str[size + 1] = '\0';
    str[pos] = key;
    return 1;
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i ++;
    return i;
}
