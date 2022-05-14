#include <stdio.h>
#include <stdlib.h>

int main (){

    //dikdörtgenin alan ve çevresi;
    //Değer : kısa kenar, uzun kenar
    //Alan: kısa kenar*uzun kenar
    //çevre: (kısa kenar + uzun kenar)*2

    int kisa,uzun,alan,cevre;
    kisa=8;
    uzun=12;
    alan = kisa*uzun;
    cevre = (kisa+uzun)*2;
    printf("Dİkdörtgenin Çevre Uzunluğu: %d\n", cevre);
    printf("Dikdörtgenin Alanı: %d\n",alan);


    return 0;
}