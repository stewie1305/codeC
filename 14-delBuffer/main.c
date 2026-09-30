#include <stdio.h>
#include <stdlib.h>
//14-delBuffer
int main()
{
    int age;
    char firstCharOfName;

    printf("\nNhap tuoi di: ");
    scanf("%d", &age);
    fflush(stdin);//xoa buffer
    printf("\nNhap firstCharOfName: ");
    scanf("%c", &firstCharOfName);

    //in ra man hinh
    printf("\nAge ne %d", age);
    printf("\nfirstCharOfName: %c", firstCharOfName);



    return 0;
}
