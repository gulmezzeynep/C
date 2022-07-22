//klavyeden girilen sembole göre işlem yapsın.

#include <stdio.h>
#include <stdlib.h>




int main()
{   
    int sayi1,sayi2,sonuc;
    char islem;
    printf("islem giriniz: \n");
    scanf("%s", &islem);
    switch(islem)
    {
              
        case '+':
            printf("sayi 1 grin: \n");
            scanf("%d", &sayi1);
            printf("sayi2 giriniz: \n");
            scanf("%d", &sayi2);
            sonuc=sayi1+sayi2;
            printf("Sonuc : %d",sonuc);
            break;
        case '-':
            printf("sayi 1 grin: \n");
            scanf("%d", &sayi1);
            printf("sayi2 giriniz: \n");
            scanf("%d", &sayi2);
            sonuc=sayi2-sayi1;
            printf("Sonuc : %d",sonuc);
            break;
        case '/':
            printf("sayi 1 grin: \n");
            scanf("%d", &sayi1);
            printf("sayi2 giriniz: \n");
            scanf("%d", &sayi2);
            sonuc=sayi1/sayi2;
            printf("%d",sonuc);        
            break;
        case '*':
            printf("sayi 1 grin: \n");
            scanf("%d", &sayi1);
            printf("sayi2 giriniz: \n");
            scanf("%d", &sayi2);
            sonuc=sayi1*sayi2;
            printf("%d",sonuc);
            break;
        default :
            printf("Hatalı islem girisi.");
            break;
    }

    return 0;
}