#include <stdio.h>
#include <stdlib.h>
//klavyeden girilen sayının faktöriyelini hesaplamak.

int main(){

    int i,sayi;
    int faktor=1;
    
    printf("faktoriyelini hesaplamak istediğiniz sayıyı girin: ");
    scanf("%d",&sayi);

    for(i=1 ;i <= sayi ; i++)
    {
        faktor= faktor * i;
    }

    printf("sonucunuz: %d",faktor);

    return 0;
}