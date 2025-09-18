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
 * File: simple_double_linked_list.c
 * Description: Beispielprogramm zur Implementierung einer einfachen doppelt verketteten Liste.
 *              Das Programm ist so aufgebaut, dass die gesamte Funktionslogik innerhalb der main-Funktion implementiert ist.
 *              Durch diese Implementierung kann man die Funktionsweise der Liste direkt sehen, ohne dass man zusätzliche Funktionen implementieren muss.
 * Author: Dennis Grewe
 * Date: January 10th, 2025
 */
#include <stdio.h>
#include <stdlib.h>

// Definition der Knotenstruktur für doppelt verkettete Liste
typedef struct Node {
    int data;               // Datenfeld
    struct Node* next;      // Zeiger auf nächsten Knoten
    struct Node* prev;      // Zeiger auf vorherigen Knoten
} Node;

int main() {
    // Initialisierung: Liste ist leer
    Node* head = NULL;
    
    // 1. Knoten erstellen und initialisieren
    head = (Node*)malloc(sizeof(Node));
    head->data = 10;
    head->next = NULL;
    head->prev = NULL;
    printf("Erster Knoten erstellt: %d\n", head->data);
    
    // 2. Knoten erstellen und verknüpfen
    head->next = (Node*)malloc(sizeof(Node));
    head->next->data = 20;
    head->next->prev = head;
    head->next->next = NULL;
    printf("Zweiter Knoten erstellt: %d\n", head->next->data);
    
    // 3. Knoten erstellen und verknüpfen
    head->next->next = (Node*)malloc(sizeof(Node));
    head->next->next->data = 30;
    head->next->next->prev = head->next;
    head->next->next->next = NULL;
    printf("Dritter Knoten erstellt: %d\n", head->next->next->data);
    
    // Liste vorwärts durchlaufen und ausgeben
    printf("\nListe vorwärts:\n");
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    
    // Liste rückwärts durchlaufen und ausgeben
    printf("\nListe rückwärts:\n");
    current = head;
    // Identifiziere den letzten Knoten zuerst
    while (current->next != NULL) {
        current = current->next;
    }
    // ausgehend vom letzten Knoten, gehe rückwärts und gebe die Daten aus
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->prev;
    }
    printf("NULL\n");
    
    // Mittleren Knoten (20) löschen
    printf("\nLösche mittleren Knoten (20)\n");
    // wir gehen von head aus und gehen einen Schritt nach vorne
    Node* to_delete = head->next;
    // wir setzen den next-Pointer des aktuellen Knotens auf den next-Pointer des zu löschenden Knotens
    head->next = to_delete->next;
    // wir setzen den prev-Pointer des nächsten Knotens auf den aktuellen Knoten
    to_delete->next->prev = head;
    // wir geben den zu löschenden Knoten frei
    free(to_delete);
    
    // Liste nach dem Löschen ausgeben
    printf("\nListe nach dem Löschen:\n");
    current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    
    // Speicher freigeben
    printf("\nGebe Speicher frei...\n");
    current = head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }
    
    printf("Programm beendet\n");
    return 0;
}