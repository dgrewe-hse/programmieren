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
 * File: input_output_array.c
 * Description: Beispielprogramm zur Nutzung von Arrays in C unter Verwendung von scanf und printf.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

// Konstante für die Größe des Arrays
#define ARRAY_SIZE 5

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration eines Arrays mit 5 Elementen
    int my_array[ARRAY_SIZE];

    // Eingabe der Elemente des Arrays mittels scanf
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Bitte geben Sie den Wert für das Element %d ein: ", i);
        scanf("%d", &my_array[i]);
    }

    // Ausgabe der Elemente des Arrays mittels printf
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Das Element %d von my_array hat den Wert: %d\n", i, my_array[i]);
    }

    return 0;
}
