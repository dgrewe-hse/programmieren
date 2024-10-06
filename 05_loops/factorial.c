/*
 * Copyright 2024
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * File: factorial.c
 * Description: Beispielprogramm zur Berechnung der Fakultät einer gegebenen
 *              Zahl durch den Benutzer.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Bilbliotheken zur Nutzung von Funktionen
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration aller benötigter Variablen
    int n;
    unsigned long long factorial = 1;

    // Benutzer nach Eingabe von "n" bitten
    printf("Bitte geben Sie eine positive Ganzzahl ein: ");
    scanf("%d", &n);

    // Überprüfung ob Benutzereingabe im Geltungsbereich > 0 liegt
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
