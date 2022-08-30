//klavyeden girilen sehirleri sırayla listeleten kod.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sehir[4][30];
    int i;

    for(i=0; i<4; i++)
    {
        printf("Sehir ismi girin: ");
        scanf("%s", sehir[i]);
    }
    
    for(i=0; i<4; i++)
    {
        printf("%s\n",sehir[i]);
    }


    return 0;
}