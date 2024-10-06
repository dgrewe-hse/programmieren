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
 * File: square_for.c
 * Description: Beispielprogramm zur Berechnung von Quadratzahlen unter 
 *              Verwendung des Schleifenkonstrukts FOR.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration aller Variablen
    int n;

    // Benutzer nach Eingabe der Basis fragen
    printf("Bittte geben Sie eine Ganzzahl ein: ");
    scanf("%d", &n);

    // Ausgabe der Quadratzahlen von 1 bis Benutzereingabe
    // mittels for-Schleife. Die Anzahl der Durchläufe 
    // sind abhängig der Benutzereingabe
    printf("Die Quadratzahlen von 1 bis %d lauten:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}