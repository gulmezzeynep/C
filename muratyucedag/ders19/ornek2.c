//eleman sayısı ve elemanları klavyedenn girilerek oluşturulan dizinin elemalarının toplamı ve ortalaması

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[100];
    int i,eleman;
    int toplam=0;

    printf("Eleman Sayisi: ");
    scanf("%d", &eleman);

    for(i=0; i<eleman; i++)
    {
        printf("Dizinin %d. elemanını giriniz: ", i+1);
        scanf("%d", &dizi[i]);
        toplam = toplam + dizi[i];
    }
    
    printf("girilen sayılar: ");
    for(i=0; i<eleman; i++)
    {
        printf( "%d ", dizi[i]);        
    }

    printf("\ngirdiğiniz sayıların toplamı: %d \ngirdiğiniz sayıların ortalaması: %d\n",toplam,toplam/eleman);
    return 0;
}