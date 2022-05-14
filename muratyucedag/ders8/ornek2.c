#include <stdio.h>
#include <stdlib.h>

int main(){

    int s1,s2,ort;

    printf("OGRENCİ ORTALAMA HESAP BİLGİ SİSTEMİ...");
    printf("\n\n");
    
    printf("1. sınav notunuzu giriniz: ");
    scanf("%d",&s1);

    printf("2. sınav notunuzu giriniz: ");
    scanf("%d",&s2);

    ort=(s1+s2)/2;

    printf("Ortalama: %d\n\n",ort);

    if (ort >= 50)
    {
        printf("Tebrikler geçtiniz :)");
    }
    else
    {
        printf("Maalesef kaldınız :(");
    }
    

    return 0;
}