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
 * File: swap.c
 * Description: Programm zur Demonstration von Pointer als Übergabeparameter von Funktionen.
 * Author: Dennis Grewe
 * Date: November 18th, 2024
 */

#include <stdio.h>

// Prototyp-Deklaration der Funktion swap
void swap(int *value1_ptr, int *value2_ptr);

/**
 * Hauptprogramm
 */
int main() {
    // Deklaration der Variablen
    int value1 = 10, value2 = 20;

    // Ausgabe der Werte vor dem Swap
    printf("Value1: %d, Value2: %d\n", value1, value2);

    // Aufruf der Funktion swap
    swap(&value1, &value2);

    // Ausgabe der Werte nach dem Swap
    printf("Value1: %d, Value2: %d\n", value1, value2);

    return 0;
}

/**
 * Funktion zur Vertauschung der Werte von value1 und value2
 */
void swap(int *value1_ptr, int *value2_ptr) {
    // Deklaration einer temporären Variable
    int temp = *value1_ptr;
    // Vertauschung der Werte von value1 und value2
    *value1_ptr = *value2_ptr;
    // Setzen des Wertes von value2 auf den Wert von temp
    *value2_ptr = temp;
}