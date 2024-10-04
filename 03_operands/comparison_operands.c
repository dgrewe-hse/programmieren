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
 * File: comparison_operands.c
 * Description: Beispiel für die Nutzung von Vergleichsoperatoren.
 * Author: Dennis Grewe
 * Date: October 04th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Ausgabe der Vergleichsoperationen
    printf("7 < 10: %i\n", (7 < 10));           // '<' = kleiner
    printf("4 > 3: %i\n", (4 > 3));             // '>' = größer
    printf("5 <= 6: %i\n", (5 <= 6));           // '<=' = kleiner-gleich
    printf("17.0 >= 3.5: %i\n", (17.0 >= 3.5)); // '>=' = größer-gleich

    return 0;
}
