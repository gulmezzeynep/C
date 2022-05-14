#include <stdio.h>
#include <stdlib.h>

int main(){

    //ygs 1 puan türü hesaplama
    //klavyeden net sayısı girilen öğrencinin ygs1 puan türüne göre
    //kaç puan aldığını hesaplayan programı yazınız.
    //Türkçe: 1.999
    //Matematik: 3.998
    //Sosyal Bilgiler: 1
    //Fen Bilgisi: 2.999
    //Taban: 100.160

    float turkce,mat,sosyal,fen,taban,toplampuan;

    taban=100.160;
    
    printf("Turkce Netiniz: ");
    scanf("%f",&turkce);

    printf("Matematik Netiniz: ");
    scanf("%f",&mat);

    printf("Sosyal Bilgiler Netiniz: ");
    scanf("%f",&sosyal);

    printf("Fen Bilgisi Netiniz: ");
    scanf("%f",&fen);

    toplampuan=turkce*1.999+mat*3.998+sosyal*1+fen*2.999+taban;

    printf("Ygs -1 Puan Turunde Sonucunuz: %f",toplampuan);

    return 0;
}