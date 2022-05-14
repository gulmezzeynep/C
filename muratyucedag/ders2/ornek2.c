#include <stdio.h>
#include <stdlib.h>

int main(){

    char kitapad[20]="Avcunuzdaki Kelebek";
    char yazar[30]="Ahmet serif izgoren";
    char turu[7]="Hikaye";
    char sayfa[4]="128";
    char basimyili[5]="2007";

    printf("\n************ KİTAP TANİTİM ************\n");
    printf("kitapad : %s\nKitapyazar: %s \nTuru: %s\n",kitapad,yazar,turu);
    printf("sayfa sayisi: %s\n",sayfa);
    printf("Basimyili: %s\n", basimyili);
    
    return 0;
}