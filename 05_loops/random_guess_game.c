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
 * File: random_guess_game.c
 * Description: Beispielprogramm zur Demonstration der Nutzung eines 
 *              Zufallszahlengenerators.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>      // zur Nutzung von printf()
#include <stdlib.h>     // zur Nutzung von srand() und rand() ("s" stands for "seed")
#include <time.h>       // zur Initialisierung von srand()

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration der Variablen zum Speicher
    // einer Zufallszahl und der Zahl des Benutzers
    int randomNumber, guessedNumber;

    // Initialisierung des Zufallszahlengenerators
    srand(time(0));
    // Aufruf von rand() liefert eine Zahl zwischen [0, RAND_MAX], wobei RAND_MAX = 32767; 
    // mittels Modulo-Operator wird nun eine Zahl zwischen 0 - 100 
    // zurück gegeben und an Variable "randomNumber" mittels "=" zugewiesen
    randomNumber = rand() % 101;  

    // Benutzer um eingabe einer Zahl bitten
    printf("Geben Sie eine Zahl zwischen 0 und 100 ein: ");
    scanf("%d", &guessedNumber);

    // Überprüfung ob Benutzereingabe im korrekten Bereich ist.
    if (guessedNumber < 0 || guessedNumber > 100) {
        printf("Bitte geben Sie eine Zahl zwischen 0 und 100 ein.\n");
        return 1;
    }

    // Überprüfung, ob Benutzereingabe gleich Zufallszahl
    if (guessedNumber == randomNumber) {
        printf("Gratulation! Sie haben die richtige Zahl geraten.\n");
    } 
    // ansonsten Hinweis für den Benutzer ob gesuchte Zahl
    // größer oder kleiner ist.
    else {
        printf("Ihre geratene Zahl war %d.\n", guessedNumber);
        if (guessedNumber > randomNumber) {
            printf("Die richtige Zahl ist kleiner.\n");
        } else {
            printf("Die richtige Zahl ist größer.\n");
        }
        printf("Die zufällig generierte Zahl war %d.\n", randomNumber);
    }

    return 0;
}
