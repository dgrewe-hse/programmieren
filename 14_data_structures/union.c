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
 * File: union.c
 * Description: Programm zur Demonstration von unions in C.
 * Author: Dennis Grewe
 * Date: December 5th, 2024
 */

#include <stdio.h>

union Person {
    int height;
    int age;
} data;

int main() {
    // Zuweisung eines Wertes zur Variablen height
    // der union speichert nur einen Wert zu einem Zeitpunkt
    data.height = 180;
    printf("Height: %d\n", data.height);

    // Versuch: Zuweisung eines Wertes zur Variablen age
    // da die union nur einen Wert zu einem Zeitpunkt speichern kann
    // wird der Wert von height überschrieben
    data.age = 25;  // NOT OKAY
    printf("Height: %d, Age: %d\n", data.height, data.age);
    return 0;
}
