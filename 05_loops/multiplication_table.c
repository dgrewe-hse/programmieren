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
 * File: multiplication_table.c
 * Description: Beispielprogramm zur Demonstration der Ausgabe einer 
 *              Multiplikationstabelle des kleinen Einmaleins.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Überschrift der Tabelle auf der Konsole Ausgeben
    printf("Multiplikationstabelle - Das kleine Einmaleins:\n\n");

    // Ausgabe der Tabellenüberschriften
    printf("   ");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", i);
    }
    printf("\n");

    // Ausgabe der Trennlinie
    printf("   ");
    for (int i = 1; i <= 10; i++) {
        printf("----");
    }
    printf("\n");

    // Ausgabe der Tabelle
    for (int i = 1; i <= 10; i++) {
        // Ausgabe der Zeilenüberschrift
        printf("%2d |", i);
        for (int j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
