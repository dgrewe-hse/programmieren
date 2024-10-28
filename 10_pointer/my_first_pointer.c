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
 * File: my_first_pointer.c
 * Description: Beispielprogramm zur Nutzung von Pointern in C.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

int main() {
    /*
     * Deklaration und Definition der Variable "count"
     * sowie des Zeigers "pointer", der auf die Adresse von "count" zeigt.
     */
    int count = 5;
    int *pointer = &count;

    // Ausgabe des Wertes von count und des Wertes auf den pointer zeigt (*pointer)
    printf("Wert von count: %d\n", count);
    // Mithilfe des Zeigers auf den Wert zugreifen - Dereferenzierung
    printf("Wert auf den pointer zeigt (*pointer): %d\n", *pointer);

    // Ausgabe der Speicheradressen von count und pointer
    printf("Speicheradresse von count (&count): %p\n", (void*)&count);
    printf("Speicheradresse auf die pointer zeigt (pointer): %p\n", (void*)pointer);
    printf("Speicheradresse von pointer selbst (&pointer): %p\n", (void*)&pointer);

    return 0;
}
