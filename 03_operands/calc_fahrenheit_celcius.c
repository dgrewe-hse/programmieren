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
 * File: calc_fahrenheit_celcius.c
 * Description: Beispielprogramm zur Umrechnung von Temperaturwerten.
 * Author: Dennis Grewe
 * Date: October 04th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration aller benötigter Variablen
    float fahrenheit, celcius;

    // Eingabeaufforderung Benutzer
    printf("Bitte geben Sie die Temperatur in Fahrenheit ein: ");
    scanf("%f", &fahrenheit);

    // Celcius-Wert berechnen
    celcius = (5 / 9) * (fahrenheit - 32);
    // Ausgabe auf Konsole
    printf("Die Temperatur in Celcius lautet: %.2f\n", celcius);

    return 0;
}
