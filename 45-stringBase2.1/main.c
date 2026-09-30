#include <stdio.h>
#include <stdlib.h>
int charInStr(char str[], char ch);
int strLen(char str[]);
char delCharInStr(char str[], int pos);
int insertCharInStr(char str[], char ch, int pos);
int insertStrIntoStr(char str[], char sub[], int pos);
int main()
{
    char str[100] = "abcdef";
    char sub[100] = "abc";
    //char ch;
    //printf("\nNhap ch: ");
    //scanf("%c", &ch);
    //int pos = charInStr(str, ch);
    //delCharInStr(str,4);
    //insertCharInStr(str,'c',3);
    insertStrIntoStr(str, sub, 2);

    printf("\nhuoi ne: %s", str);
    //printf("\nPos = %d", pos);
    return 0;
}
int insertStrIntoStr(char str[], char sub[], int pos){
    int size = strLen(str);
    int sizeSub = strLen(sub);
    if(pos < 0 || pos > size) return 0;
    for(int i = size - 1; i >= pos; i--){
        str[i + sizeSub] = str[i];
    }
    str[size + sizeSub] = '\0';
    //nhet sub vao khoang trong tu pos tro di
    for(int i = 0; i <= sizeSub - 1; i++){
        str[pos] = sub[i]; // nhet
        pos++;
    }
    return 1;

}

int insertCharInStr(char str[], char ch, int pos){
    int size = strLen(str);
    if(pos < 0 || pos > size) return '\0';
    for(int i = size - 1; i >= pos; i--){
        str[i + 1] = str[i];
    }
    str[pos] = ch;
    str[size + 1] = '\0';
    return 1;
}

char delCharInStr(char str[], int pos){
    int size = strLen(str);
    if(pos < 0 || pos >= size) return '\0';
    char ch = str[pos]; // luu lai phan tu o vi tri trc khi xoa
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + 1];
    }
    str[size - 1] = '\0'; // dat \0 vao trong 1 dvi
    return ch; // nem pt da luu
}

int charInStr(char str[], char ch){
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] == ch){
            return i;
        }
    }
    return -1;
}
int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}




//45-stringBase2
/*
    charInStr(char str[], char ch): tìm ký tự ch
            nằm ở đâu trong chuỗi str
    delCharInStr(char str[], int pos): xóa pt ở vị
        trí thứ pos trong chuỗi str
    insertCharInStr(char str[], char ch, int pos):
        nhét ký tự ch vào vị trí pos trong str
    insertStrIntoStr(char str[], char sub[], int pos):
        nhét chuỗi sub vào str ở vị trí pos
*/
