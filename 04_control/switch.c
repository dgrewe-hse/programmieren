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
 * File: switch.c
 * Description: Beispielprogramm zur Demonstration der Nutzung einer
 *              SWITCH-Anweisung.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main(void) {

    // Deklaration der Variablen zur Prüfung
    // und Zuweisung des Buchstabens 'N' an Variable
    char choice = 'N';
    // Überprüfung des Wertes in Variable "choice"
    switch (choice) {
        case 'Y':
            printf("Yes");
            break;
        case 'M':
            printf("Maybe");
            break;
        case 'N':
            printf("No");
            break;
        default:
            printf("Invalid input!");
    }

    return 0;
}

