#include <stdio.h>
#include <stdlib.h>
//02-if Else
//cau truc phan nhanh
int main()


   {

    /* syntax: cu phap
    if(conditional){
        command block;
    }else if(conditional){
        command block;
     }
    printf("Hello world!\n");

   }
  */
  int car = 5;
  printf("\Sai gon");
  printf("\nCao toc lien khuong");
  //bien bao nhac nho
  if(car>= 7){
    printf("\nDi pren");
  }else if(car == 7){
    printf("\nDi sacom");
  }else{
    printf("\nDi mimosa");
  }
    printf("\nDa lat");

    //noi rieng ve dieu kien
    //comparision operator: toan tu dieu kien
    // == so sanh bang
    // != khong bang
    // > < >= <=
    //mathetic operator: toan tu toan hang
    // + - * / %
    // toan tu tang
    int a = 5;
    a = a+2;//7
    a+=2;//9
    a = a+1;//10
    a+=1;//11
    a++;//12
    a+=3;//15
    a--;//14

    //II - logical operator: toan tu logic
    // muon di bar thi can gi
    // tuoi phai tren 18
    // money tren 300
    /*
    if(age >= 18){
        if(money >= 300){
             printf("\nWelcome");
        }else{
            printf("\nCut");
        }
    }else{
        printf("\nCut");
    }
    */
    //logical
    //And &&     Or ||
    int age = 25;
    int money = 10;
    if(age> 18 && money > 300){
        printf("\nWelcome");
    }else{
        printf("\nCook");

    }
    //&&: tim False, thay False chot menh de False
    //||: tim True, thay True chot menh de True
    //|,& : tim cho bang het =))
    a = 9;
    int b = 0;
    if(a == 10 && b++ >2){
        printf("\nTrue a =%d, b =%d", a, b);
    }else{
        printf("\nFalse a =%d, b=%d", a, b);
    }

  return 0;
}
