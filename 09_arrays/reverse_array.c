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
 * File: reverse_array.c
 * Description: Beispielprogramm zur Nutzung von Arrays in C um ein Array umzukehren.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

// Maximale Länge des Arrays
#define MAX_LENGTH 100

/*
 * Hauptfunktion des Programms
 */
int main() {
    // Deklaration des Arrays
    char input[MAX_LENGTH];
    // Länge des Arrays initial
    int length = 0;
    
    // Benutzer zur Eingabe auffordern
    printf("Bitte geben Sie eine Zeichenkette ein: ");
    
    // Zeichen für Zeichen einlesen bis Enter oder Array voll
    int c;
    while ((c = getchar()) != '\n' && length < MAX_LENGTH - 1) {
        input[length] = c;
        length++;
    }
    input[length] = '\0';  // String-Terminator hinzufügen
    
    // Ausgabe in umgekehrter Reihenfolge
    printf("Die Zeichenkette rückwärts lautet: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    printf("\n");
    
    return 0;
}
