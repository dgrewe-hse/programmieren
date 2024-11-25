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
 * File: faculty_iterative.c
 * Description: Programm zur Berechnung der Fakultät iterativ.
 * Author: Dennis Grewe
 * Date: November 25th, 2024
 */

#include <stdio.h>

/**
 * Funktion zur Berechnung der Fakultät iterativ
 */
int faculty(int n) {
    // Variable für das Ergebnis
    int result = 1;
    // Schleife zur Berechnung der Fakultät
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    // Rückgabe des Ergebnisses
    return result;
}

/**
 * Hauptprogramm
 */
int main() {
    // Variable für die Zahl, deren Fakultät berechnet werden soll
    int n = 5;

    // Ausgabe der Fakultät der Zahl n
    printf("Die Fakultät von %d ist %d\n", n, faculty(n));

    return 0;
}