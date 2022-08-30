//klavyeden girilen sehir isimlerini listeleme.
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char dizi[20][100];
    int i,sayi;

    printf("Eleman sayısını giriniz: ");
    scanf("%d",&sayi);

    for(i=0; i<sayi; i++)
    {
        printf("sehir ismi giriniz ");
        scanf("%s", dizi[i]);
    }

    printf("Girdiğiniz sehirler: ");

    for(i=0; i<sayi; i++)
    {
        printf("%s ", dizi[i]);
    }


    return 0;
}