#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
int spliceStr( char str[], int pos, int amount);
void delKeyStr(char str[], char key);
int main()
{
    char str[100] = "anBanhKemAnvui";
    delKeyStr(str, 'a');
    printf("\nChuoi ne: %s", str);

    return 0;
}
void delKeyStr(char str[], char key){
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] == key){
            spliceStr(str, i, 1);
            i--;
        }
    }
}

int spliceStr( char str[], int pos, int amount){
    int size = strLen(str);
    if(pos < 0 || pos >= size) return 0;
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    amount = size - pos >= amount ? amount : size - pos;
    str[size - amount] = '\0';
    return 1;

}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
