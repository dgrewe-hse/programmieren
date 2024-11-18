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
 * File: reverse_array.c
 * Description: Programm zur Demonstration der Umkehrung eines Arrays.
 * Author: Dennis Grewe
 * Date: November 18th, 2024
 */
#include <stdio.h>

/**
 * @brief Funktion zur Umkehrung eines Arrays.
 * @param array Das zu umkehrende Array.
 * @param size Die Größe des Arrays.
 */
void reverse_array(int array[], int size) {
    // Schleife zur Umkehrung des Arrays
    for (int i = 0; i < size / 2; i++) {
        // Lesen des Wertes von array[i]
        int temp = array[i];
        // tauschen des Wertes von array[i] mit array[size - i - 1]
        array[i] = array[size - i - 1];
        // zuweisen des Wertes von temp an array[size - i - 1]
        array[size - i - 1] = temp;
    }
}

/**
 * @brief Funktion zur Ausgabe eines Arrays.
 * @param array Das zu ausgebendende Array.
 * @param size Die Größe des Arrays.
 */
void print_array(int array[], int size) {
    // Schleife zur Ausgabe des Arrays
    for (int i = 0; i < size; i++) {
        // Ausgabe des Wertes von array[i]
        printf("%d ", array[i]);
    }
    // Ausgabe eines Zeilenumbruchs
    printf("\n");
}

/**
 * Hauptfunktion des Programms
 */
int main() {
    // Deklaration und Initialisierung des Arrays
    int array[] = {1, 2, 3, 4, 5};

    // Ausgabe des Arrays vor der Umkehrung
    printf("Array vor der Umkehrung: ");
    print_array(array, 5);

    // Aufruf der Funktion zur Umkehrung des Arrays
    reverse_array(array, 5);

    // Ausgabe des Arrays nach der Umkehrung
    printf("Array nach der Umkehrung: ");
    print_array(array, 5);
    return 0;
}
