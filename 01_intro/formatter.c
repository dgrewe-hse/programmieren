/*
 * Copyright 2025
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
 * File: formatter.c
 * Description: Beispiel für ein Programm um Werte in C auf der Konsole zu formatieren.
 * Author: Dennis Grewe
 * Date: September 23rd, 2024
 */
#include <stdio.h>

/* Hauptfunktion des Programms*/
int main(void) {

    // Deklaration zweier Variablen und Zuweisung Ganzzahl- und Gleitkommazahl-Werte
    int zahl = 2002;
    float gk = 12.34f;

    // Formatierte Ausgaben unter Verwendung 
    // der geeigneten Formatelemente
    printf("%d\n", zahl);               // allgemeine Ausgabe Ganzzahl
    printf("%8d\n", zahl);              // %8 = rechtsbündig
    printf("%-8d\n", zahl);             // %-8 = linksbündig
    printf("%o\n", zahl);               // %o = Ausgabe als Oktalzahl 
    printf("%x\n", zahl);               // %x = Ausgabe als Hexadezimalzahl
    printf("\n\n%f\n", gk);             // \n = 'newline' also Zeilenumbruch
    printf("%8.2f\n", gk);              // %8.2f = rechtsbündig, auf 2 Nachkommstellen genau
    printf("%8.1f\n", gk);
    printf("\nNr\tPreis\n");            // \t = 'tab' also Einrücken
    printf("%3d\t%6.2f\n", 1, 1.5);     // %.2f = Ausgabe auf 2 Nachkommstellen genau
    printf("%3d\t%6.2f\n", 101, 121.5);

	return 0;
}