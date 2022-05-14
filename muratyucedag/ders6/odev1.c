#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //dikdörtgende alan ve cevre hesabı

    float kısa,uzun,alan,cevre;

    kısa=2.7;
    uzun=5.7;
    
    alan=uzun*kısa;
    cevre=(uzun+kısa)*2;

    printf("Alan: %f\n",alan);
    printf("Cevre: %f",cevre);

    return 0;
}