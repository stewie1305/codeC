#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
void validName(char str[]);
int main()
{
    char str[] = "lE hO dIeP";
    validName(str);
    printf("\nChuoi ne: %s", str);
    return 0;
}
void validName(char str[]){
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] >='A' && str[i] <= 'Z') str[i] += 32;
        if(str[i - 1] == ' ' || i == 0){
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
    }
}


int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i ++;
    return i;
}
