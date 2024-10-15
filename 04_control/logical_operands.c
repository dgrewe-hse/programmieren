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
 * File: if.c
 * Description: Beispielprogramm zur Demonstration von IF-Anweisungen.
 * Author: Dennis Grewe
 * Date: October 15th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/*
 * Hauptfunktion main
 */
int main() {
    int a = 10;
    int b = 5;
    int c = 0;

    // Logisches UND (&&): Beide Bedinungen müssen "wahr" sein, sodass das Ergebis auch "wahr" ist.
    if (a > b && b > 0) {
        printf("Beide Werte in a und b sind größer als 0.\n");
    }

    // Logisches ODER (||): Min. eines der beiden Bedingungen muss "wahr" sien, sodass das Ergebnis "wahr" ist.
    if (a < b || c == 0) {
        printf("Entweder a ist kleiner als b, oder c ist gleich 0.\n");
    }

    // Logisches NICHT (!): Negiert den Wahrheitswert einer Bedingung.
    if (!c) {
        printf("Wert in c ist gleich 0; dies entspricht 'unwahr'/false. Somit ist !c (nicht c) gleich 'wahr'.\n");
    }
    
    return 0;
}