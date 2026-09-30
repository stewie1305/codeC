#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
int strInStr(char str[], char sub[]);
int main()
{
    char str[100] = "anhAnanBanh";
    char sub[100] = "an";
    int pos = strInStr(str, sub);
    printf("\npos: %d", pos);

    return 0;
}
int strInStr(char str[], char sub[]){
    int check = 0;
    int size = strLen(str);
    int sizeS = strLen(sub);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] == sub[check]){
            if(check == sizeS - 1) return i - check;
            check ++;
        }else{
            i -= check;
            check = 0;
        }
    }
    return -1;
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i ++;
    return i;
}
