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
 * File: simple_double_linked_list_func.c
 * Description: Beispielprogramm zur Implementierung einer einfachen doppelt verketteten Liste mit Hilfe von Funktionen.
 *              Das Programm zeigt, wie man einen Knoten aus einer verketteten Liste sauber löscht und
 *              warum dazu ein Mehrfachpointer verwendet werden muss und ein einfach Poitner nicht aussreicht. 
 * Author: Dennis Grewe
 * Date: January 10th, 2025
 */
#include <stdio.h>
#include <stdlib.h>

/* Struktur für einen Knoten in der doppelt verketteten Liste */
typedef struct Node {
    int data;               // Datenfeld
    struct Node* next;      // Zeiger auf nächsten Knoten
    struct Node* prev;      // Zeiger auf vorherigen Knoten
} Node;

/* Funktionsprototypen */
Node* create_node(int data);                    // Erstellt einen neuen Knoten
Node* append_node(Node* head, int data);        // Fügt einen Knoten am Ende ein
void print_list_forward(Node* head);            // Gibt Liste vorwärts aus
void print_list_backward(Node* head);           // Gibt Liste rückwärts aus
void delete_node(Node** head, int data);        // Löscht einen Knoten mit bestimmtem Wert
void free_list(Node* head);                     // Gibt die gesamte Liste frei

/**
 * @brief Erstellt einen neuen Knoten mit gegebenem Wert
 * @param data Der Wert, der im Knoten gespeichert werden soll
 * @return Pointer auf den neuen Knoten oder NULL bei Fehler
 */
Node* create_node(int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Fehler bei Speicherallokation!\n");
        return NULL;
    }
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

/**
 * @brief Fügt einen neuen Knoten am Ende der Liste ein
 * @param head Pointer auf den Anfang der Liste
 * @param data Der einzufügende Wert
 * @return Pointer auf den Anfang der Liste
 */
Node* append_node(Node* head, int data) {
    Node* new_node = create_node(data);
    
    // Falls Liste leer ist
    if (head == NULL) {
        return new_node;
    }
    
    // Zum Ende der Liste navigieren
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    
    // Neuen Knoten anhängen
    current->next = new_node;
    new_node->prev = current;
    
    return head;
}

/**
 * @brief Gibt die Liste vorwärts aus
 * @param head Pointer auf den Anfang der Liste
 */
void print_list_forward(Node* head) {
    printf("Vorwärts: ");
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

/**
 * @brief Gibt die Liste rückwärts aus
 * @param head Pointer auf den Anfang der Liste
 */
void print_list_backward(Node* head) {
    printf("Rückwärts: ");
    if (head == NULL) {
        printf("NULL\n");
        return;
    }
    
    // Zum Ende der Liste navigieren
    Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    
    // Rückwärts ausgeben
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->prev;
    }
    printf("NULL\n");
}

/**
 * @brief Löscht einen Knoten mit bestimmtem Wert
 * @param head Pointer auf Pointer auf den Anfang der Liste
 * @param data Der zu löschende Wert
 */
void delete_node(Node** head, int data) {
    if (*head == NULL) return;
    
    Node* current = *head;
    
    // Suche den zu löschenden Knoten
    while (current != NULL && current->data != data) {
        current = current->next;
    }
    
    // Knoten nicht gefunden
    if (current == NULL) {
        printf("Wert %d nicht gefunden!\n", data);
        return;
    }
    
    // Fall 1: Erster Knoten
    if (current == *head) {
        *head = current->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
    }
    // Fall 2: Mittlerer oder letzter Knoten
    else {
        current->prev->next = current->next;
        if (current->next != NULL) {
            current->next->prev = current->prev;
        }
    }
    
    free(current);
}

/**
 * @brief Gibt den gesamten Speicher der Liste frei
 * @param head Pointer auf den Anfang der Liste
 */
void free_list(Node* head) {
    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    Node* head = NULL;
    
    // Liste erstellen
    head = append_node(head, 10);
    head = append_node(head, 20);
    head = append_node(head, 30);
    
    // Liste ausgeben
    printf("\nUrsprüngliche Liste:\n");
    print_list_forward(head);
    print_list_backward(head);
    
    // Knoten löschen
    printf("\nLösche Knoten mit Wert 20...\n");
    delete_node(&head, 20);
    
    // Aktualisierte Liste ausgeben
    printf("\nListe nach dem Löschen:\n");
    print_list_forward(head);
    print_list_backward(head);
    
    // Speicher freigeben
    printf("\nGebe Speicher frei...\n");
    free_list(head);
    
    printf("Programm beendet\n");
    return 0;
}