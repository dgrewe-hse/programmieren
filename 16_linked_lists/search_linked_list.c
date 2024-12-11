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


#include <stdio.h>
#include <stdlib.h>

// Definition der Knotenstruktur
typedef struct Node {
    int data;               // Datenfeld
    struct Node* next;      // Zeiger auf den nächsten Knoten
} Node;

// Funktion zum Erstellen eines neuen Knotens
Node* createNode(int data) {
    // Speicher für den neuen Knoten reservieren
    Node* newNode = (Node*)malloc(sizeof(Node));
    // Datenfeld setzen
    newNode->data = data;
    // Zeiger auf den nächsten Knoten setzen
    newNode->next = NULL;
    
    return newNode;
}

// Funktion zum Einfügen eines neuen Knotens am Anfang der Liste
void insertAtBeginning(Node** head, int data) { 
    // Neuen Knoten erstellen
    Node* newNode = createNode(data);
    // Zeiger auf den nächsten Knoten setzen
    newNode->next = *head;
    // Zeiger auf den neuen Knoten setzen
    *head = newNode;
}

// Funktion zum Ausgeben der Liste
void printList(Node* head) {
    // Zeiger auf den Anfang der Liste setzen
    Node* current = head;
    // Solange der Zeiger nicht NULL ist, durchlaufen wir die Liste
    // Zeiger ist dann NULL, wenn wir am Ende der Liste angekommen sind
    while (current != NULL) {
        // Ausgabe des Datenfeldes des aktuellen Knotens
        printf("%d -> ", current->data);
        // Zeiger auf den nächsten Knoten setzen
        current = current->next;
    }
    // Ausgabe des Endes der Liste
    printf("NULL\n");
}

/**
 * Funktion zur Suche eines bestimmten Wertes in einem Datenfeld einer einfachen verketteten Liste
 * @param head: Zeiger auf den Anfang der Liste
 * @param value: Wert, der gesucht werden soll
 * @return: Zeiger auf den Knoten, der den gesuchten Wert enthält, oder NULL, wenn der Wert nicht gefunden wurde
 */
Node* search_linked_list(Node* head, int value) {
    // Zeiger auf den Anfang der Liste setzen   
    Node* current = head;
    // Solange der Zeiger nicht NULL ist, durchlaufen wir die Liste
    // Zeiger ist dann NULL, wenn wir am Ende der Liste angekommen sind
    while (current != NULL) {
        // Wenn der Wert gefunden wurde, geben wir den Zeiger auf den Knoten zurück
        if (current->data == value) {
            return current;
        }
        // Zeiger auf den nächsten Knoten setzen
        current = current->next;
    }
    // Wenn der Wert nicht gefunden wurde, geben wir NULL zurück
    return NULL;
}

/**
 * Hauptprogramm zur Demonstration der einfachen verketteten Liste
 */
int main() {
    // Initialisierung der Liste
    Node* head = NULL;  // head zeigt auf den Anfang der Liste, ist NULL, wenn die Liste leer ist

    // Einfügen von Knoten am Anfang der Liste
    insertAtBeginning(&head, 10);   // übergabe der Adresse von head und des Wertes 10
    insertAtBeginning(&head, 20);   // übergabe der Adresse von head und des Wertes 20
    insertAtBeginning(&head, 30);   // übergabe der Adresse von head und des Wertes 30

    // Suche nach einem bestimmten Wert in der Liste
    // hier nach dem Wert 20 suchen, sollte den 2. Knoten zurückgeben
    Node* result = search_linked_list(head, 20);
    // Wenn der Wert gefunden wurde, geben wir den Wert aus
    if (result != NULL) {
        printf("Wert gefunden: %d\n", result->data);
    } else {
        printf("Wert nicht gefunden\n");
    }

    // Ausgabe der Liste
    printList(head);

    return 0;
}