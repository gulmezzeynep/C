#include <stdio.h>
#include <stdlib.h>

int main(){

    //3 sınav ve 1 proje notu girilen öğrencinin dersten kalıp geçtiği kontrol edilcek.
    printf("****OGRENCİ HARF NOTU HESAPLAMA SİSTEMİ******\n\n");

    int not,not1,not2,proje,ort;

    printf("1.sınav notunuzu giriniz: ");
    scanf("%d",&not);

    printf("2.sınav notunuzu giriniz: ");
    scanf("%d",&not1);

    printf("3.sınav notunuzu giriniz: ");
    scanf("%d",&not2);

    printf("Proje notunuzu giriniz: ");
    scanf("%d",&proje);
    
    ort=(not+not1+not2+proje)/4;

    if (ort<50)
    {
        printf("Ortalamanız: %d - harf notunuz: FF",ort);
    }
    if (ort>=50 && ort<=60)
    {
        printf("Ortalamanız: %d - Harf notunuz: DD",ort);
    }
    if (ort>60 && ort<=70)
    {
        printf("Ortalamanız: %d- Harf notunuz: CC",ort);
    }
    if (ort>70 && ort<=85)
    {
        printf("Ortalamanız: %d - Harf notunuz: BB",ort);
    }
    if (ort>85)
    {
        printf("Ortalmanız: %d - Harf notunuz: AA",ort);
    }
    
    return 0;
}