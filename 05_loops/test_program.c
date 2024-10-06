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
 * File: guess_game_do-while.c
 * Description: Kleines Testprogramm für Schleifen und Kontrollstrukturen
 *              im Rahmen der Vorlesung in Kapitel 5: Schleifenkonstrukte.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Bilbliotheken zur Nutzung von Funktionen
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // n > 0, z.B. n == 100
    int n = 100;

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = 3 * n + 1;
        }
        printf("%d\n", n);
    }

    return 0;
}
