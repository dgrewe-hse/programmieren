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
 * File: reverse_pointer_malloc.c
 * Description: Programm zur Demonstration von dynamischer Speicherverwaltung, gerade im Umgang mit 
 *              Pointern und Arrays als Rückgabewert einer Funktion. Hierbei wird nun mittels malloc
 *              ein dynamisches Array auf dem Heap erstellt und anschließend wieder freigegeben.
 * Author: Dennis Grewe
 * Date: December 5th, 2024
 */

#include <stdio.h>
#include <stdlib.h>     // für malloc und free

// Prototyp-Deklaration der Funktion reverse
int *reverse(int *list, int size);
void print_array(int *list, int size);

/**
 * Hauptprogramm
 */
int main() {
    // Deklaration eines Arrays mit 6 Elementen
    int list[6] = {11, 12, 13, 14, 15, 16};

    // Ausgabe der Werte des Arrays vor der Rückgabe
    printf("Values before reverse:\n");
    print_array(list, 6);
    printf("\n");

    // Aufruf der Funktion reverse
    int *reversed_list = reverse(list, 6);

    // Ausgabe der Werte des Arrays nach der Rückgabe
    printf("Values after reverse:\n");
    print_array(reversed_list, 6);
    printf("\n");

    // Wir müssen den dynamisch erstellten Speicher wieder freigeben
    // Dies ist wichtig um ungenutzten Speicher wieder freizugeben
    // und um Speicherlecks zu vermeiden
    // Dies erledigen wir mittels der free Funktion
    free(reversed_list);

    return 0;
}

/**
 * Funktion zur Rückgabe des umgekehrten Arrays
 */
int *reverse(int *list, int size) {
    // Deklaration eines temporären Arrays
    
    // Erstellung erfolgt nun auf dem Heap mittels malloc Funktion
    // wir benötigen Speicher um ein Array der Größe size zu erstellen
    // Wir erhalten von malloc einen void Pointer, welchen wir mittels (int *) casten
    int *result = (int *)malloc(size * sizeof(int));

    // Falls malloc nicht genug Speicher reservieren kann, wird NULL zurückgegeben
    // Wir müssen also eine Überprüfung durchführen bevor wir mit der Arbeit beginnen
    if (result == NULL) {
        printf("Fehler: malloc Aufruf fehlgeschlagen!\n");
        // Wir beenden das Programm mit einem Exit Code von 1
        exit(1);
    }

    // kopieren der Werte des Arrays in das result Array
    // in umgekehrter Reihenfolge
    for (int i = 0; i < size; i++) {
        result[i] = list[size - i - 1];
    }

    // Rückgabe des umgekehrten Arrays
    return result;
}

/**
 * Funktion zur Ausgabe der Werte des Arrays
 */
void print_array(int *list, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
}
