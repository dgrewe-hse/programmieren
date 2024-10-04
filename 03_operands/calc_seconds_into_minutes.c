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
 * Description: Beispielprogramm zum Umrechnen von Sekunden in Minuten.
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
    int seconds;
    int minutes;
    int remainingSeconds;

    // einlesen der Sekunden durch Benutzer
    scanf("%d", &seconds);

    // Berechnung der Minuten
    minutes = seconds / 60;
    remainingSeconds = seconds % 60;

    // Ausgabe auf Konsole
    printf("%i seconds are %i minutes and %i seconds", 
        seconds, minutes, remainingSeconds);
    return 0;
}
