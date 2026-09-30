#include <stdio.h>
#include <stdlib.h>
float areaOfTriangle(int a, int b, int c);
void printPrime(int n);
int isPrime(int n);
int main()
{
    //float result = areaOfTriangle(3,7,9);
    //printf("\nDien tich = %.2f", result);
    printPrime(31);

    return 0;
}
void printPrime(int n){
    int count = 0;
    for(int i = n - 1; i >= 10; i--){
        if(isPrime(i) == 1){
            printf("\n %d", i);
            count ++;
        }
        if(count == 4){
             break;
        }

    }
}
int isPrime(int n){
    for(int i = 2; i <= n - 1; i++){
        if(n % i == 0) return 0;
    }
    return n >= 2;
}

float areaOfTriangle(int a, int b, int c){
	float s = 0;
    int sum = a + b + c;
    s = (float) sum / 2;
	printf("\nS = %.2f", s);
	float result;
	result = sqrt(s * (s - a) * (s - b) * (s - c));
	//printf("\nResult = %.2f", result);
	//float d = 0;
	//d = pow(result, 1/2);
	return result;


}
