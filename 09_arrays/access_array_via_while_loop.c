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
 * File: access_array_via_while_loop.c
 * Description: Beispielprogramm zur Nutzung von Arrays in C unter Verwendung einer while-Schleife.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

int main() {

    // Deklaration eines Arrays mit 5 Elementen
    int my_array[5] = {1, 2, 3, 4, 5};

    // Initialisierung der Zählvariable
    int i = 0;

    // Ausgabe des Arrays mittels while-Schleife
    while (i < 5) {
        // Ausgabe des aktuellen Elements des Arrays
        // Zählvariable i wird als Index des aktuellen Elements verwendet
        // my_array[i] ist der Wert des aktuellen Elements
        printf("Das Element %d des Arrays my_array hat den Wert: %d\n", i, my_array[i]);
        // Inkrementierung der Zählvariable
        i++;
    }

    return 0;
}