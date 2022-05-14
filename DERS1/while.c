#include <stdio.h>

int main(void)
{
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf ("%d\t%d\t%d\n", 19, fahr, celsius);//"%d" ile belirtilen kısımlara illa ki değişken gelmesi şart değil.
        fahr = fahr + step;//sadece 19 gibi sayı da koyabiliriz bu örnekteki 19u rastgele koyduk.
    }
    
    return 0;
}