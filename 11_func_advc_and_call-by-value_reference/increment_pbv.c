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
 * File: increment_pbv.c
 * Description: Programm zur Demonstration der Pass-by-value Thematik 
 *              am Beispiel einer Inkrementfunktion.
 * Author: Dennis Grewe
 * Date: October 07th, 2024
 */
#include <stdio.h>

/**
 * Funktion: increment
 * -------------------
 * Erhöht den Wert der übergebenen Zahl um 1 und gibt den neuen Wert aus.
 *
 * Parameter:
 *  number - Die zu erhöhende ganze Zahl, die von der aufrufenden Funktion bereitgestellt wird.
 *
 * Beschreibung:
 *  Diese Funktion erhöht den Wert der übergebenen Zahl `number` um 1. Anschließend wird der neue Wert
 *  der Zahl innerhalb der Funktion auf der Konsole ausgegeben. Der Parameter `number` wird jedoch 
 *  nur lokal verändert, da in C bei der Übergabe von Werten an Funktionen nur eine Kopie der Variablen übergeben wird.
 *
 * Hinweis:
 *  Der Wert von `number` in der aufrufenden Funktion wird nicht verändert, da in C Standardmäßig
 *  Werte durch "call by value" übergeben werden, und die Erhöhung nur lokal in der Funktion stattfindet.
 *
 * Beispiel:
 *  int wert = 5;
 *  increment(wert);  // Gibt "Der Wert von Nummer innerhalb der 'increment' Funktion lautet: 6" aus
 *  // Wert von "wert" bleibt jedoch in der aufrufenden Funktion unverändert bei 5.
 */
void increment(int number) {
    // erhöhen des Wertes von "number", deren Wert
    // durch die Aufrufende Funktion (hier: main)
    // bereitgestellt wurde
    number++;
    printf("\tDer Wert von Nummer innerhalb der "
          "'increment' Funktion lautet: %d\n", number);
}

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration und Definition der Variable "number"
    int number = 1;
    printf("Der Wert von Nummer zu Beginn in der "
          "'main' Funktion lautet: %d\n", number);
    
    // Aufruf der "increment" Funktion
    increment(number);

    // Erneute Ausgbe von "number" in der Main
    // Funktion. Die Änderung durch "increment"
    // hat keinen Einfluss auf "number" in der Main-Funktion
    // da der Wert von "number" an "increment" übergeben
    // wurde, nicht jedoch die Variable "number" selbst.
    // Dies nennt man "call-by-value".
    printf("Der Wert von Nummer am Ende der "
          "'main' Funktion lautet weiterhin: %d\n", number);

    return 0;
}
