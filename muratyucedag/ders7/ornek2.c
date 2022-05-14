#include <stdio.h>
#include <stdlib.h>

int main(){

    //Aylık 2500 TL maas alan kisinin maasına yüzde 12 zam yapılırsa
    //yeni maası ne kadar olur

    printf("***** Maas Zam Hesabı ******\n\n");

    float maas,yenimaas;

    printf("Maasiniz: ");
    scanf("%f",&maas);

    yenimaas=maas+maas*12/100;

    printf("Yeni Maasiniz: %f",yenimaas);    



    return 0;
}