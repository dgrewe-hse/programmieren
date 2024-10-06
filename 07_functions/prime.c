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
 * File: prime.c
 * Description: Beispielprogramm zur Überprüfung einer gegebenen Zahl auf Primzahl.
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
#include <stdio.h>
#include <stdbool.h>    // um "bool" Datentyp zu nutzen

/**
 * Funktion: isPrime
 * -----------------
 * Überprüft, ob eine gegebene Zahl eine Primzahl ist.
 *
 * Parameter:
 *  number - Die zu prüfende ganze Zahl.
 *
 * Rückgabewert:
 *  `true`, wenn die Zahl eine Primzahl ist, andernfalls `false`.
 *
 * Beschreibung:
 *  Diese Funktion prüft, ob eine gegebene Zahl eine Primzahl ist.
 *  Eine Primzahl ist eine Zahl, die nur durch 1 und sich selbst teilbar ist.
 *  Zunächst werden Zahlen kleiner als 2 ausgeschlossen, da diese per Definition
 *  keine Primzahlen sind. Die Zahl 2 wird explizit als Primzahl erkannt.
 *  Anschließend wird durch eine Schleife überprüft, ob die Zahl durch einen 
 *  Wert im Bereich von 2 bis zur Hälfte der Zahl teilbar ist. Falls ein Teiler
 *  gefunden wird, wird `false` zurückgegeben, ansonsten `true`.
 *
 * Beispiel:
 *  int zahl = 11;
 *  bool ergebnis = isPrime(zahl); // ergebnis wird true sein, da 11 eine Primzahl ist
 */
bool isPrime(int number) {
    // Zahlen kleiner als 2 sind keine Primzahlen
    if (number < 2) {
        return false;
    }

    // explizite Behandlung für die Zahl 2
    if (number == 2) {
        return true;
    }

    // Schleife zur Prüfung von Teilern
    for (int divisor = 2; divisor <= number / 2; divisor++) {
        if (number % divisor == 0) {
            // wenn wahr, dann ist "number" keine Primzahl
            return false;
        }
    }

    return true;    // Zahl ist Primzahl
}

/**
 * Funktion: printPrimeNumbers
 * ---------------------------
 * Gibt eine bestimmte Anzahl an Primzahlen auf der Konsole aus, mit einer 
 * festgelegten Anzahl an Primzahlen pro Zeile.
 *
 * Parameter:
 *  numbersToTest - Die Anzahl der zu testenden und auszugebenden Primzahlen.
 *
 * Beschreibung:
 * Diese Funktion gibt die erste Anzahl von Primzahlen, die durch den Parameter 
 * `numbersToTest` angegeben ist, auf der Konsole aus. Die Ausgabe erfolgt in einer 
 * strukturierten Form, wobei maximal 10 Primzahlen pro Zeile angezeigt werden.
 *  
 * Die Funktion verwendet die `isPrime`-Funktion, um zu prüfen, ob eine Zahl eine 
 * Primzahl ist. Für jede gefundene Primzahl wird die Zählvariable `count` erhöht, 
 * und die Zahl wird auf der Konsole ausgegeben. Nach jeder 10. Primzahl erfolgt 
 * ein Zeilenumbruch.
 *
 * Beispiel:
 *  printPrimeNumbers(25);
 *  // Gibt die ersten 25 Primzahlen aus, wobei pro Zeile 10 Primzahlen angezeigt werden.
 */
void printPrimeNumbers(int numbersToTest) {
    // Variable der max Anzahl an Primzahlen pro Zeile
    const int NUMBER_OF_PRIMES_PER_LINE = 10;
    int count = 0;      // Zählvariable für gefundene Primzahlen
    int number = 2;     // Startzahl für Test

    // Schleife, welche die max. Anzahl an gefundenen 
    // Primzahlen pro Zeile auf der Konsole ausgibt
    while (count < numbersToTest) {
        // Aufruf der isPrime Funktion für Test
        if (isPrime(number)) {
            // true, wenn eine Primzahl gefunden wurde
            // erhöhe Zählvariable
            count++;
            // prüfe ob Zeilenende erreicht wurde
            // falls ja, Zahl ausgeben und Zeilenumbruch hinzufügen
            if (count % NUMBER_OF_PRIMES_PER_LINE == 0) {
                printf("\t%d\n", number);
            }
            // sonst, Zahl auf Konsole ausgeben
            else {
                printf("\t%d", number);
            }
        }
        // Zahl für nächste Prüfung erhöhen
        number++;
    }
}

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration aller benötigter Variablen
    int max_primes;

    // Benutzeraufforderung zur Eingabe von max Primzahlen
    printf("Wieviele Primzahlen wollen Sie ausgeben: ");
    scanf("%d", &max_primes);

    // Aufruf der Ausgabe/Print Funktion
    printPrimeNumbers(max_primes);

    return 0;
}