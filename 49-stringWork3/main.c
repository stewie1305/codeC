#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//49-stringWork3
void split(char str[], char hashToken,
           char strList[][100], int* sizeList);
void join(char strList[][100], int sizeList,
          char hashToken, char str[]);

int main()
{
    /*
    char strList[5][50] = {"diep",
                           "hung",
                           "tuan"};
    //strList[0] %s: diep
    //strList[1] [2] %c : n
    int sizeList = 3;
    for(int i = 0; i<= sizeList - 1; i++){
        printf("\n%s", strList[i]);
    }
    */
    char str[100] = "Diep-1999-10-SE";
    char strList[50][100];
    int sizeList = 0;
    split(str, '-', strList, &sizeList);
    for(int i = 0; i <= sizeList - 1; i++){
        printf("\n%s", strList[i]);

    }

    join(strList, sizeList, "-|-", str);
        printf("\nstr = %s", str);


    return 0;
}
void join(char strList[][100], int sizeList,
          char hashToken, char str[]){
    strcpy(str, ""); // xoa str
    for(int i = 0; i <= sizeList - 1; i++){
        strcat(str, strList[i]);
        strcat(str, hashToken);
    }
    str[strlen(str)- strlen(hashToken)] = '\0';
}


void split(char str[], char hashToken,
           char strList[][100], int* sizeList){
    *sizeList = 0; // xoa het trong strList
    char tmp[100];
    int sizeTmp = 0;
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] != hashToken){
            tmp[sizeTmp] = str[i];
            sizeTmp++;

        }if(str[i] == hashToken || i == strlen(str) - 1){
            tmp[sizeTmp] = '\0';
            //nhet tmp vao sizeList
            strcat(strList[*sizeList], tmp);
            (*sizeList)++;
            //don tmp
            strcpy(tmp, "");
            sizeTmp = 0;
        }
    }

}
