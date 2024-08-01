/* Beispiel Kapitel Schleifen */
/* Programm: Ausgabe Fakultät einer gegebenen Zahl */
/* Author: Dennis Grewe (HS Esslingen) */
#include <stdio.h>

int main() {
    // Deklaration aller benötigter Variablen
    int n;
    unsigned long long factorial = 1;

    // Ask the user for the input
    printf("Bitte geben Sie eine positive Ganzzahl ein: ");
    scanf("%d", &n);

    // Überprüfung ob Benutzereingabe im Geltungsbereich liegt
    if (n < 0) {
        printf("Fehler. Fakultät ist nicht für negative Zahen definiert.\n");
    } else {
        // Berechnung der Fakultät mittels WHILE-Schleife
        int i = 1;
        while (i <= n) {
            factorial *= i;
            i++;
        }

        // Ausgabe des Ergebnis auf der Konsole
        printf("Die Fakultät von %d lautet: %llu\n", n, factorial);
    }

    return 0;
}
