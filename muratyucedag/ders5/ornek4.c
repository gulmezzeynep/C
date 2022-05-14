/*

bir sinemada ücretlendirme şu şekildedir;
mısır: 2 TL
kola: 2 tL
su: 1TL
Bİlet: 8TL

aldığı su bilet kola ve msıır miktarını klavyeden giren kişinin
yapması gereken ödeme miktarını bulan programı yazınız.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int mısır,kola,su,bilet,tutar;

    printf("Kaç tane bilet aldınız?   ");
    scanf("%d",&bilet);

    printf("Kaç tane su aldınız?  ");
    scanf("%d",su);

    printf("Kaç tane mısır aldınız?  ");
    scanf("%d",&mısır);

    printf("Kaç tane kola aldınız? ");
    scanf("%d",&kola);

    tutar=(mısır+kola)*2+su+(bilet*8);//işlem önceliği olduğu için paranteze gerek yok
    
    printf("Yapmanız gereken ödeme miktarı: %d TL\n",tutar);
    
    return 0;
}