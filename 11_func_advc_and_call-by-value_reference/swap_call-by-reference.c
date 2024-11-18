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
 * File: swap_call-by-reference.c
 * Description: Programm zur Demonstration der Call-by-reference Thematik 
 *              am Beispiel einer Swap-Funktion, welche die Werte zweier
 *              Variablen tauscht.
 * Author: Dennis Grewe
 * Date: October 07th, 2024
 */
#include <stdio.h>

/**
 * Funktion: swap
 * --------------
 * Vertauscht die Werte der beiden übergebenen ganzen Zahlen und gibt die Werte vor und nach dem Tausch aus.
 *
 * Parameter:
 *  number1 - Die erste ganze Zahl.
 *  number2 - Die zweite ganze Zahl.
 *
 * Beschreibung:
 *  Diese Funktion nimmt zwei ganze Zahlen als Eingabe und vertauscht deren Werte. Zuerst werden die ursprünglichen Werte
 *  ausgegeben, dann werden die beiden Werte durch Verwendung einer temporären Variable (`temp`) getauscht. Anschließend
 *  werden die neuen Werte nach dem Tausch auf der Konsole ausgegeben. Der Tausch erfolgt nun innerhalb der Funktion,
 *  da die Werte per "call by reference" übergeben werden (mittels *-Operator). Somit werden die ursprünglichen Variablen in der 
 *  aufrufenden Funktion verändert.
 *
 * Hinweis:
 *  Da die Werte durch "call by reference" übergeben werden, beeinflusst diese Funktion die ursprünglichen Werte in der 
 *  aufrufenden Funktion.
 *
 * Beispiel:
 *  int a = 5;
 *  int b = 10;
 *  swap(a, b);  // Gibt aus: "Swap - Übergebenen Werte lauten: (5, 10)" und "Swap - Nach dem Tausch lauten die Werte: (10, 5)"
 */
void swap(int *number1, int *number2) {
    // Ausgabe der übergebenen Werte
    printf("\tSwap - Übergebenen Werte lauten: "
           "(%d, %d)\n", number1, number2);

    // Nun tauschen der Werte der Variablen
    int temp = number1;
    number1 = number2;
    number2 = temp;

    printf("\tSwap - Nach dem Tausch lauten die Werte: "
           "(%d, %d)\n", number1, number2);
}

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration und Definition der benötigten Variablen
    int number1 = 1, number2 = 2;

    // Ausgabe der Werte der deklarierten Variablen
    printf("Main - Definierte Werte lauten: "
           "(%d, %d)\n", number1, number2);
    
    // nun wird die "swap" Funktion zum Tauschen gerufen
    // ACHTUNG: Nicht die Werte sondern die Speicheradressen (Pointer)
    // der Variablen selbst werden mittels &-Operator übergeben.
    swap(&number1, &number2);

    // Erneute Ausgabe der Werte der deklarierten Variablen
    printf("Main - Definierte Werte in Main lauten weiterhin: "
           "(%d, %d)\n", number1, number2);

    return 0;
}