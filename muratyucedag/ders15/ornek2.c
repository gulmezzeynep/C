//haftanın günleri
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int gun;
    printf("gun numarasını giriniz: ");
    scanf("%d", &gun);

    switch(gun)
    {
        case 1: printf("Pazartesi"); break;
        case 2: printf("Sali"); break;
        case 3: printf("Carsamba"); break;
        case 4: printf("Persembe"); break;
        case 5: printf("Cuma"); break;
        case 6: printf("Cumartesi"); break;
        case 7: printf("pazar"); break;
        default: printf("hatalı numara girisi"); break;
    }

    return 0;
}