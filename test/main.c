#include <stdio.h>
#include <stdlib.h>
/*
nhap 3 so a b c ktra xem day co phai la mot tam giac vuong hay khong
neu la tam giac vuong ktra xem trong ba canh cua tam giac co canh nao la snt hay khong
neu co thi in ra man hinh

*/
int main()
{
 /*  //tinh giai thua
   int n;
   int mul = 1;
   printf("\nNhap number: ");
   scanf("%d", &n);
   for(int i = 1; i <= n; i++){
    mul*= i;
   }
   printf("\nMul = %d", mul);

*/
   //bai 2
  /* int a, b, c;
    printf("\nNhap a: ");
    scanf("%d", &a);
    printf("\nNhap b: ");
    scanf("%d", &b);
    printf("\nNhap c: ");
    scanf("%d", &c);

    if(a + b > c && a + c > b && b + c > a){
        if(a == b || a == c || b == c){
            if(a == b && b == c){
                printf("\nDay la tam giac deu");
            }
            else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
                printf("\nDay la tam giac vuong can");
            }
            else{
                printf("\nDay la tam giac can");
            }
        }
        else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            printf("\nDay la tam giac vuong");
        }
        else{
            printf("\nDay la tam giac thuong");
        }
    }
    else{
        printf("\nDay k la tam giac");
    }
*/
//bai 3
/*
int n;
int prev = 0, curr = 1, result = 1;

printf("\nNhap so: ");
scanf("%d", &n);
for(int i = 1; i <= n - 1; i++){
    result = prev + curr;
    prev = curr;
    curr = result;
}
printf("\n%d o vi tri thu %d  ", n, result);
*/
    //bai4
  /*  int n;
    char buffer;
    int sum = 0, dem = 0;
    int isPrime = 1;



    do{
        printf("\nNhap so: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        if(buffer != 10 ){
            printf("\nNhap lai");
        }
         if(n >= 2){
        for(int i = 2; i <= n - 1; i++){
             isPrime = 1;
            if(n % i == 0){
                isPrime = 0;
                break;
            }
            if(isPrime == 1){
            dem++;
            sum+= n;
            break;
            }
     }
     printf("\nSo so nguyen to la %d", dem);
        printf("\nTong la %d", sum);
    }

    }while(buffer != 10 || n != 0);
    */

    //bai 5
    int start, end;
    int demnt = 0, demcp = 0, demchan = 0, demle = 0;
    int isPrime = 1;
    printf("\nNhap start: ");
    scanf("%d", &start);

    printf("\nNhap end: ");
    scanf("%d", &end);

    for(int i = start; i <= end; i++){
            if(i >= 2){
                    for(int j = 2; j <= i - 1; j++){
                            isPrime = 1;
                        if(i % j == 0){
                            isPrime = 0;
                            break;
                        }
                    }
                    if(isPrime == 1){
                            demnt += 1;
                    }
            }
            if(i % 2 == 0){
                demchan += 1;
            }
            else{
                demle += 1;
            }
            if(sqrt(i) == (int)sqrt(i)){
                demcp += 1;
            }
    }


    printf("\nSo so nt la %d", demnt);
    printf("\nSo so chinh phuong la %d", demcp);
    printf("\nSo so chan la %d", demchan);
    printf("\nSo so le la %d", demle);











    return 0;
}
