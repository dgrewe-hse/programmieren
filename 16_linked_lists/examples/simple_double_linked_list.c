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