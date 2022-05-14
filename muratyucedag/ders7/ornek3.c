#include <stdio.h>
#include <stdlib.h>

int main(){

    //Çemberde alan: pi*r*r
    //çemberde çevre: 2*pi*r

    printf("Cemberde alan ve cevre hesabi\n");

    printf("*********************************\n");

    float yaricap,pi,alan,cevre;
    pi=3.14;
    printf("Yaricap degeri: ");
    scanf("%f",&yaricap);

    alan=pi*yaricap*yaricap;
    cevre=2*pi*yaricap;

    printf("Alan: %f\n",alan);
    printf("Cevre: %f",cevre);

    return 0;
}