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
 * File: ggt.c
 * Description: Beispielprogramm zur Berechnung des Größten-Gemeinsamen Teilers (ggT).
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

    // Ausgabe des Ergebnisses auf Konsole
    printf("Der größte gemeinsame Teiler lautet: %d", a);

    return 0;
}
