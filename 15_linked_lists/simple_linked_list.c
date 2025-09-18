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
 * File: simple_linked_list.c
 * Description: Beispiel für eine einfache verkettete Liste.
 * Author: Dennis Grewe
 * Date: December 11th, 2024
 */

#include <stdio.h>
#include <stdlib.h>

// Definition der Knotenstruktur für 
// eine einfach verketteten Liste
typedef struct Node {
    int data;               // Variable für Nutzdaten
    struct Node* next;      // Zeiger auf den nächsten Knoten
} Node;

// Definition der Funktionsprototypen
Node* create_node(int data);
void insert_at_beginning(Node** head, int data);
void display(Node* head);
void free_list(Node* head);

/**
 * Hauptprogramm zur Demonstration der einfachen verketteten Liste
 */
int main() {
    // Initialisierung der Liste
    Node* head = NULL;  // head zeigt auf den Anfang der Liste, ist NULL, wenn die Liste leer ist

    // Einfügen von Knoten am Anfang der Liste
    insert_at_beginning(&head, 10);   // übergabe der Adresse von head und des Wertes 10
    insert_at_beginning(&head, 20);   // übergabe der Adresse von head und des Wertes 20
    insert_at_beginning(&head, 30);   // übergabe der Adresse von head und des Wertes 30

    // Ausgabe der Liste
    display(head);

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
    
    return newNode;
}

// Funktion zum Einfügen eines neuen Knotens am Anfang der Liste
void insert_at_beginning(Node** head, int data) { 
    // Neuen Knoten erstellen
    Node* newNode = create_node(data);
    // Zeiger auf den nächsten Knoten setzen
    newNode->next = *head;
    // Zeiger auf den neuen Knoten setzen
    *head = newNode;
}

// Funktion zum Ausgeben der Liste
void display(Node* head) {
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
