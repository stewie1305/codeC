#include <stdio.h>
#include <stdlib.h>
//32-pointer
int main()
{
   int tt = 200;//tao ra bien bth: luu gtri bth
   int* hari = &tt;//bien pointer : luu dia chi cua
   //bien ma no muon dieu khien
   printf("\nValue tt: %d", tt);//200
   printf("\nAddress tt: %u", &tt);//6422036
   printf("\nValue hari: %u", hari);
   printf("\nAddress hari: %d", &hari);//6422032
   printf("\nHook hari: %d", *hari);
   *hari -= 150; //tt -= 150;
   printf("\nValue tt: %d", tt);

    return 0;
}
