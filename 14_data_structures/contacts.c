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
 * File: contacts.c
 * Description: Programm zur Demonstration von dynamischen Arrays und Filtern.
 * Author: Dennis Grewe
 * Date: December 5th, 2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Person {
    char *name;          // Name der Person
    union {
        int height;      // Größe der Person
        char gender;     // Geschlecht der Person
    } data;
    bool has_height;     // Flag, ob die Größe gespeichert wurde
    struct Person *next; // Zeiger auf die nächste Person
};

int main() {

    // Deklaration eines Arrays von Personen
    struct Person table[100] = {
        {.name = "Dennis", .data.height = 180, .has_height = true, .next = NULL},
        {.name = "Max", .data.gender = 'm', .has_height = false, .next = NULL},
        {.name = "Anna", .data.height = 165, .has_height = true, .next = NULL}
        // ... weitere Personen
    };

    // ...

    // Initialisierung von Zeigern auf Listen von Personen
    struct Person *males = NULL;
    struct Person *females = NULL;
    struct Person *by_height = NULL;

    // Initialisierung Filter pointer
    struct Person *filter_males = males;
    struct Person *filter_females = females;
    struct Person *filter_by_height = by_height;

    // filter logic
    for (int i = 0; i < 100; i++) {
        if (table[i].data.gender == 'm') {
            table[i].next = filter_males;
            filter_males = &table[i];
        }
        else if (table[i].data.gender == 'f') {
            table[i].next = filter_females;
            filter_females = &table[i];
        }
        else {
            table[i].next = filter_by_height;
            filter_by_height = &table[i];
        }
    }

    // Setzen der globalen Zeiger
    // alle Filter werden auf die erste Person in der Liste gesetzt
    by_height = filter_by_height;
    males = filter_males;
    females = filter_females;

    return 0;
}
