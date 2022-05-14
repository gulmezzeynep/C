#include <stdio.h>
#include <stdlib.h>

int main() {

    char kitapadi[20]="Mufettis";
    char kitapyazar[10]="Gogol";
    char kitaptur[10]="tiyatro kitabı"; //taşma yapacak ve sadece "tiyatro ki" yazdıracak ekrana.
    
    printf("%s\n", kitapyazar);
    printf ("%s\n", kitapadi);
    printf("Kitapturu: %s", kitaptur);

    return 0;
}