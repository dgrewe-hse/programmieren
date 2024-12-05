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
 * File: struct_books.c
 * Description: Programm zur Demonstration von verschachtelten Strukturen in C.
 * Author: Dennis Grewe
 * Date: December 5th, 2024
 */

#include <stdio.h>
#include <string.h>

// Definition der Struktur Author
struct Author {
    char name[50]; // Name des Autors
    int age;       // Alter des Autors
};

// Definition der Struktur Book
struct Book {
    char title[100]; // Titel des Buches
    struct Author author; // Autor des Buches
};

int main() {
    // Deklaration und Initialisierung eines Buches
    struct Book book1;

    // Zuweisung von Werten zu den Feldern der Struktur Author
    strcpy(book1.author.name, "George Orwell"); // Name des Autors
    book1.author.age = 46;                       // Alter des Autors

    // Zuweisung von Werten zu den Feldern der Struktur Book
    strcpy(book1.title, "1984"); // Titel des Buches

    // Ausgabe der Werte der Struktur Book und Author
    printf("Buch Titel: %s\n", book1.title);
    printf("Autor: %s, Alter: %d\n", book1.author.name, book1.author.age);

    return 0; // Erfolgreiche Ausführung
}

