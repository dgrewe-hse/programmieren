#include <stdio.h>

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
    Node apples;
    apples.daten = 5;
    // anker auf erstes Element / Root Element
    anker = &apples;

    // ein weiteres Element
    Node cherries;
    cherries.daten = 2;
    // verketten von apples und cherries mittels apples.next pointer
    apples.next = &cherries;

    // weiteres Element
    Node bananas;
    bananas.daten = 7;
    cherries.next = &bananas;

    // anker -> apples (apples.next) -> cherries (cherries.next) -> bananas (bananas.next) -> NULL

    return 0;
}