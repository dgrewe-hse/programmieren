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
 * File: weekdays.c
 * Description: Beispielprogramm zur Demonstration der Nutzung einer
 *              SWITCH-Anweisung und ENUM.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

// Definition einer Liste von Symbolkonstanten
// sogennate Enumeration "enum"
typedef enum {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Day;

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration einer Variable "heute" vom Typ "Day"
    Day today;

    // Zuweisung des Werts "Wednesday" an Variable "today" vom Typ "Day"
    today = WEDNESDAY;

    // Verwendung der Symbolkanstanten in einem Switch-Statement
    switch (today) {
        case SUNDAY:
            printf("Heute ist Sonntag.\n");
            break;
        case MONDAY:
            printf("Heute ist Montag.\n");
            break;
        case TUESDAY:
            printf("Heute ist Dienstag.\n");
            break;
        case WEDNESDAY:
            printf("Heute ist Mittwoch.\n");
            break;
        case THURSDAY:
            printf("Heute ist Donnerstag.\n");
            break;
        case FRIDAY:
            printf("Heute ist Freitag.\n");
            break;
        case SATURDAY:
            printf("Heute ist Samstag.\n");
            break;
        default:
            printf("Ungültige Eingabe.\n");
            break;
    }

    return 0;
}