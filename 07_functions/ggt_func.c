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
 * File: ggt_func.c
 * Description: Beispielprogramm zur Berechnung des Größten-Gemeinsamen Teilers (ggT).
 *              In diesem Beispiel wird die Berechnung in eine ggt-Funktion ausgelagert.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
#include <stdio.h>

/**
 * Funktion: gcd
 * -------------
 * Berechnet den größten gemeinsamen Teiler (ggT) von zwei ganzen Zahlen.
 *
 * Parameter:
 *  number1 - Die erste ganze Zahl.
 *  number2 - Die zweite ganze Zahl.
 *
 * Rückgabewert:
 *  Der größte gemeinsame Teiler (ggT) der beiden Zahlen.
 *
 * Beschreibung:
 *  Diese Funktion verwendet eine while-Schleife, um den ggT zu berechnen.
 *  Sie beginnt bei 2 und prüft alle Zahlen bis zur kleineren der beiden
 *  gegebenen Zahlen, ob sie beide teilt. Der höchste Teiler wird als ggT
 *  zurückgegeben.
 *
 * Beispiel:
 *  int a = 12;
 *  int b = 18;
 *  int ergebnis = gcd(a, b); // ergebnis wird 6 sein
 */
int gcd(const int number1, const int number2) {
    // Deklaration aller benötigter Variablen
    int gcd = 1;       // initialer ggT ist 1
    int k = 2;         // kleinster möglicher ggT

    // Berechnung des ggT mittels while-Schleife
    // Weitere Durchläufe sofern Zählvariable "k"
    // kleiner als die beiden gegebenen Zahlen ist.
    while (k <= number1 && k <= number2) {
        // merken von k als ggT, wenn k durch beide
        // Zahlen dividierbar mit Rest "0" ist
        if (number1 % k == 0 && number2 % k == 0)
            gcd = k;
        k++;    // Zählvariable erhöhen
    }
    
    // Rückgabe des Ergebnis an aufrufende Funktion
    return gcd; 
}

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration aller benötigter Variablen
    int num1, num2;

    // Benutzeraufforderung zur Eingabe von a und b
    printf("Bitte geben Sie eine Ganzzahl für 'Zahl1' an: ");
    scanf("%d", &num1);
    printf("Bitte geben Sie eine Ganzzahl für 'Zahl2' an: ");
    scanf("%d", &num2);

    // Berechnung des ggT in Ausgelagerter Funktion
    // Funktionsaufruf in main und Speichern des Ergebnis
    // in neuer Variable
    int gcd_result = gcd(num1, num2);

    // Ausgabe des Ergebnisses auf Konsole
    printf("Der größte gemeinsame Teiler lautet: %d", gcd_result);

    return 0;
}