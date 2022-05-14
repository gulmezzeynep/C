#include <stdio.h>
#include <stdlib.h>

int main(){

    int kenar,alan,cevre;

    printf("Karede Alan ve Cevre Hesabi\n\n");

    printf("Bir kenari girin: ");
    scanf("%d",&kenar);

    alan=kenar*kenar;
    cevre=kenar*4;

    printf("Karenin ALani: %d\n",alan);
    printf("Karenin Cevresi: %d\n",cevre);
    
    return 0;
}