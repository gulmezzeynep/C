//girilen sayının faktoriyelini while ile bulan kod.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int sayi, faktoriyel;
    printf("sayi giriniz : ");
    scanf("%d", &sayi);
    faktoriyel=1;
    
    while(sayi>1)
    {
        faktoriyel = faktoriyel*sayi;
        sayi--;
    }

    printf("%d\n", faktoriyel);
    return 0;
}