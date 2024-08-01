/* Beispiel Kapitel Schleifen */
/* Programm: Zufallszahlen raten mit do-while Schleife */
/* Author: Dennis Grewe (HS Esslingen) */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess;
    int tries = 0;

    // Initialisierung des Zufallszahlengenerators
    srand(time(0));
    // Generiere eine Zufallszahl zwischen 0 und 99
    randomNumber = rand() % 100; 

    // Schleife so oft durchlaufen, bis die Zahl korrekt
    // erraten wurde
    do {
        // Benutzer nach Eingabe fragen
        printf("Bitte erraten Sie die Nummer (zwischen 0 and 99): ");
        scanf("%d", &userGuess);
        // erhöhe Versuchszähler um 1
        tries++;

        // Prüfe die Benutzereingabe
        if (userGuess == randomNumber) {
            printf("Sie haben die Zahl: %d korrekt erraten!\n", randomNumber);
            printf("Sie haben %d Versuche benötigt\n", tries);
        } 
        else if (userGuess < randomNumber) {
            printf("Falsch. Die gesuchte Zahl ist größer als: %d\n", userGuess);
        }
        else {
            printf("Falsch. Die gesuchte Zahl ist kleiner als: %d\n", userGuess);
        }
    } while (userGuess != randomNumber);

    return 0;
}
