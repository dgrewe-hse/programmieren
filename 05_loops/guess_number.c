/* Beispiel Kapitel Schleifen */
/* Programm: Zufallszahlen raten */
/* Author: Dennis Grewe (HS Esslingen) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess;

    // Initialisierung des Zufallszahlengenerators
    srand(time(0));
    // Generiere eine Zufallszahl zwischen 1 und 100
    randomNumber = rand() % 100 + 1; 

    // Ask the user for a guess
    printf("Bitte erraten Sie die Nummer (zwischen 1 and 100): ");
    scanf("%d", &userGuess);

    // Prüfe die Benutzereingabe
    if (userGuess == randomNumber) {
        printf("Sie haben die Zahl: %d korrekt erraten!\n", randomNumber);
    } else {
        printf("Falsch. Die korrekte Zahl lautet: %d\n", randomNumber);
    }

    return 0;
}
