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
 * File: simple_linked_list_rear.c
 * Description: Beispiel für eine einfache verkettete Liste mit einem Rückwärtszeiger.
 * Author: Dennis Grewe
 * Date: December 11th, 2024
 */

#include <stdio.h>
#include <stdlib.h>

// Definition der Knotenstruktur
struct Node {
    int data;
    struct Node* next;
};

/**
 * Funktion zum Erstellen eines neuen Knotens
 * @param data: Datenfeld des neuen Knotens
 * @return: Zeiger auf den neuen Knoten
 */
struct Node* createNode(int data) {
    // Speicher für den neuen Knoten reservieren    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    // Datenfeld setzen
    newNode->data = data;
    // Zeiger auf den nächsten Knoten setzen
    newNode->next = NULL;
    // Zeiger auf den neuen Knoten zurückgeben
    return newNode;
}   

/**
 * Funktion zum Einfügen eines neuen Knotens am Ende der Liste
 * @param head: Zeiger auf den Anfang der Liste
 * @param data: Datenfeld des neuen Knotens
 */
void insertAtEnd(struct Node** head, int data) { 
    // Neuen Knoten erstellen
    struct Node* newNode = createNode(data);
    // Überprüfen, ob die Liste leer ist
    if (*head == NULL) {
        *head = newNode; // Wenn leer, neuen Knoten als Kopf setzen
    } else {
        // Ansonsten, zum letzten Knoten navigieren und den neuen Knoten anfügen
        struct Node* lastNode = *head;
        while (lastNode->next != NULL) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode; // Neuen Knoten am Ende anfügen
    }
}

/**
 * Funktion zum Ausgeben der Liste
 * @param head: Zeiger auf den Anfang der Liste
 */
void printList(struct Node* head) {
    // Zeiger auf den Anfang der Liste setzen
    struct Node* current = head;
    // Solange der Zeiger nicht NULL ist, durchlaufen wir die Liste
    // Zeiger ist dann NULL, wenn wir am Ende der Liste angekommen sind
    while (current != NULL) {
        // Ausgabe des Datenfeldes
        printf("%d -> ", current->data);
        // Zeiger auf den nächsten Knoten setzen
        current = current->next;
    }
    // Ausgabe des Endes der Liste
    printf("NULL\n");
}

// Funktion zum Freigeben der Liste
void free_list(struct Node* head) {
    // Zeiger auf den Anfang der Liste setzen
    struct Node* current = head;
    // Zeiger auf den nächsten Knoten setzen
    struct Node* next;
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

/**
 * Hauptfunktion
 * @return: 0
 */
int main() {
    // Zeiger auf den Anfang der Liste setzen
    struct Node* head = NULL;

    // Knoten am Ende der Liste einfügen
    insertAtEnd(&head, 10);  // übergabe der Adresse von head und des Wertes 10
    insertAtEnd(&head, 20);  // übergabe der Adresse von head und des Wertes 20
    insertAtEnd(&head, 30);  // übergabe der Adresse von head und des Wertes 30

    // Liste ausgeben
    printList(head);

    // Freigeben der Liste
    free_list(head);

    return 0;
}

