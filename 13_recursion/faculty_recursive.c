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
 * File: faculty_recursive.c
 * Description: Programm zur Berechnung der Fakultät rekursiv.
 * Author: Dennis Grewe
 * Date: November 25th, 2024
 */

#include <stdio.h>

/**
 * Funktion zur Berechnung der Fakultät rekursiv
 */
int faculty(int n) {
    // Abbruchbedingung: Wenn n 0 ist, 
    // wird 1 zurückgegeben
    if (n == 0) {
        return 1;
    }
    // Rekursiver Aufruf der Funktion mit n - 1
    return n * faculty(n - 1);
}

/**
 * Hauptprogramm
 */
int main() {
    // Variable für die Zahl, deren Fakultät berechnet werden soll
    int n = 5;

    // Ausgabe der Fakultät der Zahl n
    printf("Die Fakultät von %d ist %d\n", n, faculty(n));
    
    return 0;
}