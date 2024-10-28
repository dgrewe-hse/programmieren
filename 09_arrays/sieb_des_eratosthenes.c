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
 * File: sieb_des_eratosthenes.c
 * Description: Beispielprogramm zur Nutzung von Arrays in C unter Verwendung des Sieb des 
 *              Eratosthenes zur Bestimmung von Primzahlen.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>
#include <stdbool.h>

#define MAX_N 1000  // Maximale Obergrenze für Primzahlen

/*
 * Funktion: sieveOfEratosthenes
 * Beschreibung: Diese Funktion implementiert das Sieb des Eratosthenes zur Bestimmung von Primzahlen.
 * Parameter: n - Die Obergrenze für die Primzahlen.
 */
void sieveOfEratosthenes(int n) {
    // Array für die Markierung der Zahlen (true = Primzahl, false = keine Primzahl)
    bool isPrime[MAX_N + 1];
    
    // Initialisiere alle Zahlen als potenzielle Primzahlen
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }
    
    // 0 und 1 sind keine Primzahlen
    // Markiere diese Zahlen als keine Primzahlen im Sieb
    isPrime[0] = isPrime[1] = false;
    
    // Sieb-Algorithmus
    // Durchlaufe alle Zahlen von 2 bis zur Quadratwurzel von n
    for (int i = 2; i * i <= n; i++) {
        // Wenn die Zahl i eine Primzahl ist
        if (isPrime[i]) {
            // Markiere alle Vielfachen von i als keine Primzahlen
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    // Ausgabe der gefundenen Primzahlen
    printf("Primzahlen bis %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    
    // Benutzereingabe
    printf("Bis zu welcher Zahl sollen Primzahlen gefunden werden? (max %d): ", MAX_N);
    while (scanf("%d", &n) != 1 || n < 2 || n > MAX_N) {
        printf("Bitte geben Sie eine Zahl zwischen 2 und %d ein: ", MAX_N);
        while (getchar() != '\n');  // Buffer leeren
    }
    
    // Führe Sieb des Eratosthenes aus
    sieveOfEratosthenes(n);
    
    return 0;
}

