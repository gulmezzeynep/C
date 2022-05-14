#include <stdio.h>
#include <stdlib.h>

int main(){

    char Ad[20],Soyad[5],Yas[2],Sehir[13],Meslek[10];  //alan ayırma işlemi yaptık.
    
    
    printf("Adiniz: ");
    scanf("%s",Ad);

    printf("Soyadiniz: ");
    scanf("%s",Soyad);

    printf("Yasiniz: ");
    scanf("%s",Yas);

    printf("Sehriniz: ");
    scanf("%s",Sehir);

    printf("Mesleginiz: ");
    scanf("%s",Meslek);

    printf("\n");

    printf("Adi: %s\n",Ad);
    printf("Soyadi: %s\n",Soyad);
    printf("Yasi: %s\n",Yas);
    printf("Meslek: %s - Sehriniz: %s\n",Meslek,Sehir);

    return 0;

}