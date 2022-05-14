#include <stdio.h>
#include <stdlib.h>

int main (){

    //karenin alan ve çevresi;
    //Değer : Bir kenar
    //Alan: kenar*kenar
    //çevre: kenar*4

    int kenar,alan,cevre;
    kenar=10;
    alan = kenar*kenar;
    cevre = kenar * 4;
    printf("Karenin Çevre Uzunluğu: %d\n", cevre);
    printf("Karenin Alanı: %d\n",alan);


    return 0;
}