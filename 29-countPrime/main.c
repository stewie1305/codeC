#include <stdio.h>
#include <stdlib.h>
//29-countPrime
/*
nhap vao so nguyen tu start den end
in ra mh cac so nguyen to trong doan
tinh tong xem co bn snt trong doan
dem xem co bao nhieu so nguyen to trong doan
*/
int isPrime(int number);
int main()
{
    int start, end;
    printf("\nNhap start: ");
    scanf("%d", &start);
    printf("\nNhap end: ");
    scanf("%d", &end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    int count = 0, sum = 0;
    for(int number = start; number <= end; number++){
            //co ham ktra xem co phai la snt kh
        if(isPrime(number)){
            printf("%5d", number);//in
            count++;//dem
            sum += number;//tong
        }
    }
   printf("\nSo so nguyen to = %d", count);
   printf("\nTong la = %d", sum);
    return 0;
}
int isPrime(int number){
    for(int i = 2; i <= number - 1; i++){
        if(number % i == 0){
            return 0;
        }
    }
    return number >= 2;

}

/*
1. viết hàm nhận vào start và end
tính tổng các phần tử trong đoạn
dùng hàm có kết quả in ra màn hình

2.viết hàm nhờ người dùng nhập vào 1 số
kiểm tra xem số đó có phải là số chẵn không ?
nếu là chẵn thì ném ra 1, không thì phải ném ra 0

3.viết hàm nhận vào n, tính tổng các chữ số của n

4.viết hàm nhận vào n, tính n giai thừa

5.hàm nhận vào n, return số fibonacci thứ n

6.viết hàm nhận vào n, tính tổng các số chẳn từ 1 đến n

7.viết hàm xin người dùng n,
  in ra màn hình các số lẽ trong khoảng từ 1 đến n
8.hàm nhận vào start và end
  tính trung bình nhân của các số từ start đến end
*/
