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
 * File: sum_array.c
 * Description: Programm zur Berechnung der Summe eines Arrays einmal mit Rekursion und einmal Iterativ.
 * Author: Dennis Grewe
 * Date: November 25th, 2024
 */

#include <stdio.h>

/**
 * Iterative Funktion zur Berechnung der Summe eines Arrays.
 * @param arr: Das Array.
 * @param size: Die Größe des Arrays.
 * @return: Die Summe des Arrays.
 */
int sum_iterative(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

/**
 * Rekursive Funktion zur Berechnung der Summe eines Arrays.
 * @param arr: Das Array.
 * @param size: Die Größe des Arrays.
 * @return: Die Summe des Arrays.
 */
int sum_recursive(int arr[], int size) {
    if (size == 0) {
        return 0;  // Abbruchbedingung: Leeres Array hat Summe 0
    }
    // Rekursiver Aufruf mit dem nächsten Element des Arrays.
    // Die Summe des Arrays ist die Summe des letzten Elements 
    // plus die Summe des restlichen Arrays.
    // Wir durchlaufen das Array sozusagen von hinten nach vorne.
    return arr[size - 1] + sum_recursive(arr, size - 1);
}

// Hauptprogramm
int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Beispiel-Array
    int size = sizeof(arr) / sizeof(arr[0]);  // Größe des Arrays berechnen

    // Ausgabe der Summen einmal iterativ und einmal rekursiv.
    printf("Iterative Summe: %d\n", sum_iterative(arr, size));
    printf("Rekursive Summe: %d\n", sum_recursive(arr, size));

    return 0;
}

