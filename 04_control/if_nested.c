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
 * File: if_nested.c
 * Description: Beispielprogramm zur Demonstration von verschachtelten IF-Anweisungen.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration aller benötigter Variablen
    int i = 2;
    int j = 1;
    int k = 3;

    // Äusserer Test
    if (i > k) {
        // Innerer Test
        if (j > k) {
            printf("i und j sind groesser als k!");
        }
    }
    else {
        printf("i ist kleiner gleich k!");
    }

    return 0;
}
