#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLen(char str[]);
void sortStr(char str[]);
void palindrome(char str[]);
void trim(char str[]);
int spliceStr(char str[], int pos, int amount);
int main()
{
    char str[100] = "madam racecar hello world level";
    palindrome(str);
    printf("\nChuoi ne: %s", str);
    return 0;
}
void palindrome(char str[]){
    char tmp[100] = "";
    int sizeTmp = 0;
    char result[100] = "";
    strlwr(str);
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] != 32){
            tmp[sizeTmp] = str[i];
            sizeTmp ++;
        }if(str[i] == 32 || i == strLen(str) - 1){
            sortStr(tmp);
            tmp[sizeTmp] = '\0';
            strcat(result, tmp);
            strcat(result, " ");
            strcpy(tmp, "");
            sizeTmp = 0;

        }
    }
    result[strLen(result)] = '\0';
    strcpy(str, result);

}
void trim(char str[]){
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] == 32 && str[i + 1] == 32){
           spliceStr(str, i, 1);
           i--;
        }
    }
    if(str[0] == 32) spliceStr(str, 0, 1);
    if(str[strLen(str) - 1] == 32)
    spliceStr(str, strLen(str) - 1, 1);
}
int spliceStr(char str[], int pos, int amount){
    int size = strLen(str);
    if(pos < 0 || pos >= size) return 0;
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[ i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
    return 1;
}

void sortStr(char str[]){
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] < str[i + 1]){
            char tmp = str[i];
            str[i] = str[i + 1];
            str[i + 1] = tmp;
        }
    }
}
int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
