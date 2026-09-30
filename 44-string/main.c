#include <stdio.h>
#include <stdlib.h>
//44- string : chuoi : mang cac ki tu
// trong chuoi dau \0 : null : 0 la dau ket thuc chuoi
int strLen(char str[]);
int main()
{
    int arr[100] = {2,1,3,5};
    char str[100] = "hello";
    str[3] = '\0';
    printf("\nChuoi ne: %s", str);

    //vd: ve nhap chuoi
    char sub[100];
    printf("\nNhap sub di: ");
    //scanf("%s", sub); // le diep ==> le
    gets(sub); //get string;
    //scanf("%[^\n]%*c", sub); //regex
    //fgets(sub, 100, stdin); du dau \n
    printf("\nSub ne: %s", sub);
    int sizeSub = strLen(sub);
    printf("\nDo dai = %d", sizeSub);
    return 0;
}
int strLen(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}
