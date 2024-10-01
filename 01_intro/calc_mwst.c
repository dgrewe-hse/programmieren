/* Beispiel: Mehrwertsteuer */
#include <stdio.h>

/* Definition von Konstanten */
#define MWST 1.19

/* Hauptprogramm Mehrwertsteuer */
int main(void) {

    float betrag, ges_betrag;
    printf("Nettobetrag in Euro: ");
    scanf("%f", &betrag);
    ges_betrag = betrag * MWST;
    printf("Der Gesamtbetrag ist %f\n", ges_betrag);

    return 0;
}



