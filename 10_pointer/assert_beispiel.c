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
 * File: assert_beispiel.c
 * Description: Beispielprogramm zur Nutzung von assert in C um Fehlerzustände zu finden 
 *              und das Programm bei einem Fehlerzustand kontrolliert zu beenden.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>
#include <assert.h> // Einbinden der assert-Bibliothek

/*
 * Hauptfunktion des Programms
 */
int main() {
    // Deklaration und Initialisierung der Variable "x"
    int x = 5;

    // Bedingung prüfen
    assert(x == 5); // Kein Fehler, da x gleich 5 ist

    x = 3;
    assert(x == 5); // Fehler: Programm wird angehalten

    // Ausgabe der Nachricht, dass das Programm erfolgreich beendet wurde
    printf("Programmende.\n");

    return 0;
}
