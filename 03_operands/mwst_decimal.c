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
 * File: calc_seconds_into_minutes.c
 * Description: Beispielprogramm Mehrwersteuerberechnung erweitert.
 * Author: Dennis Grewe
 * Date: October 04th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Variable um Wert zu speichern
    double purchaseAmount;

    // Eingabeaufforderung Benutzer
    printf("Bitte den Grundbetrag angeben: ");
    scanf("%lf", &purchaseAmount);

    // MWST berechnen
    double tax = purchaseAmount * 0.19;

    // Printing the value after overflow
    printf("Sales tax is : %.2lf\n", ((int)(tax * 100) / 100.0));

    return 0;
}
