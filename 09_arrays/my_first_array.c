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
 * File: my_first_array.c
 * Description: Beispielprogramm zur Nutzung von Arrays in C.
 * Author: Dennis Grewe
 * Date: October 27th, 2024
 */
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration eines Arrays mit 5 Elementen
    int my_array[5];

    // Ausgabe der Array-Größe auf die Konsole
    printf("Das Array my_array hat die Größe: %lu\n", sizeof(my_array));
    
    return 0;
}
