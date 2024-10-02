/* Beispiel für ein Hallo Welt Programm in C */
/* Einbinden von Funktionen aus Bibliotheken */
#include <stdio.h>

/* Hauptfunktion des Programms*/
int main() {
    // Addition zweier Ganzzahlen
    printf("%d", 1+2);
    printf("\n");       // Zeilenumbruch
    // Addition zweier Ganzzahlen und Division mit Fließkommazahl
    printf("%f", ((1+2) / 2.5));
    printf("\n");       // Zeilenumbruch
    // Subraktion zweier Ganzzahlen und Multiplikation mit Ganzzahl
    printf("%i", ((10-2) * 5));

    unsigned radius = 15.0;
    radius = 20.0;

    return 0;
}
