//matematik menüsü
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;

    printf("Matematik Menusu\n");
    printf("*****************\n");
    printf("1-Kare de alan ve cevre hesabi\n");
    printf("2-Girilen sayinin kupu\n");
    printf("3-Cemberde alan ve cevre hesabi\n");
    printf("4-5x+2+82x+99 isleminin x'e gore sonucu\n");
    printf("5-Dikdörtgende cevre ve alan hesabi\n");
    printf("isleminizi secin : ");
    scanf("%d", &secim);

    switch(secim)
    {
        case 1:
            int kenar,cevre,alan;
            printf("Karede alan ve cevre hesabi islemini sectiniz.\n");
            printf("karenin bir kenarının ölçüsünü giriniz:");
            scanf("%d", &kenar);
            cevre=4*kenar;
            alan=kenar*kenar;
            printf("\nCevresi : %d ~~~~ alani: %d", cevre,alan);
            break;
        case 2:
            int sayi,kupu;
            printf("Girilen sayinin kupunu bulma islemini sectiniz.\n");
            printf("kupunu bulmak istediğiniz sayiyi giriniz: ");
            scanf("%d", &sayi);
            kupu=sayi*sayi*sayi;
            printf("\nGirdiginiz sayinin kupu : %d", kupu);
            break;
        case 3:
            int pi,yaricap,alani,cevresi;
            pi=3;
            printf("Cemberde alan ve cevre hesabı islemini sectiniz.\n");
            printf("Yaricap olcusunu giriniz: ");
            scanf("%d",&yaricap);
            cevresi=pi*yaricap;
            alani=pi*yaricap*yaricap;
            printf("\nCemberin alani : %d, cevresi : %d", cevresi,alani);
            break;
        case 4:
            int x,sonuc;
            printf("5x+2+82x+99 isleminin x'e gore hesaplanması islemini sectiniz.\n");
            printf("x'i giriniz : ");
            scanf("%d", &x);
            sonuc=5*x+2+82*x+99;
            printf("\nSonuc : %d",sonuc);
            break;
        case 5:
            int kisa,uzun,dalan,dcevre;
            printf("Dikdörtgende cevre ve alan hesabi islemini sectiniz.\n");
            printf("kısa ve uzun kenar uzunlugunu giriniz : ");
            scanf("%d %d",&kisa,&uzun);
            dcevre=kisa*2+uzun*2;
            dalan=kisa*uzun;
            printf("cevre : %d, alan : %d",dcevre,dalan);
            break;
        default:
            printf("Lutfe menuden bir secim yapınız.");
            break;          
    }
    return 0;
}