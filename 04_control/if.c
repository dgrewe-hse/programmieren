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
 * Date: October 06th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration einer Ganzzahl zur Prüfung auf Gerade/Ungerade
    int number;

    // Einlesen einer Ganzzahl durch den Benutzer
    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &number);

    // Übeprüfung auf Gerade/Ungerade mittels Modulo-Operator
    // Ausgabe je nach Test-Ergebnis auf der Konsole
    if (number % 2 == 0) {
        printf("Die Zahl %i ist gerade.", number);
    }
    if (number % 2 != 0) {
        printf("Die Zahl %i ist ungerade.", number);
    }

    return 0;
}
