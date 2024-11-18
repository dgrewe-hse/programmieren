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
 * File: multi_array_matrix.c
 * Description: Programm zur Demonstration einer Matrix mittels Mehrdimensionalen Arrays inkl. Ausgabe.
 * Author: Dennis Grewe
 * Date: November 18th, 2024
 */

#include <stdio.h>
#include <stdlib.h>

// Konstanten für die Größe der Matrix
const int ROWS = 3;
const int COLUMNS = 5;

// Prototyp der Funktion zur Ausgabe der Matrix
void print_matrix(const int matrix[ROWS][COLUMNS]);


/**
 * Hauptprogramm
 */
int main() {
        // Deklaration eines Mehrdimensionalen Arrays mit 3 Zeilen und 5 Spalten
    int matrix[ROWS][COLUMNS];

    // Initialisierung der Matrix mit Zufallszahlen
    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLUMNS; column++) {
            // Zufallszahl zwischen 0 und 9 mittels rand() und % 10
            matrix[row][column] = rand() % 10;
        }
    }

    // Ausgabe der Matrix
    print_matrix(matrix);

    return 0;
}

/**
 * Funktion zur Ausgabe der Matrix
 */
void print_matrix(const int matrix[ROWS][COLUMNS]) {
    // Ausgabe der Matrix, Zeilenweise
    for (int row = 0; row < ROWS; row++) {
        // Ausgabe der Spalten der aktuellen Zeile
        for (int column = 0; column < COLUMNS; column++) {
            printf("%d ", matrix[row][column]);
        }
        printf("\n");
    }
}

