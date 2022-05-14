#include <stdio.h>

//karakter istatistiği yapıyoruz.

int main(void)
{
    int c, i, nwhite, nother;
    int ndigit[10];//dizi tanımlarken boyutuyla birlikte tanımlıyoruz.

//Bir rakam okunduğunda ndigit dizisinde nereye (hangi indise) karşı geldiğini belirlemenin zarif yolu
//Yöntem neden çok zarif? Aksi halde uzun bir if/else if merdiveni kullanacaktık.

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("digits = ");//hangi sayıdan ne kadar yazıldığını yazdırıyoruz burada.
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    
    printf(", white space = %d, other = %d\n",nwhite, nother);//nwhite=beyaz boşluk yani tab tuşu ve enter tuşu.
    
    //nother=sayı,satır atlama, tab boşluğu ve tek boşluk dışındaki karakterlerleri ölçer.

    return 0;
}
