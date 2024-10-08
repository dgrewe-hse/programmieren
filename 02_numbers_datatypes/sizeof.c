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
 * File: sizeof.c
 * Description: Beispiel für die Nutzung der sizeof-Funktion in C.
 * Author: Dennis Grewe
 * Date: October 02nd, 2024
 */
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {

    // Schritt 1: Variablen deklarieren
    int ergebnis;
    double radius;
    char buchstabe;

    // Schritt 2: größe der Variablen mittels sizeof()-Funktion
    // bestimmen und auf der Konsole ausgeben
    printf("%lu\n", sizeof(ergebnis));
    printf("%lu\n", sizeof(radius));
    printf("%lu\n", sizeof(buchstabe));

    return 0;
}





