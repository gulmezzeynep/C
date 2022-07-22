// numarası girilen ayın ismini yazdırmak. 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Lutfen Ay Numarasi  giriniz: ");
    scanf("%d", &sayi);

    switch(sayi)
    {
        case 1:printf("Ocak"); break;
        case 2:printf("Subat"); break;
        case 3:printf("mart"); break;
        case 4:printf("nisan"); break;
        case 5:printf("mayis"); break;
        case 6:printf("haziran"); break;
        case 7:printf("temmuz"); break;
        case 8:printf("agustos"); break;
        case 9:printf("eylul"); break;
        case 10:printf("ekim"); 
        case 11:printf("kasim");
        case 12:printf("aralik");
    }

    return 0;
}