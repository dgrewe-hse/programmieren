/* Beispiel WHILE Schleife */
/* Programm: Grösster gemeinsamer Teiler */
/* Author: Dennis Grewe (HS Esslingen) */
#include <stdio.h>

int main(void) {
    // Deklaration aller benötigter Variablen
    int a, b;

    // Benutzeraufforderung zur Eingabe von a und b
    printf("Bitte geben Sie eine Ganzzahl für 'a' an: ");
    scanf("%d", &a);
    printf("Bitte geben Sie eine Ganzzahl für 'b' an: ");
    scanf("%d", &b);

    // Berechnung des ggT mittels while-Schleife
    // Weitere Durchläufe sofern Schleifenbedingung erfüllt wird
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }

    printf("Der größte gemeinsame Teiler lautet: %d", a);

    return 0;
}
