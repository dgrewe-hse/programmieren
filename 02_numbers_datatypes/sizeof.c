/* Beispiel für die Nutzung der sizeof-Funktion in C */
#include <stdio.h>

int main() {

    // Schritt 1: Variablen deklarieren
    int ergebnis;
    double radius;
    char buchstabe;

    // Schritt 2: größe der Variablen mittels sizeof()-Funktion
    // bestimmen und auf der Konsole ausgeben
    printf("%lu\n", sizeof(ergebnis));
    printf("%lu\n", sizeof(radius));
    printf("%lu\n", sizeof(buchstabe));

    return 0;
}





