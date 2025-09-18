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
 * File: priority_queue.c
 * Description: Beispiel für eine Prioritätswarteschlange mit einer einfachen verketteten Liste.
 * Author: Dennis Grewe
 * Date: December 13th, 2024
 */

#include <stdio.h>
#include <stdlib.h>

// Definition der Knotenstruktur
typedef struct Node {
    int priority;           // Priorität des Knotens
    int data;               // Datenfeld
    struct Node* next;      // Zeiger auf den nächsten Knoten
} Node;

// Definition der Funktionsprototypen
Node* create_node(int priority, int data);             // Erstellt einen neuen Knoten
void enqueue(Node** head, int priority, int data);     // Fügt einen neuen Knoten in die Warteschlange ein
void dequeue(Node** head);                             // Entfernt den Knoten mit der höchsten Priorität
void display(Node* head);                              // Gibt die Warteschlange aus
void free_list(Node* head);                            // Freigeben der gesamten Warteschlange

// Hauptfunktion
int main() {
    // Initialisierung der Warteschlange
    Node* head = NULL;
    // Einfügen der Knoten in die Warteschlange
    enqueue(&head, 1, 10);
    enqueue(&head, 2, 20);
    enqueue(&head, 3, 30);

    // Ausgabe der Warteschlange
    display(head);

    // Entfernen des Knotens mit der höchsten Priorität
    dequeue(&head);

    // Ausgabe der Warteschlange
    display(head);

    // Freigeben der Warteschlange
    free_list(head);

    return 0;
}

// Erstellt einen neuen Knoten
Node* create_node(int priority, int data) {
    // Speicher für den neuen Knoten reservieren
    Node* newNode = (Node*)malloc(sizeof(Node));
    // Priorität setzen
    newNode->priority = priority;
    // Datenfeld setzen
    newNode->data = data;
    // Zeiger auf den nächsten Knoten setzen
    newNode->next = NULL;
    // Rückgabe des neuen Knotens
    return newNode;
}

// Fügt einen neuen Knoten in die Warteschlange ein
void enqueue(Node** head, int priority, int data) {
    // Neuen Knoten erstellen
    Node* newNode = create_node(priority, data);

    // Wenn die Warteschlange leer ist, setze den neuen Knoten als Kopf
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    else {
        // Wenn die Warteschlange nicht leer ist, füge den neuen Knoten an der richtigen Stelle ein
        Node* current = *head;
        // Solange der nächste Knoten nicht NULL ist und die Priorität des nächsten Knotens 
        // kleiner ist als die Priorität des neuen Knotens, gehe zum nächsten Knoten
        while (current->next != NULL && current->next->priority < priority) {
            current = current->next;
        }
        // Merke vorherigen nächsten Knoten um rest der Liste zu erhalten
        newNode->next = current->next;
        // setze neuen Knoten als nächsten Knoten des aktuellen Knotens
        current->next = newNode;
    }
}

// Entfernt den Knoten mit der höchsten Priorität
void dequeue(Node** head) {
    // Wenn die Warteschlange leer ist, gib eine Fehlermeldung aus
    if (*head == NULL) {
        printf("Die Warteschlange ist leer.\n");
        return;
    }
    // Entferne den Kopf der Warteschlange
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Gibt die Warteschlange aus
void display(Node* head) {
    // Zeiger auf den Anfang der Warteschlange setzen
    Node* current = head;
    // Solange der Zeiger nicht NULL ist, durchlaufen wir die Warteschlange
    while (current != NULL) {
        // Ausgabe der Priorität und des Datenfeldes
        printf("Priority: %d, Data: %d\n", current->priority, current->data);
        // Zeiger auf den nächsten Knoten setzen
        current = current->next;
    }
    // Ausgabe des Endes der Warteschlange
    printf("NULL\n");
}

// Freigeben der gesamten Warteschlange
void free_list(Node* head) {
    // Zeiger auf den Anfang der Warteschlange setzen
    Node* current = head;
    // Zeiger auf den nächsten Knoten setzen
    Node* next;
    // Solange der Zeiger nicht NULL ist, durchlaufen wir die Warteschlange
    while (current != NULL) {
        // Zeiger auf den nächsten Knoten setzen
        next = current->next;
        // Speicher freigeben
        free(current);
        // Zeiger auf den nächsten Knoten setzen
        current = next;
    }
}
