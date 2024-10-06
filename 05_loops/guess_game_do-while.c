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
 * File: guess_game_do-while.c
 * Description: Beispielprogramm zur Demonstration der Nutzung eines 
 *              Zufallszahlengenerators, sowie des Schleifenkonstrukts
 *              DO-WHILE.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Bilbliotheken zur Nutzung von Funktionen
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    
    // Deklaration der Variablen zum Speicher
    // einer Zufallszahl, der Eingabe des Benutzers,
    // sowie der Anzahal der Versuche
    int randomNumber, userGuess;
    int tries = 0;

    // Initialisierung des Zufallszahlengenerators
    srand(time(0));
        // Aufruf von rand() liefert eine Zahl zwischen 0.0 - 1.0 
    // mittels Modulo-Operator wird nun eine Zahl zwischen 0 - 99 
    // zurück gegeben und an Variable "randomNumber" mittels "=" zugewiesen
    randomNumber = rand() % 100; 

    // Schleife so oft durchlaufen, bis die Zahl korrekt
    // erraten wurde
    do {
        // Benutzer nach Eingabe fragen
        printf("Bitte erraten Sie die Nummer (zwischen 0 and 99): ");
        scanf("%d", &userGuess);
        // erhöhe Versuchszähler um 1
        tries++;    // ++ -> Inkrementoperator

        // Prüfe die Benutzereingabe
        // 1. wenn geratene Zahl gleich Zufallszahl
        if (userGuess == randomNumber) {
            // Beglückwünschung an Benutzer
            printf("Sie haben die Zahl: %d korrekt erraten!\n", randomNumber);
            printf("Sie haben %d Versuche benötigt\n", tries);
        }
        // 2. wenn geratene Zahl < Zufallszahl
        else if (userGuess < randomNumber) {
            // Hinweis an Benutzer
            printf("Falsch. Die gesuchte Zahl ist größer als: %d\n", userGuess);
        }
        // 3. wenn geratene Zahl > Zufallszahl
        else {
            // Hinweis an Benutzer
            printf("Falsch. Die gesuchte Zahl ist kleiner als: %d\n", userGuess);
        }
    } while (userGuess != randomNumber);
    // Abbruchbedinung: Solange in der Schleife verweilen, wie die Zufallszahl
    // nicht durch den Benutzer erraten wurde.

    return 0;
}
