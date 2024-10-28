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
 * File: pointer_zuweisung.c
 * Description: Beispielprogramm zur Nutzung von Pointern in C und dem Zuweisen von Werten über Pointern.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

/*
 * Hauptfunktion des Programms
 */
int main() {
    // Deklaration und Initialisierung von zwei Variablen
    int apples = 5;
    int bananas = 2;
    
    // Pointer zeigt auf "apples"
    int *pointer = &apples;
    
    // Pointer2 zeigt auf "bananas"
    int *pointer2 = &bananas;
    printf("bananas = %d\n", bananas);
    
    // Kopiert den Wert von "apples" nach "bananas" über pointer
    bananas = *pointer;    // bananas wird zu 5
    printf("bananas = %d\n", bananas);
    
    // Kopiert den Wert von "apples" in den Speicherbereich von pointer2
    *pointer2 = apples;    // bananas wird zu 5
    printf("bananas = %d\n", bananas);
    
    // pointer zeigt nun auf die gleiche Adresse wie pointer2
    pointer = pointer2;
    
    return 0;
}
