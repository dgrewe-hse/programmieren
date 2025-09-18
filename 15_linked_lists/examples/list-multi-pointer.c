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
 * File: list-multi-pointer.c
 * Description: Beispielprogramm zur Verwendung von Mehrfach-Pointern in verketteten Listen. 
 *              Das Programm zeigt, wie man einen Knoten aus einer verketteten Liste sauber löscht und
 *              warum dazu ein Mehrfachpointer verwendet werden muss und ein einfach Poitner nicht aussreicht. 
 * Author: Dennis Grewe
 * Date: January 10th, 2025
 * 
 * Analogie:
 * Einfacher Pointer: Wie eine Kopie einer Wegbeschreibung - Änderungen an der Kopie ändern nicht die Original-Wegbeschreibung
 * Doppelpointer: Wie ein Zugriff auf die Original-Wegbeschreibung - Änderungen wirken sich direkt auf das Original aus
 */
#include <stdio.h>
#include <stdlib.h>

// Definition der Knotenstruktur
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Funktion, die einen Knoten aus einer verketteten Liste löscht, 
// aber nur mit einem einfachen Pointer realisiert ist.
// PROBLEM: Nur lokale Kopie wird geändert, der Original-Pointer wird nicht aktualisiert.
// Daher wird der Pointer "head" nicht korrekt aktualisiert und 
// zeigt weiterhin auf den alten Knoten.
void delete_first_simple(Node* head) {
    if (head == NULL) return;
    
    Node* temp = head->next;    // Speichere zweiten Knoten
    free(head);                 // Lösche ersten Knoten
    head = temp;                // PROBLEM: Nur lokale Kopie wird geändert!

    // Erklärung:
    // - Der Pointer wird als Wert übergeben (Call by Value)
    // - Die Funktion arbeitet mit einer Kopie des Pointers
    // - Änderungen am Pointer sind nur innerhalb der Funktion sichtbar
    // - Der Original-Pointer im Hauptprogramm bleibt unverändert
}

// Funktion, die einen Knoten aus einer verketteten Liste löscht, 
// aber mit einem doppelten Pointer realisiert ist.
// Durch den doppelten Pointer wird der Original-Pointer aktualisiert,
// da wir die Adresse des "head"-Pointers übergeben (via Dereferenzierung) und somit den Pointer selbst ändern können.
// Daher wird der Pointer "head" korrekt aktualisiert und zeigt auf den neuen Knoten.
void delete_first_double(Node** listenkopf) {
    if (*listenkopf == NULL) return;
    
    Node* temp = (*listenkopf)->next;  // Speichere zweiten Knoten
    free(*listenkopf);                // Lösche ersten Knoten
    *listenkopf = temp;              // Ändert den Original-Pointer

    // Erklärung:
    // - Die Adresse des Pointers wird übergeben (Call by Reference)
    // - Die Funktion kann den Original-Pointer modifizieren
    // - Änderungen am Pointer sind auch außerhalb der Funktion sichtbar
}

int main() {
    // Erstelle Testliste: 1 -> 2 -> 3 -> NULL
    Node* head = malloc(sizeof(Node));
    head->data = 1;
    head->next = malloc(sizeof(Node));
    head->next->data = 2;
    head->next->next = malloc(sizeof(Node));
    head->next->next->data = 3;
    head->next->next->next = NULL;

    // Versuch mit einfachem Pointer
    printf("Adresse von head vor delete_first_simple: %p\n", (void*)head);
    delete_first_simple(head);  // head wird als Wert übergeben
    printf("Adresse von head nach delete_first_simple: %p\n", (void*)head); 
    // PROBLEM: head zeigt immer noch auf die alte (bereits freigegebene) Adresse!

    // Versuch mit Doppelpointer
    printf("\nAdresse von head vor delete_first_double: %p\n", (void*)head);
    delete_first_double(&head);  // Adresse von head wird übergeben
    printf("Adresse von head nach delete_first_double: %p\n", (void*)head);
    // KORREKT: head wurde auf den nächsten Knoten aktualisiert

    return 0;
}
