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
 * File: pointer_increment_decrement.c
 * Description: Beispielprogramm zur Nutzung von Pointern in C und dem Inkrementieren und Dekrementieren von Pointern.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

int main() {
    // Deklaration und Initialisierung der Variable "counter"
    int counter = 5;
    int *ptr = &counter; // Pointer zeigt auf "counter"
    
    printf("Speicheradresse von counter = %p\n", ptr);
    printf("Wert von counter = %d\n", *ptr);
    
    // Inkrement
    ptr++;  // Bewegt sich zum nächsten Integer
    printf("Nach ptr++:\n");
    printf("Neue Adresse: %p\n", (void*)ptr);
    printf("Wert an dieser Adresse: %d\n\n", *ptr);
    
    // Dekrement
    ptr--;  // Geht einen Integer zurück
    printf("Nach ptr--:\n");
    printf("Neue Adresse: %p\n", (void*)ptr);
    printf("Wert an dieser Adresse: %d\n\n", *ptr);
    
    return 0;
}
