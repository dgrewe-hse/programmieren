/* Beispiel: Mehrwertsteuer */
#include <stdio.h>

/* Definition von Konstanten */
#define MWST 1.19

/* Hauptprogramm Mehrwertsteuer */
int main(void) {

    // Variablen für eingegebenen Betrag und Gesamtbetrag festlegen
    float betrag, ges_betrag;
    // Benutzer um Eingabe "Betrag" bitten
    printf("Nettobetrag in Euro: ");
    // Eingabe vom Benutzer lesen mittels scanf(), beachten Sie "&" Symbol zwingend notwendig
    scanf("%f", &betrag);
    // Berechnen der Mehrwertsteuer: Betrag * 1.19 = Gesamtbetrag
    // Beachten Sie: Zuweisungsoperation ist rechtsassoziativ, erfolgt von rechts nach links.
    ges_betrag = betrag * MWST;
    // Ausgabe Gesamtbetrag auf Konsole mittels printf()
    printf("Der Gesamtbetrag ist %f\n", ges_betrag);

    return 0;
}



