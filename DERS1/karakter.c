#include <stdio.h>

int main(void)
{
    char c;

    printf("%ld\n",sizeof(char));//c karakterinin uzunuluğu bu 1 döner.

    c = 'a';
    printf("'%c' -> %d\n", c, c);//c değişkenine a stringini atadık.bunun asciideki karşılığını yazdırır.

    c = ' ';
    printf("'%c' -> %d\n", c, c);

    return 0;
}
