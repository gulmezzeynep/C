#include <stdio.h>

#define IN      1
#define OUT     0
//kelime istatistiği
int main(void)
{
    int c, nl, nw, nc, state;

    //nc=karakter sayısı boşluklar dahil.
    //nw=kelime sayısı boşluklar dahil değil.
    //nl=satır sayısı.

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;// değişkenin önüne ++ işareti gelirse i değeri +1 arttırılır ve i'nin orjinali değeri ile değiştirilir.i++ ise i'nini değeri 1 artar ama orjinal değeri değişmez.
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("\n%d %d %d\n", nc, nl, nw);

    return 0;
}    
