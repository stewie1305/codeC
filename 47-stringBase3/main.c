#include <stdio.h>
#include <stdlib.h>
//47-stringBase3
int strLen(char str[]);
void strUpr(char str[]);
int spliceStr(char str[], int pos, int amount);
int removeKey(char str[], char key);
int removeDup(char str[]);
int strInStr(char str[], char sub[]);
void delSubInStr(char str[], char sub[]);
int main()
{
    char str[100] = "xemmotbophimmoi";
    char sub[100] = "moi";
    //strUpr(str);
    //removeKey(str, 'U');
    //removeDup(str);
    int pos = strInStr(str,sub);
    printf("\nPos = %d", pos);
    printf("\n chuoi ne: %s",str);
    return 0;
}
void delSubInStr(char str[], char sub[]){
    while(spliceStr(str,strInStr(str,sub),strLen(sub)));
        // dua ra 1 - 0     pos             amount
                         // i   -1
}


int strInStr(char str[], char sub[]){
    int check = 0;
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] == sub[check]){
            if(check == strLen(sub) - 1) return i - check;
            check ++;
        }else{
            i -= check;
            check = 0; // check -= check;
        }
    }
    return -1;
}




int removeDup(char str[]){
    int count = 0;
    for(int i = 0; i <= strLen(str) - 2; i++){
        for(int j = i + 1; j <= strLen(str) - 1; j++){
            if(str[i] == str[j]){
                spliceStr(str,j,1);
                j--;
                count ++;
            }
        }
    }
    return count;
}

int removeKey(char str[], char key){
    int count = 0;
    for(int i = 0; i <= strLen(str) - 1; i++){
        if(str[i] == key){
            spliceStr(str, i, 1);
            i--;// lui lay da
            count ++;
        }
    }
    return count;
}

int spliceStr(char str[], int pos, int amount){
    int size = strLen(str);
    if(pos < 0 || pos >= size) return 0;
    //don cac ptu vao trong
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    //tinh amount thuc te co the xoa
    amount = size - pos >= amount ? amount: size - pos;
    str[size - amount] = '\0';
    return 1;
}

void strUpr(char str[]){
    int size = strLen(str);
    for(int i = 0; i <= size - 1; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i ++;
    return i;
}
