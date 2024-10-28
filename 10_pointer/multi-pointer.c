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
 * File: multi-pointer.c
 * Description: Beispielprogramm zur Nutzung von Multi-Pointern in C.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>
#include <stdio.h>

/*
 * Hauptfunktion des Programms
 */
int main() {
    int var;        // normale Variable
    int *ptr;       // einzelner Pointer
    int **pptr;     // Pointer auf Pointer (Multi-Pointer)
    
    var = 3000;     // Variable initialisieren
    
    // Adresse von var dem ersten Pointer zuweisen
    ptr = &var;
    
    // Adresse von ptr dem Multi-Pointer zuweisen
    pptr = &ptr;
    
    // Ausgabe aller Werte
    printf("Wert von var: %d\n", var);
    printf("Wert verfügbar bei *ptr: %d\n", *ptr);
    printf("Wert verfügbar bei **pptr: %d\n", **pptr);
    
    return 0;
}