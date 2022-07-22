/* ekrana 5 defa merhaba karadeniz yazdırmak istiyoruz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i=1;
    while(i<=5)
    {
        printf("MErhaba karadeniz\n");
        ++i;
        printf("i : %d\n", i);
    }
    
    return 0;
}