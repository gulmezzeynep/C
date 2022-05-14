#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    //eşkenar üçgenin alan ve çevresi;
    //Değer : Bir kenar
    //Alan: ((kenar*kenar)*(3^(1/2)))/4
    //çevre: kenar*3

    float kenar,alan,cevre,b;
    kenar=5;
    b=sqrt(3);
    alan= (((kenar*kenar)*(b))/4);
    cevre=kenar*3;

    printf("ÇEVRE: %f\n",cevre);
    printf("ALAN: %f\n",alan);

    return 0;
}