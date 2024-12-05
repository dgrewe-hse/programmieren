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
 * File: struct_point.c
 * Description: Programm zur Demonstration von Strukturen in C.
 * Author: Dennis Grewe
 * Date: December 5th, 2024
 */

#include <stdio.h>

// Definition der Struktur Point
struct Point {
    int x; // x-Koordinate
    int y; // y-Koordinate
};

/**
 * Hauptprogramm
 */
int main() {
    // Deklaration und Initialisierung eines Punktes
    struct Point point1;

    // Zuweisung von Werten zu den Feldern der Struktur
    point1.x = 10; // x-Koordinate zuweisen
    point1.y = 20; // y-Koordinate zuweisen

    // Ausgabe der Werte der Struktur
    printf("Punkt Koordinaten: (%d, %d)\n", point1.x, point1.y);

    return 0; // Erfolgreiche Ausführung
}
