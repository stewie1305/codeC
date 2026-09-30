#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
int insertStr(char str[], int pos, char key);
int main()
{
    char str[100] = "xin chao ban";
    int result = insertStr(str, 4, 'e');
    if(result == 1){
       printf("\nChuoi ne: %s", str);
    }else{
        printf("\nNo");
    }


    return 0;
}
int insertStr(char str[], int pos, char key){
    if(pos < 0 || pos > strLen(str)) return 0;
    for(int i = strLen(str) - 1; i >= pos; i--){
        str[i + 1] = str[i];
    }
    str[strLen(str)] = '\0';
    str[pos] = key;
    return 1;
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
