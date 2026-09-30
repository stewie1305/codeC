#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int strLen(char str[]);
int insertStr(char str[], int pos, char key);
int spliceStr(char str[], int pos, int amount);
void removeKey(char str[], char key);
int removePos(char str[], int pos);
void removeDup (char str[]);
int findKeyStr(char str[], char key);
void getAlphaBet(char str[]);
int strInStr(char str[], char sub[]);
void validName(char str[]);
int main()
{
    char str[100] = "lE hO dIeP";
    char sub[100] = "in";
    //insertStr(str,4,'e');
    //removeKey(str,'a');
    //removePos(str,6);
    //removeDup(str);
    //int pos = findKeyStr(str, 'e');
    //printf("\nPos = %d", pos);
    //getAlphaBet(str);
    //int pos =  strInStr(str, sub);
    //printf("\nPos = %d", pos);
    validName(str);
    printf("\nChuoi ne: %s", str);
    return 0;
}
void validName(char str[]){
    int size = strlen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] >='A' && str[i] <= 'Z') str[i] += 32;
        if(str[i - 1] == ' ' || i == 0){
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
    }
}


int strInStr(char str[], char sub[]){
    int check = 0;
    int size = strlen(str);
    for(int i =0; i <= size - 1; i++){
        if(str[i] == sub[check]){
            if(check == strlen(sub) - 1) return i - check;
            check ++;
        }else{
            i -= check;
             check = 0;
        }
    }
    return 0;

}

void getAlphaBet(char str[]){
    for(int i = 0; i <= strlen(str)  -1; i++){
        if(!( (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= 'A' && str[i] <= 'Z') )){
            spliceStr(str, i, 1);
            i--;
           }
    }
}

int findKeyStr(char str[], char key){
    int size = strlen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] == key){
            return i;
        }
    }
    return -1;
}

void removeDup (char str[]){
    for(int i = 0; i <= strlen(str) - 2; i++){
        for(int j = i + 1; j <= strlen(str) - 1; j++){
            if(str[i] == str[j]){
                spliceStr(str,j,1);
                j--;
            }
        }
    }
}
void removeKey(char str[], char key){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == key){
            spliceStr(str,i,1);
        }
    }

}
int removePos(char str[], int pos){
    if(pos < 0 || pos >= strlen(str)- 1) return 0;
    for(int i = pos; i <= strlen(str) - 1; i++){
        str[i] = str[i + 1];
    }
    str[strlen(str)] = '\0';
    return 1;
}





int spliceStr(char str[], int pos, int amount){
    int size = strlen(str);
    for(int i = pos; i <= size- 1; i++){
        str[i] = str[i + amount];
    }
    amount = size - pos >= amount ? amount: size - pos;
    str[size - amount] = '\0';
}

int insertStr(char str[], int pos, char key){
    int size = strlen(str);
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
    while(str[i] != '\0') i++;
    return i;
}
//1.getAlphaBet(10p)
//  f(str)
//  str = "7hel5lo9_hihi"
//->str = "hellohihi"
