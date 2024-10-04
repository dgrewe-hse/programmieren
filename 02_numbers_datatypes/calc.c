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
 * File: calc.c
 * Description: Beispielprogramm für einfache Rechenoperationen und printf.
 * Author: Dennis Grewe
 * Date: October 02nd, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Addition zweier Ganzzahlen
    printf("%d", 1+2);
    printf("\n");       // Zeilenumbruch
    // Addition zweier Ganzzahlen und Division mit Fließkommazahl
    printf("%f", ((1+2) / 2.5));
    printf("\n");       // Zeilenumbruch
    // Subraktion zweier Ganzzahlen und Multiplikation mit Ganzzahl
    printf("%i", ((10-2) * 5));

    return 0;
}
