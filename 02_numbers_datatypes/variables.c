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
 * File: variables.c
 * Description: Beispiele für Variablendeklaration in der Programmiersprache C.
 * Author: Dennis Grewe
 * Date: October 02nd, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* Hauptfunktion des Programms*/
int main() {
    // Deklarationen
    int ergebnis;		// Definiert “ergebnis” als eine integer Variable (4 Byte);
    double radius;		// Definiert ”radius” als eine double Variable (8 Byte);
    char buchstabe;		// Definiert “buchstabe” als eine character Variable (1 Byte);

    // Zuweisungen an deklarierte Variablen mittels Zuweisungsoperand "="
    ergebnis = 10;      // weißt den Wert "10" an Speicherplatz der Variable "ergebnis" zu
    radius = 5.2;       // weißt den Wert "5.2" an Speicherplatz der Variablen "radius" zu
    buchstabe = 'A';    // weißt den Wert "A" (=65) an Speicherplatz der Variablen "buchstabe" zu

    return 0;
}