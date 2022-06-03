#include <stdio.h>
#include <stdlib.h>

int main(){

    //3 sınava ve 1 proje notu girilen öğrencinin ortalaması

    float not,not2,not3,proje,ort;
    
    not=55;
    not2=56;
    not3=65;
    proje=70;

    ort=(not+not2+not3+proje)/4;

    printf("ortalama: %f",ort);


    return 0;
}