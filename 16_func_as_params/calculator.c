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
 * File: calculator.c
 * Description: Beispiel für einen einfachen Taschenrechner.
 *              Dieses Beispiel zeigt, wie man Funktionen als Parameter übergeben
 *              kann.
 * Author: Dennis Grewe
 * Date: December 19th, 2024
 */

#include <stdio.h>

// ----- Funktionsprototypen -----
/**
 * Funktion, die zwei Zahlen addiert.
 * 
 * @param a Erste Zahl
 * @param b Zweite Zahl
 * @return Summe von a und b
 */
double add(double a, double b);

/**
 * Funktion, die zwei Zahlen subtrahiert.
 * 
 * @param a Erste Zahl
 * @param b Zweite Zahl
 * @return Differenz von a und b
 */
double subtract(double a, double b);

/**
 * Funktion, die zwei Zahlen multipliziert.
 * 
 * @param a Erste Zahl
 * @param b Zweite Zahl
 * @return Produkt von a und b
 */
double multiply(double a, double b);

/**
 * Funktion, die zwei Zahlen dividiert.
 */
double divide(double a, double b);

void print_help();

/**
 * Funktion, die eine Berechnung auf zwei Zahlen mit einer Operation ausführt.
 * 
 * @param operation_ptr Zeiger auf die Funktion, die ausgeführt werden soll
 * @param a Erste Zahl
 * @param b Zweite Zahl
 * @return Ergebnis der Operation
 */
double calculate(double (*operation_ptr)(double, double), double a, double b);

// ----- Hauptprogramm -----
int main() {

    // Deklaration der Variablen, sowie eines Zeigers auf eine Funktion
    double a = 0.0;     // erste Zahl, initialisiert mit 0.0
    double b = 0.0;     // zweite Zahl, initialisiert mit 0.0
    int operation = 0;  // Variable für die gewünschte Operation
    // Zeiger auf eine Funktion mit dem Name "operation_ptr" die zwei 
    // double-Werte als Parameter entgegennimmt und einen double-Wert zurückliefert
    double (*operation_ptr)(double, double);
    
    // Benutzer begrüßen und Hilfe anzeigen
    print_help();

    // Benutzer um Eingabe der Zahlen bitten
    printf("\tBitte geben Sie die erste Zahl ein: ");
    scanf("%lf", &a);
    printf("\tBitte geben Sie die zweite Zahl ein: ");
    scanf("%lf", &b);

    // Benutzer um die gewünschte Operation zu wählen bitten
    printf("\tBitte wählen Sie eine Operation (1: Addition, 2: Subtraktion, 3: Multiplikation, 4: Division): ");
    scanf("%d", &operation);

    // Zuweisung der Funktion an den Zeiger basierend auf der Auswahl der Operation
    switch (operation) {
        case 1: 
            operation_ptr = add;    // Zeiger auf die Funktion add
            break;
        case 2: 
            operation_ptr = subtract;  // Zeiger auf die Funktion subtract
            break;
        case 3: 
            operation_ptr = multiply;  // Zeiger auf die Funktion multiply
            break;
        case 4: 
            operation_ptr = divide;    // Zeiger auf die Funktion divide
            break;
        default: 
            printf("Ungültige Operation!\n"); 
            return 1;
    }

    // Ausgabe der Ergebnis der Operation
    // Hier wird die Funktion, auf die der Zeiger "operation_ptr" zeigt,
    // aufgerufen.
    printf("Ergebnis: %f\n", calculate(operation_ptr, a, b));

    return 0;
}

// ----- Funktionsimplementierungen -----

void print_help() {
    printf("-------- Taschenrechner --------\n");
    printf("Bitte geben Sie zwei Zahlen ein und wählen Sie anschließend eine Operation:\n");
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Fehler: Division durch 0 ist nicht möglich!\n");
        return 0;
    }
    return a / b;
}

double calculate(double (*operation_ptr)(double, double), double a, double b) {
    return (*operation_ptr)(a, b);
}
