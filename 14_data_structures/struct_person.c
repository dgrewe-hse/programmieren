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
 * File: struct_person.c
 * Description: Programm zur Demonstration von Strukturen in C.
 * Author: Dennis Grewe
 * Date: December 5th, 2024
 */

#include <stdio.h>
#include <string.h>

// Definition der Struktur Person
struct Person {
    char name[50];
    int age;
};

/**
 * Hauptprogramm
 */
int main() {
    // Deklaration und Initialisierung einer Person
    struct Person person1;

    // Zuweisung von Werten zu den Feldern der Struktur
    strcpy(person1.name, "Alice"); // Name zuweisen
    // person1.name = "Alice";      GEHT NICHT da 'name' ein Array ist!
    person1.age = 30;               // Alter zuweisen

    // Ausgabe der Werte der Struktur
    printf("Name: %s\n", person1.name);
    printf("Alter: %d\n", person1.age);

    return 0; // Erfolgreiche Ausführung
}
