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
 * File: func_print_array.c
 * Description: Programm zur Demonstration von Arrays und Funktionen.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

/**
 * @brief Funktion zur Ausgabe eines Arrays
 * @param list[] Das Array, das ausgegeben werden soll
 * @param size Die Größe des Arrays
 */
void printArray(int list[], int size);

/*
 * Hauptprogramm
 */
int main() {
    // Deklaration und Initialisierung des Arrays
    int numbers[] = {1, 3, 6, 4, 8};
    // Aufruf der Funktion
    printArray(numbers, 5);
    return 0;
}

// Implementierung der Funktion
void printArray(int list[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}
