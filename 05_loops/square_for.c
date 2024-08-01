/* Beispiel Kapitel Schleifen */
/* Programm: Ausgabe Quadratzahlen mittels FOR-Schleife */
/* Author: Dennis Grewe (HS Esslingen) */
#include <stdio.h>

int main() {
    // Deklaration aller Variablen
    int n;

    // Benutzer nach Eingabe der Basis fragen
    printf("Bittte geben Sie eine Ganzzahl ein: ");
    scanf("%d", &n);

    // Ausgabe der Quadratzahlen von 1 bis Benutzereingabe
    // mittels for-Schleife. Die Anzahl der Durchläufe 
    // sind abhängig der Benutzereingabe
    printf("Die Quadratzahlen von 1 bis %d lauten:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}