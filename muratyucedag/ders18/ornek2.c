//7 faktöriyelinin hesalanması
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int faktoriyel[]={1,2,3,4,5,6,7};
    int i, sonuc;
    sonuc = 1;
    for(i=0; i<7; i++){
        sonuc = sonuc*faktoriyel[i];
    }

    printf("7 faktöriyelin sonucu : %d", sonuc);

    return 0;
}