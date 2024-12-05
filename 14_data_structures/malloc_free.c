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
 * File: malloc_free.c
 * Description: Programm zur Demonstration von dynamischer Speicherverwaltung, gerade im Umgang mit 
 *              malloc und free Funktionen.
 * Author: Dennis Grewe
 * Date: December 5th, 2024
 */

#include <stdio.h>
#include <stdlib.h>     // für malloc, free und rand
#include <time.h>       // für time

/**
 * Hauptprogramm
 */
int main() {

    // Zu Beginn unsers Programms ist die größe des Arrays nicht bekannt.
    // Dies wird erst zur Laufzeit durch den Benutzer festgelegt.
    // Daher können wir kein Array mit einer festen Größe deklarieren, 
    // da die Größe nicht von vornherein bekannt ist.
    // Stattdessen müssen wir ein Array deklarieren, dessen Größe zur Laufzeit festgelegt wird.
    // Dies erreichen wir mittels der malloc Funktion.
    int size; // Größe des Arrays

    // Benutzer zur Eingabe der Größe des Arrays auffordern
    printf("Geben Sie die Größe des Arrays ein: ");
    scanf("%d", &size);

    // Dynamische Zuweisung des Arrays
    // Wir benötigen Speicher um ein Array der Größe size, dynamisch zur Laufzeit 
    // zu erstellen. Zu Beachten ist, dass malloc einen void Pointer zurückgibt,
    // welchen wir mittels (int *) casten müssen um einen int Pointer zu erhalten.
    int *array = (int *)malloc(size * sizeof(int));
    
    // Überprüfen, ob die Zuweisung erfolgreich war
    // malloc gibt NULL zurück, falls die Speicherreservierung fehlschlägt.
    // Falls dies der Fall ist, geben wir eine Fehlermeldung aus und beenden das Programm,
    // da wir den benötigten Speicher nicht erhalten haben.
    if (array == NULL) {
        fprintf(stderr, "Speicherzuweisung fehlgeschlagen\n");
        return 1; // Fehlercode zurückgeben
    }

    // Initialisierung des Zufallszahlengenerators
    srand(time(NULL));

    // Füllen des Arrays mit zufälligen Werten zwischen 0 und 99
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100; // Zufallswert zwischen 0 und 99
    }

    // Ausgabe der Werte des Arrays
    printf("Zufällige Werte im Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Freigabe des dynamisch zugewiesenen Speichers
    free(array);

    return 0; // Erfolgreiche Ausführung
}
