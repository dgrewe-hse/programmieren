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
 * File: block.c
 * Description: Beispielprogramm zur Demonstration von Geltungsbereichen.
 *              ACHTUNG: PROGRAMM IST ABSICHTLICH NICHT LAUFFÄHIG
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration aller benötigter Variablen
    int x = 10;

    if (x > 5) {
        // Deklaration einer neuen Variablen
        int y = x * 10;
    }

    // Ausgabe von y auf Konsole liefert einen Fehler
    // da y nur im Bereich um Zeile 32-35 existiert und 
    // zugänglich ist -> error: use of undeclared identifier 'y'
    printf("%d", y);

    return 0;
}