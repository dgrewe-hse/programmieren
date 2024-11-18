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
 * File: multi_array_multiplication_table.c
 * Description: Programm zur Demonstration einer Multiplikationstabelle mittels Mehrdimensionalen Arrays.
 * Author: Dennis Grewe
 * Date: November 18th, 2024
 */

#include <stdio.h>

// Konstanten für die Größe der Multiplikationstabelle
const int ROWS = 10;
const int COLUMNS = 10;

// Prototyp fuer die Funktion zur Ausgabe der Multiplikationstabelle
void print_multiplication_table(const int table[ROWS][COLUMNS]);

/**
 * Hauptprogramm
 */
int main() {
    // Deklaration eines Mehrdimensionalen Arrays mit 10 Zeilen und 10 Spalten
    int multiplication_table[ROWS][COLUMNS];

    // Initialisierung der Multiplikationstabelle
    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLUMNS; column++) {
            multiplication_table[row][column] = (row + 1) * (column + 1);
        }
    }

    // Ausgabe der Multiplikationstabelle
    print_multiplication_table(multiplication_table);

    return 0;
}

/**
 * Funktion zur Ausgabe der Multiplikationstabelle
 */
void print_multiplication_table(const int table[ROWS][COLUMNS]) {
    // Ausgabe der Multiplikationstabelle
    // beginnend mit der ersten Zeile
    for (int row = 0; row < ROWS; row++) {
        // Ausgabe der Spalten der aktuellen Zeile
        for (int column = 0; column < COLUMNS; column++) {
            printf("%d\t", table[row][column]);
        }
        printf("\n");
    }
}
