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
 * File: circle_area.c
 * Description: Beispiel einer Kreisflächenberechnung.
 * Author: Dennis Grewe
 * Date: October 02nd, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Definition Konstante für Zahl PI
    const float PI = 3.14159;
    // Variablendeklaration radius und Kreisfläche
    double radius, area;
    // Wert für "radius" an Variable zuweisen
    radius = 20;
    // Berechnung der Kreisfläche
    area = radius * radius * PI;
    // Ausgabe berechnete Kreisfläche
    printf("Ergebnis Kreisflaeche mit Radius %f: %f", radius, area);

    return 0;
}
