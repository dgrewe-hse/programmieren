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
 * File: search_linked_list.c
 * Description: Beispiel für die Suche eines bestimmten Wertes in einem Datenfeld einer einfachen verketteten Liste.
 * Author: Dennis Grewe
 * Date: December 11th, 2024
 */

#include <stdlib.h>

// Definition der Knotenstruktur
typedef struct Node {
    int data;               // Variable für Nutzdaten
    struct Node* next;      // Zeiger auf den nächsten Knoten
} Node;

int main() {
    // Deklaration der Variablen
    Node *jam = (Node *) malloc(sizeof(Node));
    Node *head = NULL;  // Pointer auf "leere Liste"

    // Zuweisen von Werte an Knoten "jam"
    jam->data = 3;
    jam->next = NULL;
    // listenkopf zeigt auf "jam", unsere Liste
    // hat nur einen Knoten aktuell
    head = jam;             

    // neuen Knoten "rolls" erzeugen und Werte zuweisen
    Node *rolls = (Node *) malloc(sizeof(Node));
    rolls->data = 10;
    rolls->next = jam;    // Pointer von "rolls" zeigt auf "jam"

    // Listenkopf aktualisieren und auf "rolls" zeigen lassen
    head = rolls;

    // angeforderter Speicher wieder freigeben
    free(jam);
    free(rolls);
    head = NULL;

    return 0;
}
