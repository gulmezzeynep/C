#include <stdio.h>
#include <stdlib.h>

int main(){

    int sayi1,sayi2,toplam,fark,carpım;
    printf("Birinci Sayiyi girin: ");
    scanf("%d",&sayi1);

    printf("İkinci sayiyi girin: ");
    scanf("%d",&sayi2);

    toplam=sayi1+sayi2;
    fark=sayi1-sayi2;
    carpım=sayi1*sayi2;

    printf("Toplam: %d\n",toplam);
    printf("Fark: %d\n",fark);
    printf("Carpım: %d\n",carpım);
            
    return 0;
}