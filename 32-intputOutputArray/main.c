#include <stdio.h>
#include <stdlib.h>
//32-inputOutputArray
const int MAX = 100; //hang so
//ten: viet hoa, danh tu, snake_case

int main()
{
   int arr[MAX]; //tao ra 100 bien arr
   int size; //tao ra kich thuoc gia
   printf("\nNhap kich thuoc muon xai: ");
   scanf("%d", &size);

   for(int i = 0; i <= size - 1; i++){
    printf("\nNhap Arr[%d]: ", i);
    scanf("%d", &arr[i]);
   }

   //outputArray
   printf("\nMang vua nhap ne: ");
   for(int i = 0; i <= size - 1; i++){
        printf("%5d", arr[i]);
   }

    return 0;
}
