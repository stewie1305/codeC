#include <stdio.h>
#include <stdlib.h>
//07-forLoop: vong lap for
int main()
{
    /*
   for(khoi dau; dieu kien thoat; buoc nhay){
        command block;
   }
    */
    for(int i = 1; i <= 100; i++){
        printf("\n%d Code la thu mat loz", i);
    }//blockScope
    //printf("\ni =%d", i);

    return 0;
}
