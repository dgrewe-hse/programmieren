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
 * File: multi-pointer-ext.c
 * Description: Beispielprogramm zur Nutzung von Mehrfach-Pointern in C und dem Umgang mit Pointern in Funktionen
 * Author: Dennis Grewe
 * Date: January 10th, 2025
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Beispielfunktion mit einfachem Pointer
 * Ein einfacher Pointer wird verwendet, wenn wir:
 * - Nur den Wert an der Speicheradresse ändern wollen
 * - Keine Änderung der Speicheradresse selbst benötigen
 */
void aendere_wert(int* ptr) {
    // Ändert den Wert, auf den der Pointer zeigt
    *ptr = 42;
    
    // Lokale Änderung des Pointers hat keine Auswirkung außerhalb
    ptr = NULL;  // Diese Änderung ist nur lokal sichtbar
}

/**
 * @brief Beispielfunktion mit doppeltem Pointer
 * Ein doppelter Pointer wird verwendet, wenn wir:
 * - Die Speicheradresse selbst ändern wollen
 * - Dynamische Speicherzuweisung durchführen
 * - Mit verketteten Datenstrukturen arbeiten
 */
void aendere_pointer(int** ptr) {
    // Allokiert neuen Speicher auf dem Heap
    *ptr = (int*) malloc(sizeof(int));  
    
    // Setzt den Wert an der neuen Speicheradresse
    **ptr = 100;
}

int main() {
    // Beispiel 1: Einfacher Pointer
    printf("\n--- Beispiel 1: Einfacher Pointer ---\n");
    int zahl = 10;       // Variable wird deklariert und initialisiert
    int* ptr1 = &zahl;   // Pointer wird deklariert und initialisiert, zeigt auf die Adresse von zahl
    
    printf("Vor Funktionsaufruf:\n");
    // Wert von zahl wird ausgegeben
    printf("Wert von zahl: %d\n", zahl);    
    // Adresse, auf die ptr1 zeigt, wird ausgegeben
    printf("Pointer zeigt auf Adresse: %p\n", (void*)ptr1); 
    
    // Funktion wird aufgerufen, die den Wert von zahl mittels Pointer ändert
    // Beachte: Aufruf erfolgt mit Call-by-Value, d.h. der Wert von ptr1 wird kopiert und an die Funktion übergeben.
    aendere_wert(ptr1); 
    
    printf("\nNach Funktionsaufruf:\n");
    // Wert von zahl wird ausgegeben
    printf("Wert von zahl: %d\n", zahl);    
    // Adresse, auf die ptr1 zeigt, wird ausgegeben
    // Da die lokale Pointervariable der Funktion "aendere_wert" auf NULL gesetzt wurde, 
    // zeigt ptr1 der Main-Funktion weiterhin auf die Adresse von zahl.
    printf("Pointer zeigt auf Adresse: %p\n", (void*)ptr1);
    
    // Beispiel 2: Doppelter Pointer
    printf("\n--- Beispiel 2: Doppelter Pointer ---\n");
    int* ptr2 = NULL;   // Deklaration und Initialisierung eines neuen Pointers
    
    printf("Vor Funktionsaufruf:\n");
    // Adresse, auf die ptr2 zeigt, wird ausgegeben
    // Da ptr2 noch nicht initialisiert wurde, zeigt er auf NULL
    printf("Pointer ist: %p\n", (void*)ptr2);
    
    // Funktion wird aufgerufen, die den Wert von ptr2 mittels Pointer ändert
    // Beachte: Aufruf erfolgt mit Call-by-Reference, d.h. der Pointer selbst wird übergeben.
    aendere_pointer(&ptr2);
    
    printf("\nNach Funktionsaufruf:\n");
    // Adresse, auf die ptr2 zeigt, wird ausgegeben
    printf("Pointer ist: %p\n", (void*)ptr2);
    // Wert an der Adresse, auf die ptr2 zeigt, wird ausgegeben
    printf("Wert an Pointeradresse: %d\n", *ptr2);
    
    // Speicher freigeben
    free(ptr2);
    
    return 0;
}
