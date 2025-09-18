#include <stdio.h>      // display() die printf() für Ausgabe aufruft
#include <stdlib.h>     // für malloc() und free()

#define SIZE 10

const int SIZE2 = 10;

// struct Node
typedef struct Node {                       // Name unsere Knoten-Schablone
    int number;                             // Daten die Knoten speichern kann
    struct Node *next;                      // Referenz auf nächste Knoteninstanz
} Node;                                     // ACHTUNG: Wenn Strukturvariablen direkt deklariert, wie: "knoten1, knoten2;", dann kein typedef

// typedef struct Node Node;                // oben mittels typedef direkt deklariert

// Funktionsprototypen
Node * create_node(int number);                         // erzeugt neuen Knoten und schreibt Wert aus "number" in Node.number
Node * insert_at_beginning(Node *head, int number);     // insert_at_beginning ruft intern create_node() auf um neuen Knoten zu erzeugen
Node * insert_sorted_ascending(Node *head, int number); // insert ruft inter creat_node() auf und fügt Knoten an richtige Position in Liste (aufsteigen) an
void display(Node *head);                               // gibt alle Werte der Liste aus, ausgehend vom "head"
void free_list(Node *head);                             // gibt reservierten Speicher an Heap zurück, ausgehend vom "head"

// main
int main() {

    // leere Liste erzeugen
    Node *head = NULL;

    // erzeugen und verketten dreier Elemente
    //head = insert_at_beginning(head, 10);       // Knoten 1: Wert 10 -> NULL
    //head = insert_at_beginning(head, 20);       // Knoten 2: Wert 20 ->
    // head = insert_at_beginning(head, 30);       // Knoten 3: Wert 30 -> head

    // erzeugen und verketten unserer sortierten Liste
    head = insert_sorted_ascending(head, 50);       // 1. Schritt: Knoten 1: Wert 50 -> NULL
    head = insert_sorted_ascending(head, 10);       // 2. Schritt: Knoten 2: Wert 10 -> Knoten1: Wert 50 -> NULL
    head = insert_sorted_ascending(head, 20);       // 3. Schritt: Knoten 2: Wert 10 -> Knoten3: Wert 20 -> Knoten1: Wert 50 -> NULL

    // Ausgabe der Liste auf Konsole
    display(head);

    // Speicher freigeben
    free_list(head);

    // zurücksetzten des Listenkopfs auf eine "leere Liste"
    // head = NULL;
    printf("%p", head);

   return 0;
}

// Erzeugt einen neuen Knoten auf dem Heap, 
// speichert wert in Knoten und liefert Adresse des neuen Knoten zurück
Node * create_node(int number) {

    // speicher für neuen Knoten mittels malloc auf Heap anfragen
    Node *node = (Node *) malloc(sizeof(Node)); 

    // prüfe ob Speicherreservierung geklappt hat
    if(node == NULL) {
        printf("Fehler bei der Speicherbereitstellung!");
        exit(1);    // exit() stdlib.h -> beendet das Programm
    }

    // Felder des neuen Knoten initialisieren
    node->number = number;
    node->next = NULL;

    // return neuen Knoten
    return node;
}

// Funktion erzeugt nun einen neuen Knoten mittels create_node() Aufruf
// übergibt den Initialwert des neuen Knoten Node.number, fügt den neuen
// Knoten an den Anfang der Liste hinzu -> mittels Anker wird Rootelement identifiziert,
// Node.next -> (verknüpft) mit altem Rootelement, und head wird angepasst an neue
// Knotenstruktur
// vorher: rootelement -> knoten -> ...
// nachher: neuen_knoten -> (alter) rootelement -> knoten -> ...
Node * insert_at_beginning(Node *head, int number) {

    // neuer knoten erzeugen
    Node *new_node = create_node(number);

    // neuer knoten->next zeigt auf alten root (head)
    new_node->next = head;

    return new_node;
}

Node * insert_sorted_ascending(Node *head, int number) {

    // 1. Schritt: Knoten 1: Wert 50 -> NULL
    // 2. Schritt: Knoten 2: Wert 10 -> Knoten1: Wert 50 -> NULL
    // 3. Schritt: Knoten 2: Wert 10 -> Knoten3: Wert 20 -> Knoten1: Wert 50 -> NULL

    // hilfspointer einführen um kopie von head
    Node *current = head;

    // neuer Knoten erzeugen
    Node *new_node = create_node(number);

    // wenn leere liste -> füge neuen Knoten als Wurzelknoten hinzu
    if (current == NULL) {
        head = new_node;
    }
    else {
        // Schleife -> durchschreiten der Liste um Position für "hinzufügen" zu identifizieren
        // Vergleich nächste Knoten.number > number
        // Vergleich aktueller Knoten.number < number 
        while (current != NULL) {
            if (current->next = NULL ) {
                new_node->next = current->next;
                // aktueller knoten soll auf neuen Knoten zeigen
                current->next = new_node;
            }
            // akteuller knoten Wert < gesuchte Position
            else if (current->next->number < number) {
                // nicht einfügen und weiterschreiten
                current = current->next;
            }
            // aktueller knoten wert ist größer als neuer Wert
            else {
                // hilfvariable für aktueller Knoten.next um "rest" der Kette zu retten
                // Verknüpfen aktueller Knoten.next -> neuem Knoten
                // Verknüpfen neuer Knoten.next->Hilfsvariable
                // neuer knoten->next auf übernächsten knoten
                new_node->next = current->next;
                // aktueller knoten soll auf neuen Knoten zeigen
                current->next = new_node;
            }
        }
    }
    
    // return head
    return head;
}

void display(Node *head) {

    // eine kopie der Adresse des Wurzelelemnts
    Node *current = head;

    // prüfe ob eine leere Liste vorliegt
    if (current == NULL) {
        printf("Leere Liste -> nichts zum ausgeben außer: ");
    }
    else {
        // Solange den "next" Verweisen folgen, wie kein NULL 
        // als "end marker" der Liste vorliegt
        while (current != NULL) {
            // head zeigt auf 1. element
            printf("%d -> ", current->number);
            current = current->next;

        }
    }
    // finale ausgabe am letzten Knoten
    printf("NULL\n");
}

// methode löscht ausgehend vom head alle Nodes in der liste nacheinander
void free_list(Node *head) {

    // Kopie unser Listenkopf
    Node *current = head;

    // Helfervariable auf nächsten Knoten
    Node *next;

    // Mittels Schleife bis zum Ende der Liste durschreiten
    while (current != NULL) {
        // zunächst  nächsten knoten "merken"
        next = current->next;
        // mittels free aufruf auf Node wird speicher freigegeben
        free(current);
        // next knoten auf aktuellen umschreiben
        current = next;
    }
}



