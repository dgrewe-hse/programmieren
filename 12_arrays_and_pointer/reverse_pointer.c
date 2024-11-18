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
 * File: const_func_param_pointer.c
 * Description: Programm zur Demonstration von const Pointer als Funktionsparameter.
 * Author: Dennis Grewe
 * Date: November 18th, 2024
 */

#include <stdio.h>

// Prototyp-Deklaration der Funktion reverse
int *reverse(int *list, int size);

void print_array(int *list, int size);

/**
 * Hauptprogramm
 */
int main() {
    // Deklaration eines Arrays mit 6 Elementen
    int list[6] = {11, 12, 13, 14, 15, 16};

    // Ausgabe der Werte des Arrays vor der Rückgabe
    printf("Values before reverse:\n");
    print_array(list, 6);
    printf("\n");

    // Aufruf der Funktion reverse
    int *reversed_list = reverse(list, 6);

    // Ausgabe der Werte des Arrays nach der Rückgabe
    printf("Values after reverse:\n");
    print_array(reversed_list, 6);
    printf("\n");

    return 0;
}

/**
 * Funktion zur Rückgabe des umgekehrten Arrays
 */
int *reverse(int *list, int size) {
    // Deklaration eines temporären Arrays
    int result[size];

    // kopieren der Werte des Arrays in das result Array
    // in umgekehrter Reihenfolge
    for (int i = 0; i < size; i++) {
        result[i] = list[size - i - 1];
    }

    // Rückgabe des umgekehrten Arrays
    return result;
}

/**
 * Funktion zur Ausgabe der Werte des Arrays
 */
void print_array(int *list, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
}
