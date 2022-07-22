//ders kodu ders adı
#include<stdio.h>
#include <stdlib.h>

int main (){
    char ders;
    printf("ders kodunu giriniz: ");
    scanf("%s", &ders);

    switch(ders)
    {
        case 't': printf("Turkce"); break;
        case 'm': printf("Matematik"); break;
        case 'f': printf("Fen Bİlgisi"); break;
        case 's':printf("Sosyal Bilgiler"); break;
        default :printf("Hatali ya da Buyuk Harf girisi"); break;

    }
    return 0;
}