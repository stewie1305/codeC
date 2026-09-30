#include <stdio.h>
#include <stdlib.h>
//03-evenOdd
//Xin nguoi dung nhap tu ban phim 1 con so nguyen bat ky
//kiem tra xem so nguyen do la chan hay le
//in ra man hinh bao cao
int main()
{
    int number;
    printf("\nPlz, input a number: ");
    scanf("%d",&number);

    //neu code xuong duoc day nghia la trong number
    // da co gia tri roi
    //kiem tra xem la chan hay le

    if(number %2 == 0){
        printf("\n%d is even", number);
    }else{
        printf("\n%d is odd", number);
    }
    return 0;
}
