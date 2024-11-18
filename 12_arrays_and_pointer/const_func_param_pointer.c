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

// Prototyp-Deklaration der Funktion print_array
void print_array(const int *value_ptr, int size);

/**
 * Hauptprogramm
 */
int main() {
    // Deklaration eines Arrays mit 6 Elementen
    int list[6] = {11, 12, 13, 14, 15, 16};

    // Aufruf der Funktion print_array
    print_array(list, 6);

    return 0;
}

/**
 * Funktion zur Ausgabe der Werte des Arrays
 */
void print_array(const int *value_ptr, int size) {
    // Ausgabe der Werte des Arrays
    // value_ptr ist ein unveränderlicher Pointer auf ein int
    for (int i = 0; i < size; i++) {
        printf("Value of list[%d] = %d\n", i, value_ptr[i]);
    }
}
