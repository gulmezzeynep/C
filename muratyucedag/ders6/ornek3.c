#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("İdeal kilo hesaplama\n\n");

    //ideal kilo hesabı
    //boy-100 +yaş /10)*0.8 --> kadın, 0.9 --> erkekler için

    float boy,yas,ideal;
    boy=165;
    yas=24;
    ideal=(boy-100+yas/10)*0.8;// erkeğe göre hesaplamak istersek 0.8 yerine 0.9 yazarız.0

    printf("İdeal kilonuz: %f",ideal);

    return 0;

}