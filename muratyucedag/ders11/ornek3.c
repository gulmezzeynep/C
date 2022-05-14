#include <stdio.h>
#include <stdlib.h>
//fibonacci serisinin ilk istenen sayıda elemanını listeleyen kodu yazınız.
int main(){

    int baslangic,i,adim,sonterm,orta;
    
    printf("baslangic: ");
    scanf("%d",&baslangic);

    printf("ilk kaç elemanı yazdırmak istersiniz : ");
    scanf("%d",&adim);
    orta = baslangic;
    printf("%d  %d  ",baslangic,orta);
            
    for( i=1 ; i<=adim-2; i++)
    {
        sonterm = baslangic + orta;
        printf("%d  ",sonterm);
        baslangic = orta ;
        orta = sonterm;
    }

    return 0;
}