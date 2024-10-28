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
 * File: syntactical_sugar_pointer.c
 * Description: Beispielprogramm zur Nutzung von syntaktischer Zucker für Pointern in C.
 *              Das Programm demonstriert die Verwendung von Kurzschreibweisen für Pointern.
 * Die Lesbarkeit des Codes wird durch diese Kurzschreibweisen ggf. erschwert.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

int main() {

    // Oneline Deklaration von zwei Pointern
    int *ptr, *ptr2;
    // Oneline Deklaration von zwei Variablen
    int apples = 5, bananas = 10;
    // Oneline Deklaration zweier Pointer die auf 
    // die Adressen der Variablen apples und bananas zeigen
    int *ptr_apples = &apples, *ptr_bananas = &bananas;

    return 0;
}
