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
 * File: multi_array_sum_columns.c
 * Description: Programm zur Demonstration der Summe der Spalten eines Mehrdimensionalen Arrays.
 * Author: Dennis Grewe
 * Date: November 18th, 2024
 */

#include <stdio.h>
#include <stdlib.h>

// Konstanten für die Größe des Arrays
const int ROWS = 3;
const int COLUMNS = 5;

// Prototyp der Funktion zur Ausgabe der Summe der Spalten
void print_sum_of_columns(const int array[ROWS][COLUMNS]);

/**
 * Hauptprogramm
 */
int main() {
    // Deklaration eines Mehrdimensionalen Arrays mit 3 Zeilen und 5 Spalten
    int array[ROWS][COLUMNS];

    // Initialisierung des Arrays mit Zufallszahlen
    for (int row = 0; row < ROWS; row++) {
        for (int column = 0; column < COLUMNS; column++) {
            array[row][column] = rand() % 10;
        }
    }

    // Ausgabe der Summe der Spalten
    print_sum_of_columns(array);

    return 0;
}

/**
 * Funktion zur Ausgabe der Summe der Spalten
 */
void print_sum_of_columns(const int array[ROWS][COLUMNS]) {
    // zunächst die Summe der ersten Spalte berechnen,
    // anschließend der Zeilen 
    for (int column = 0; column < COLUMNS; column++) {
        int total = 0;
        for (int row = 0; row < ROWS; row++) {
            total += array[row][column];
        }
        printf("Sum of column %d: %d\n", column, total);
    }
}