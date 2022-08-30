//kayıt sayısı dışarıdan olan bir dizi oluşturma ve listeleme.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dizi[100];
    int i,sayi;

    printf("Eleman Sayisi: ");
    scanf("%d", &sayi);

    for (i=0; i<sayi; i++)
    {
        printf("Dizinin %d. elemanını giriniz: ",i+1); //kullanıcı dizinin 0. elemanını anlamayabilir oyüzden i+1 yazdık.
        scanf("%d",&dizi[i]);
    }

    for(i=0; i<sayi; i++)
    {
        printf("%d ", dizi[i]);
    }
     

    return 0;
}