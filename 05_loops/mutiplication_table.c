/* Beispiel Kapitel Schleifen */
/* Programm: Ausgabe Multiplikationstabelle */
/* Author: Dennis Grewe (HS Esslingen) */
#include <stdio.h>

int main() {
    // Überschrift der Tabelle
    printf("Multiplikationstabelle - Das kleine Einmaleins:\n\n");

    // Ausgabe der Tabellenüberschriften
    printf("   ");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", i);
    }
    printf("\n");

    // Ausgabe der Trennlinie
    printf("   ");
    for (int i = 1; i <= 10; i++) {
        printf("----");
    }
    printf("\n");

    // Ausgabe der Tabelle
    for (int i = 1; i <= 10; i++) {
        // Ausgabe der Zeilenüberschrift
        printf("%2d |", i);
        for (int j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
