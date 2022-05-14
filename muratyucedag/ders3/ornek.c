#include <stdio.h>
#include <stdlib.h>

int main(){

    char kitapad[30];
    printf("Kitabin adini giriniz: ");
    scanf("%s", kitapad);   //burada ben ne girersem aşağıdaki yere yazdırsın diyoruz.
    printf("Gİrmis Oldugunuz Kitap: %s", kitapad);  //scanf'i kötü yanı birden fazla kelimede boşluktan sonra alınmıyor.
    //birden fazla kelime girdisi için uygun değil.



return 0;
}