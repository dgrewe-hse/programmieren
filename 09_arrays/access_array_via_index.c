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
 * File: access_array_via_index.c
 * Description: Beispielprogramm zur Nutzung von Arrays in C unter Verwendung von Indizes.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

int main() {

    // Deklaration eines Arrays mit 5 Elementen
    int my_array[5] = {1, 2, 3, 4, 5};

    // Ausgabe des Arrays auf die Konsole
    printf("Das Array my_array hat die Größe: %lu\n", sizeof(my_array));

    // Ausgabe des ersten Elements des Arrays mittels Index = 0
    printf("Das erste Element des Arrays my_array hat den Wert: %d\n", my_array[0]);

    // Ausgabe des zweiten Elements des Arrays mittels Index = 1
    printf("Das zweite Element des Arrays my_array hat den Wert: %d\n", my_array[1]);

    // Ausgabe des dritten Elements des Arrays mittels Index = 2
    printf("Das dritte Element des Arrays my_array hat den Wert: %d\n", my_array[2]);

    // Ausgabe des vierten Elements des Arrays mittels Index = 3
    printf("Das vierte Element des Arrays my_array hat den Wert: %d\n", my_array[3]);

    // Ausgabe des fünften Elements des Arrays mittels Index = 4
    printf("Das fünfte Element des Arrays my_array hat den Wert: %d\n", my_array[4]);

    return 0;
}