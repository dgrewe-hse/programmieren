#include <stdio.h>
#include <stdlib.h> // um malloc und free zu nutzen

struct Knoten {
    int daten;
    struct Knoten *next;
};

typedef struct Knoten Node; // Anderes Schlüsselwort für "struct Knoten" soll "Node" genutzt werden

int main() {

    // Deklaration eines Ankers der auf einen Knoten zeigt
    // struct Knoten *anker;
    Node *anker = NULL;

    // Wurzelelement / Root element unserer ersten Liste
    // Node apples;    // legt apples auf dem STACK
    anker = (Node *) malloc (sizeof(Node));
    // anker soll nun auf das neue Element zeigen -> somit wird Knoten/Element zu Wurzelement
    //anker = apples; // kein '&' da apples ein Pointer auf Adresse im Heap ist
    // anker zeigt auf Adresse des Knoten 'apples', welcher auf dem Heap liegt
    // Anzahl der apples im "Obstkorb" setzen
    // müssen wir Pfeiloperator nutzen, da Variable 'apples' eine Referenzvariable / Pointer ist
    // apples.daten = 5;    -> so nur wenn Strukturvariable
    anker->daten = 5;

    // ein weiteres Element
    // Node *cherries = (Node *) malloc(sizeof(Node));
    // verketten von apples und cherries mittels apples.next pointer
    anker->next = (Node *) malloc(sizeof(Node));
    anker->next->daten = 2;
    // verketten von apples und cherries mittels apples.next pointer
    //apples->next = cherries;

    // weiteres Element
    //Node *bananas = (Node *) malloc(sizeof(Node));
    // anker -> apples -> cherries ->
    anker->next->next = (Node *) malloc(sizeof(Node));
    anker->next->next->daten = 7;
    //cherries->next = bananas;

    // anker -> apples (apples.next) -> cherries (cherries.next) -> bananas (bananas.next) -> NULL

    // Freigabe des reservierten Speichers aller Knoten
    // mittels pointer auf die Speicherblöcke
    // NUN KNOTEN IN UMGEKEHRTER REIHENFOLGE LÖSCHEN
    free(anker->next->next);   // free(anker) ist äquivalent
    free(anker->next);
    free(anker);

    return 0;
}
