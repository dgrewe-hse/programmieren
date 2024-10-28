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
 * File: access_array_via_for_loop.c
 * Description: Beispielprogramm zur Nutzung von Arrays in C unter Verwendung einer for-Schleife.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

int main() {

    // Deklaration eines Arrays mit 5 Elementen
    int my_array[5] = {1, 2, 3, 4, 5};

    // Ausgabe des Arrays auf die Konsole
    printf("Das Array my_array hat die Größe in Bytes: %lu\n", sizeof(my_array));
    printf("Das Array my_array hat %d\n", sizeof(my_array) / sizeof(my_array[0]));

    // Ausgabe des Arrays mittels for-Schleife und Anzahl der Elemente mittels sizeof
    for (int i = 0; i < sizeof(my_array) / sizeof(my_array[0]); i++) {
        // Ausgabe des aktuellen Elements des Arrays
        // Zählvariable i wird als Index des aktuellen Elements verwendet
        // my_array[i] ist der Wert des aktuellen Elements
        printf("Das Element %d des Arrays my_array hat den Wert: %d\n", i, my_array[i]);
    }

    return 0;
}