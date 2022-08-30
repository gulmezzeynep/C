//int türündeki dizinin elemanlarını for döngüsü ile yazdıran kod.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[]={10,20,30,40,50,60,70};
    int i;

    for (i=0 ; i<7; i++)
    {
        printf("%d\n", sayilar[i]);

    }

    return 0;
}