/*3 basamaklı sayıyı basamaklarına ayıran programı c dilide kodlayın.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int sayi;

    printf("3 basamaklı bir sayı giriniz : ");
    scanf("%d", &sayi);

    int birler,onlar,yuzler;

    yuzler = sayi/100;
    printf("yuzler basamagi : %d\n", yuzler);

    onlar = sayi/10;
    onlar = onlar%10;
    printf("onlar basamagi : %d\n", onlar);

    birler = sayi%10;
    printf("birler basamagi : %d\n", birler);
    
    return 0;
}