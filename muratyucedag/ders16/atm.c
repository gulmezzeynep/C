//atm yapıyoruz.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int islem,bakiye,tutar,i;
    bakiye=1500;

    printf("***ATM'YE HOSGELDİNİZ***\n");
    printf("************************\n");
    printf("İslemler : \n1-Para çekme\n2-Para yatırma\n3-Havale\n4-Bakiye sorgula\n5-Kart iade\n");
    scanf("%d",&islem);
    
    switch(islem)
    {
        case 1:
            printf("Para cekme islemini sectiniz.\n");
            printf("Bakiyeniz : %d\n",bakiye);
            printf("Cekmek istediginiz tutarı giriniz : ");
            scanf("%d", &tutar);

            if (tutar>bakiye)
            {
                printf("Bakiyeniz yetersizdir.\n");
                printf("Güncel bakiyeniz: %d", bakiye);
            }
            else 
            {
                bakiye -= tutar;
                printf("Güncel bakiyeniz: %d", bakiye);
            }
            break;

        case 2:
            printf("Para yatırma islemini sectiniz.\n");
            printf("Bakiyeniz : %d\n",bakiye);
            printf("Yatırmak istediğiniz para tutarını giriniz: ");
            scanf("%d",&tutar);
            bakiye=bakiye+tutar;
            printf("Güncel bakiyeniz: %d", bakiye);
            break;
        case 3:
            printf("Havale islemini sectiniz.\n");
            printf("Bakiyeniz : %d\n",bakiye);
            printf("Havale tutarını giriniz : ");
            scanf("%d", &tutar);

            if (tutar>bakiye)
            {
                printf("Bakiyeniz yetersizdir.\n");
                printf("Güncel bakiyeniz: %d", bakiye);
            }
            else 
            {
                bakiye -= tutar;
                printf("Güncel bakiyeniz: %d", bakiye);
            }
            break;
        case 4:
            printf("Bakiye sorgulama islemini sectiniz.\n");
            printf("Bakiyeniz : %d",bakiye);
            break;
        case 5:
            printf("Kart iade ediliyor.\n");
            break;
        default : 
            printf("Gecersiz islem.Lutfen menuden bir islem seciniz.\n");
            break; 
    }
    return 0;
}