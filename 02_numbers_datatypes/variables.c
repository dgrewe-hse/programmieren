/* Beispiel für Variablendeklaration in der Programmiersprache C */
/* Einbinden von Funktionen aus Bibliotheken */
#include <stdio.h>

/* Hauptfunktion des Programms*/
int main() {
    // Deklarationen
    int ergebnis;		// Definiert “ergebnis” als eine integer Variable (4 Byte);
    double radius;		// Definiert ”radius” als eine double Variable (8 Byte);
    char buchstabe;		// Definiert “buchstabe” als eine character Variable (1 Byte);

    // Zuweisungen an deklarierte Variablen mittels Zuweisungsoperand "="
    ergebnis = 10;      // weißt den Wert "10" an Speicherplatz der Variable "ergebnis" zu
    radius = 5.2;       // weißt den Wert "5.2" an Speicherplatz der Variablen "radius" zu
    buchstabe = 'A';    // weißt den Wert "A" (=65) an Speicherplatz der Variablen "buchstabe" zu

    return 0;
}