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
 * File: max.c
 * Description: Programm mit ausgelagerter max-Funktion zur Bestimmung
 *              der größeren zweier gegebenen Zahlen.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
#include <stdio.h>

/**
 * Funktion: max
 * -------------
 * Gibt das Maximum von zwei ganzen Zahlen zurück.
 *
 * Parameter:
 *  number1 - Die erste ganze Zahl zum Vergleich.
 *  number2 - Die zweite ganze Zahl zum Vergleich.
 *
 * Rückgabewert:
 *  Die größere der beiden ganzen Zahlen (number1 oder number2).
 *
 * Beispiel:
 *  int a = 5;
 *  int b = 10;
 *  int maximum = max(a, b); // maximum wird 10 sein
 */
int max(int number1, int number2) {
    int result;

    if (number1 > number2)
        result = number1;
    else
        result = number2;
    
    return result;
}

/* 
 * Hauptfunktion des Programms 
 */
int main() {

    // Deklaration zweier Variablen
    int i = 5;
    int j = 2;

    // Bestimmen der größeren beider Zahlen durch Aufruf 
    // von max-Funktion und Übergabe der Variablen zur Bestimmung
    int highest_value = max(i, j);

    printf("Die größere der beiden Zahlen lautet: %d", highest_value);

    return 0;
}