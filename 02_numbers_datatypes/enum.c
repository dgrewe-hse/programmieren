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
 * File: enum.c
 * Description: Beispielprogramm für den Umgang mit enums.
 * Author: Dennis Grewe
 * Date: October 02nd, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

// Definition einer Liste von Symbolkonstanten
// sogennate Enumeration "enum", z.B. zur Verwaltung
// von Farben
typedef enum color { 
    RED,
    GREEN,
    BLUE 
} Color;

/* 
 * Hauptfunktion des Programms
 */
int main() {
    // Deklaration einer Variable "myColor" des Typs "Color"
    Color myColor;
    // Zuweisung des Wertes "RED" an Variable "myColor" des Typs "Color"
    myColor = RED;

    return 0;
}