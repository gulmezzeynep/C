#include <stdio.h>
#include <stdlib.h>

int main(){

    int not1,not2,not3,ortalama;

    printf("3 sınava giren öğrencinin not ortalaması: \n");

    printf("Birinci sınav notunuzu giriniz: ");
    scanf("%d",&not1);

    printf("İkinci sınav notunuzu giriniz: ");
    scanf("%d",&not2);

    printf("Ucuncu sınav notunuzu giriniz: ");
    scanf("%d",&not3);

    ortalama=(not1+not2+not3)/3;

    printf("\nNot ortalamanız: %d\n",ortalama);


    return 0;
}