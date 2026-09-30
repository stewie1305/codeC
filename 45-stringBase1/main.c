#include <stdio.h>
#include <stdlib.h>
int strLen(char str[]);
void strCpy(char str[], char sub[]);
void strCat(char str[], char sub[]);
void strDiv(char str[], char sub[], int pos);
void strRev(char str[]);

int main()
{
    char str[100] = "xinChao";
    char sub[100] = "ban";
    //strCpy(str,sub);
    //strCat(str, sub);
    //strDiv(str,sub,3);
    strRev(str);
    printf("\nChuoi ne: %s", str);
    printf("\nSub ne: %s", sub);
    return 0;
}
void strRev(char str[]){
    int size = strLen(str);
    for(int i = 0; i <= (size/2) - 1; i++){
        //swap thg i vs size - 1- i;
        char tmp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = tmp;
    }
}

void strDiv(char str[], char sub[], int pos){
   int size = strLen(str);
   sub[0] = '\0';
   int sizeSub = strLen(sub);
   //nhet phan tu pos den cuoi cua str vao sub
   for(int i = pos; i <= size - 1; i++){
    sub[sizeSub] = str[i];
    sizeSub ++;
   }
    str[pos] = '\0';
   sub[sizeSub] = '\0';




}

void strCat(char str[], char sub[]){
    int size = strLen(str);
    int sizeSub = strLen(sub);
    for(int i = 0; i <= sizeSub - 1; i++){
        str[size] = sub[i];
        size ++;
    }
    str[size] = '\0';//nhet \0 vao cuoi
}

int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
//strCpy sub: nhet
void strCpy(char str[], char sub[]){
    //1 xoa str
    str[0] = '\0';
    int size = strLen(str); // = 0 vi \0 o dau
    int sizeSub = strLen(sub);
   //nhet sub vao str
   for(int i = 0; i <= sizeSub - 1; i++){
        str[size] = sub[i];// nhet
        size ++;
   }
   str[size] = '\0';
}
// str: "xinChaoBan\0"
//sub: "abc\0"



//45-stringBase1
/*
strCpy(char str[], char sub[]):
    chuoi str copy chuoi sub

strCat(char str[], char sub[]):
    chuoi str se noi vs chuoi sub
strDiv(char str[], char sub[], int pos):
    ham se chia mang str lam 2 khuc o vi tri pos
    khu con lai luu vao sub

strRev(char str[]): dao ngc chuoi

*/
