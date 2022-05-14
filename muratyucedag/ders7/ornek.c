#include <stdio.h>
#include <stdlib.h>

int main(){

    float sayi1,sayi2,toplam;
    
    printf("ilk sayiyi girin: ");
    scanf("%f",&sayi1);

    printf("ikinci sayiyi girin: ");
    scanf("%f",&sayi2);

    toplam=sayi1+sayi2;

    printf("toplama sonucu: %f",toplam);


    return 0;
}