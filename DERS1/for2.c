#include <stdio.h> // # (diyez) işareti direktif demektir.Derleyiciye birşeyler söylüyor yani.
#define LOWER 0 //program derlenmeye geçmeden önce lower gördüğü yere 0 yazıyor.
#define UPPER 300//UPPER gördüğü yere 300 yazıyor.
#define STEP 20 //STEP GÖRDÜĞÜ YERE 20 YAZIYOR.Buna prepcessinf deniyor yani önişleme.
//sembolik sabitler tanımlamak için define direktifini kullanıyoruz.

int main()
{ 
    int fahr;
    for(fahr = LOWER ; fahr <= UPPER ; fahr = fahr + STEP)//ilkle kısmı = (fahr = 0); sına kısmı = (fahr <= 300); değiştir kısmı = (fahr=fahr+20)
    {
        printf("%3d %3.1f\n", fahr, (5.0/9.0)*(fahr-32));//"%3d" burada dnin önündeki 3 ; tamasayıyı görüntülerken 3 hane kullan demek. Böylece sağa yaslanmış şekilde görüntülenecek.
    }//"%6.1f" burada 6 noktadan önce kaç hane kullanılacağını gösterir, 1 ise noktadan sonra kaç hane kullanılacağını gösterir.
    return 0;
}
