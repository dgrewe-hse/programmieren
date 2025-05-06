#include <stdio.h>              // printf und scanf nutzen zu können (Benutzereingabe / -ausgabe)
#include <stdbool.h>            // um true oder false Schlüsselwort zu nutzen
#include "include/calendar.h"

// Hauptprogramm
int main() {

    // Variablendeklaration
    int monat, jahr;        // speichert benutzereingaben nach Jahr und Monat

    // do-Schleife: Initial 1x gerufen -> danach Test ob erneut Schleifenrumpf ausgeführt wird
    do {
        // Benutzereingabe
        printf("Bitte geben Sie das gewünschte Jahr (ab 1800) ein: ");
        scanf("%d", &jahr);
        printf("Bitte geben Sie den gewünschten Monat (1-12) an: ");
        scanf("%d", &monat);

        // Überprüfung der Eingabe
        // erlaubte Eingabe sind Monat: monat > 0; monat < 13
        // erlaubte Eingabe für Jahr: jahr > 1799; jahr < 3000
        if ((monat < 1 || monat > 12) || (jahr < 1800 || jahr > 3000)) {
            printf("Ihre Eingabe war ungültig. Bitte erneut Eingabe starten!\n");
        }
    } while ((monat < 1 || monat > 12) || (jahr < 1800 || jahr > 3000));

    // Verarbeitung und Ausgabe des Monats auf Konsole
    // beinhaltet Ausgabe des Monats (ausgeschrieben) und Jahr, sowie gesamte tabellarische Form
    print_month(monat, jahr);

    return 0;
}
