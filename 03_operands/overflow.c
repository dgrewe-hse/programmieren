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
 * File: overflow.c
 * Description: Beispielprogramm zur Demonstration eines char-Overflows.
 * Author: Dennis Grewe
 * Date: October 04th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration einer "char" Variablen
    unsigned char a = 255;

    // den initialen Wert auf der Konsole ausgeben -> 255
    printf("Initial value of a: %u\n", a);

    // +1 hinzufügen um Überlauf zu provozieren
    a = a + 1;      // oder a++; wenn Inkrementoperator

    // den neuen Wert auf der Konsole ausgeben -> 0
    printf("Value of a after overflow: %u\n", a);

    return 0;
}
