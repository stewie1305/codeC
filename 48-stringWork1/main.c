#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//48-stringWork1
int spliceStr(char str[], int pos, int amount);
void getAlphabet(char str[]);
void removeVowel(char str[]);
void trim(char str[]);
int main()
{
   char str[100] = "    Xin     chao   ban";
    //strlen(str); // tinh do dai
    //strcpy(str, "Ahihi"); // cpy
    //strcat(str, "Ahihi"); // noi
    //strlwr(str); // xinchaoban
    //strupr(str); //XINCHAOBAN
    //strcmp("ahihi", "Ahihi") // 1
    //strcmpi("ahihi", "Ahihi"); // 0 so sanh kh ke hoa hay thuong
    //strrev(str); // dao ngc
    //getAlphabet(str);
    //removeVowel(str);
    trim(str);
   printf("\nChuoi ne: %s",str);
    return 0;
}
void trim(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(str[i] == 32 && str[i + 1] == 32){
            spliceStr(str, i, 1);
            i --;
        }
    }
    if(str[0] == 32) spliceStr(str, 0, 1);
    if(str[strlen(str) - 1] == 32) spliceStr(str, strlen(str) - 1, 1);


}

void removeVowel(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if( str[i] == 'u' || str[i] == 'U' ||
            str[i] == 'e' || str[i] == 'E' ||
            str[i] == 'o' || str[i] == 'O' ||
            str[i] == 'a' || str[i] == 'A' ||
            str[i] == 'i' || str[i] == 'I'){
           spliceStr(str, i, 1);
           i --;
        }
    }
}

void getAlphabet(char str[]){
    for(int i = 0; i <= strlen(str) - 1; i++){
        if(!( (str[i] >= 'a' && str[i] <= 'z') ||
              (str[i] >= 'A' && str[i] <= 'Z') )){
            //xoa
            spliceStr(str, i, 1);
            i --;
        }
    }
}

int spliceStr(char str[], int pos, int amount){
    int size = strlen(str);
    if(pos < 0 || pos >= size) return 0;
    for(int i = pos; i <= size - 1; i++){
        str[i] = str[i + amount];
    }
    amount = size - pos >= amount ? amount: size - pos;
    str[size - amount] = '\0';
    return 1;
}














//1.getAlphaBet(10p)
//  f(str)
//  str = "7hel5lo9_hihi"
//->str = "hellohihi"

//2.RemoveVowel
// f(str)
//  str = "xinChaoEm"
//  => str = "xnChm"

//3.trim
//  xóa khoảng cách thừa
//  f(str)
//  str = "   xin   chao    ban    "
//  ->str = "xin chao ban"
