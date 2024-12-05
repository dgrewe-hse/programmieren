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
 * File: sort_dyn_array.c
 * Description: Programm zur Demonstration von dynamischer Speicherverwaltung, gerade im Umgang mit 
 *              dynamischen Arrays. Hierbei wird ein dynamisches Array auf dem Heap erstellt und 
 *              anschließend sortiert. Statt malloc wird die Funktion realloc verwendet. Bevor das 
 *              Programm endet, wird der reservierte Speicher für das Array wieder freigegeben.
 * Author: Dennis Grewe
 * Date: December 5th, 2024
 */

#include <stdio.h>      // für printf
#include <stdlib.h>     // für malloc, free und qsort

/**
 * @brief Vergleicht zwei Zahlen für die qsort-Funktion.
 * 
 * @param a Pointer auf das erste Element.
 * @param b Pointer auf das zweite Element.
 * @return Negative Zahl, wenn a < b, positive Zahl, wenn a > b, 0 wenn a == b.
 */
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int *numbers = NULL; // Dynamisches Array
    int count = 0;       // Anzahl der eingegebenen Zahlen
    int input;           // Variable zur Zwischenspeicherung der Eingabe

    printf("Geben Sie so viele Zahlen ein, wie Sie möchten. "
           "Geben Sie -1 ein, um zu stoppen.\n");

    while (1) {
        printf("Zahl eingeben: ");
        scanf("%d", &input);

        if (input == -1) {
            break; // Beenden der Eingabe
        }

        // Speicher erweitern
        int *temp = realloc(numbers, (count + 1) * sizeof(int));
        if (temp == NULL) {
            printf("Fehler bei der Speicherallokation!\n");
            free(numbers); // Bisherigen Speicher freigeben
            return 1;
        }
        numbers = temp;

        // Zahl hinzufügen
        numbers[count] = input;
        count++;
    }

    // Sortieren der Zahlen
    if (count > 0) {
        qsort(numbers, count, sizeof(int), compare);

        printf("\nSortierte Zahlen:\n");
        for (int i = 0; i < count; i++) {
            printf("%d ", numbers[i]);
        }
        printf("\n");
    } else {
        printf("\nKeine Zahlen eingegeben.\n");
    }

    // Speicher freigeben
    free(numbers);
    printf("Speicher freigegeben. Programm beendet.\n");

    return 0;
}