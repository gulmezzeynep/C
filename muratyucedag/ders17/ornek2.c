#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayilar[4]; //dizimizin boyutunu bildirdik bellekte 4 adrrslik yer ayrıldı.
    sayilar[0]=11;
    sayilar[1]=15;
    sayilar[2]=88;
    sayilar[3]=555;
    
    printf("%d",sayilar[3]);
    
    return 0;
}