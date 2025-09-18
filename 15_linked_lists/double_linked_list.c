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
 * File: double_linked_list.c
 * Description: Beispiel für eine doppelt verkettete Liste.
 * Author: Dennis Grewe
 * Date: December 11th, 2024
 */

#include <stdio.h>
#include <stdlib.h>

// Definition der Knotenstruktur
typedef struct Node {
    int data;               // Datenfeld
    struct Node* next;      // Zeiger auf den nächsten Knoten
    struct Node* prev;      // Zeiger auf den vorherigen Knoten
} Node;

// Funktionsprototypen
Node* create_node(int data);                            // Funktion zum Erstellen eines neuen Knotens
Node* insert_at_beginning(Node** head, int data);       // Funktion zum Einfügen eines neuen Knotens am Anfang der Liste
Node* insert_at_end(Node** head, int data);             // Funktion zum Einfügen eines neuen Knotens am Ende der Liste
void print_double_linked_list_from_head(Node* head);   // Funktion zum Ausgeben der Liste von head
void delete_node(Node** head, int data);                // Funktion zum Löschen eines bestimmten Knotens aus der Liste
void free_list(Node* head);                             // Funktion zum Freigeben der Liste

/**
 * Hauptprogramm zur Demonstration der doppelt verketteten Liste
 */
int main() {
    // Initialisierung der Liste
    Node* head = NULL;  // head zeigt auf den Anfang der Liste, ist NULL, wenn die Liste leer ist

    // Einfügen von Knoten am Anfang der Liste
    head = insert_at_beginning(&head, 10);   // übergabe der Adresse von head und des Wertes 10
    head = insert_at_beginning(&head, 30);   // übergabe der Adresse von head und des Wertes 30
    insert_at_end(&head, 20);        // übergabe der Adresse von head und des Wertes 20

    // Ausgabe der Liste von head
    print_double_linked_list_from_head(head);

    // Löschen eines Knotens
    delete_node(&head, 10);

    // Ausgabe der Liste von head
    print_double_linked_list_from_head(head);

    // Freigeben der Liste
    free_list(head);

    return 0;
}

// Funktion zum Erstellen eines neuen Knotens
Node* create_node(int data) {
    // Speicher für den neuen Knoten reservieren
    Node* newNode = (Node*)malloc(sizeof(Node));
    // Datenfeld setzen
    newNode->data = data;
    // Zeiger auf den nächsten Knoten setzen
    newNode->next = NULL;
    // Zeiger auf den vorherigen Knoten setzen
    newNode->prev = NULL;
    // Zeiger auf den neuen Knoten zurückgeben
    return newNode;
}

// Funktion zum Einfügen eines neuen Knotens am Anfang der Liste
Node* insert_at_beginning(Node** head, int data) { 
    // Neuen Knoten erstellen
    Node* newNode = create_node(data);
    // Zeiger auf den nächsten Knoten setzen
    newNode->next = *head;
    // Zeiger auf den vorherigen Knoten setzen
    newNode->prev = NULL;
    // Zeiger von letztem Knoten auf neuen Knoten setzen
    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    // Zeiger auf den neuen Knoten setzen
    *head = newNode;
    // Zeiger auf den neuen Knoten zurückgeben
    return newNode;
}

Node* insert_at_end(Node** head, int data) {
    // Neuen Knoten erstellen
    Node* newNode = create_node(data);

    // an das Ende der Liste anhängen
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    // Zeiger von letztem Knoten auf neuen Knoten setzen
    current->next = newNode;
    // Zeiger von neuen Knoten auf letzten Knoten setzen
    newNode->prev = current;
    // Zeiger auf den neuen Knoten zurückgeben
    return newNode;
}

// Funktion zum Ausgeben der Liste von head
void print_double_linked_list_from_head(Node* head) {
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

// Funktion zum Ausgeben der Liste
Node* print_double_linked_list_from_tail(Node* tail) {
    // Zeiger auf den Anfang der Liste setzen
    Node* current = tail;
    Node* head = NULL;
    // Solange der Zeiger nicht NULL ist, durchlaufen wir die Liste
    // Zeiger ist dann NULL, wenn wir am Ende der Liste angekommen sind
    while (current != NULL) {
        // Ausgabe des Datenfeldes des aktuellen Knotens
        printf("%d -> ", current->data);
        if (current->prev == NULL) {
            head = current;
        }
        // Zeiger auf den vorherigen Knoten setzen
        current = current->prev;
    }
    // Ausgabe des Endes der Liste
    printf("NULL\n");
    // Zeiger auf den Anfang der Liste zurückgeben
    return head;
}

// Funktion zum Freigeben der Liste
void free_list(Node* head) {
    // Zeiger auf den Anfang der Liste setzen
    Node* current = head;
    // Zeiger auf den nächsten Knoten setzen
    Node* next;
    // Solange der Zeiger nicht NULL ist, durchlaufen wir die Liste
    // Zeiger ist dann NULL, wenn wir am Ende der Liste angekommen sind
    while (current != NULL) {
        // Zeiger auf den nächsten Knoten setzen
        next = current->next;
        // Speicher freigeben
        free(current);
        // Zeiger auf den nächsten Knoten setzen
        current = next;
    }
}


// Funktion zum Löschen eines bestimmten Knotens aus der Liste
void delete_node(Node** head, int data) {
    // Prüfen ob Liste leer ist
    if (*head == NULL) {
        return;
    }

    // Zeiger auf den Anfang der Liste setzen
    Node* current = *head;

    // Liste durchlaufen bis Element gefunden oder Ende erreicht
    while (current != NULL && current->data != data) {
        // Zeiger auf den nächsten Knoten setzen
        // solange der Zeiger nicht NULL ist und der Wert des aktuellen Knotens nicht gleich dem gesuchten Wert ist
        current = current->next;
    }

    // Element nicht gefunden
    if (current == NULL) {
        printf("Element nicht gefunden\n");
        return;
    }

    // Fall 1: Element ist Head
    if (current == *head) {
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
    }
    // Fall 2: Element ist nicht Head
    else {
        printf("Element ist nicht Head: %d\n", current->next->data);
        // Zeiger auf den nächsten Knoten setzen
        current->prev->next = current->next;
        // Zeiger auf den vorherigen Knoten setzen
        if (current->next != NULL) {
            current->next->prev = current->prev;
        }
    }

    // Speicher freigeben
    free(current);
}
