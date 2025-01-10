# Mehrfach-Pointer in verketteten Listen

Dieses Beispielprogramm demonstriert den Unterschied zwischen einfachen und doppelten Pointern bei der Manipulation von verketteten Listen in C.

## Überblick

Das Programm zeigt, warum bei bestimmten Listenoperationen (wie dem Löschen des ersten Elements) ein doppelter Pointer notwendig ist und warum ein einfacher Pointer nicht ausreicht.

## Technische Details

### Call by Value in C
C arbeitet grundsätzlich immer mit "Call by Value". Das bedeutet:
- Bei Funktionsaufrufen werden Werte kopiert
- Auch bei Pointern wird der Wert (die Adresse) kopiert
- Ein doppelter Pointer ermöglicht den Zugriff auf den Original-Pointer

### Funktionsweise der Beispiele

#### 1. Einfacher Pointer (funktioniert nicht korrekt)

```c
void delete_first_simple(Node head) {
    if (head == NULL) return;
    Node temp = head->next; // Speichere zweiten Knoten
    free(head); // Lösche ersten Knoten
    head = temp; // PROBLEM: Nur lokale Kopie wird geändert!
}
```

- Der Pointer wird als Wert übergeben
- Die Funktion arbeitet mit einer Kopie des Pointers
- Änderungen am Pointer sind nur innerhalb der Funktion sichtbar
- Der Original-Pointer im Hauptprogramm bleibt unverändert

#### 2. Doppel-Pointer (funktioniert korrekt)

```c
void delete_first_double(Node** head) {
    if (*head == NULL) return;
    Node* temp = (*head)->next; // Speichere zweiten Knoten
    free(*head); // Lösche ersten Knoten
    *head = temp; // Änderung wirkt sich auf den Original-Pointer aus
}
```
- Die Adresse des Pointers wird übergeben
- Durch Dereferenzierung kann der Original-Pointer modifiziert werden
- Änderungen am Pointer sind auch außerhalb der Funktion sichtbar

## Speichermodell

### Mit einfachem Pointer:

```bash
main(): head -----> [1]->[2]->[3]->NULL
delete(): head(Kopie) -----> [freed]->[2]->[3]->NULL
Resultat: head zeigt immer noch auf freigegebenen Speicher!
```

### Mit doppelten Pointer:

```bash
main(): head -----> [1]->[2]->[3]->NULL
delete(): head(Adresse) -----> [freed]->[2]->[3]->NULL
Resultat: head zeigt auf den neuen Knoten!
```


## Analogie
- Einfacher Pointer: Wie eine Kopie einer Wegbeschreibung - Änderungen an der Kopie ändern nicht die Original-Wegbeschreibung
- Doppelpointer: Wie ein Zugriff auf die Original-Wegbeschreibung - Änderungen wirken sich direkt auf das Original aus

## Verwendung des Programms

1. Kompilieren:

```bash
gcc list-multi-pointer.c -o list-multi-pointer
```

2. Ausführen:

```bash
./list-multi-pointer
```
## Ausgabe
Das Programm zeigt die Adressen des head-Pointers vor und nach den Löschoperationen:
- Bei `delete_first_simple`: Adresse bleibt gleich (fehlerhaft)
- Bei `delete_first_double`: Adresse wird korrekt aktualisiert

## Wichtige Hinweise
1. Immer Doppelpointer verwenden, wenn der Original-Pointer geändert werden soll
2. Besonders wichtig bei:
   - Löschen des ersten Elements
   - Einfügen am Anfang der Liste
   - Operationen, die den Start der Liste ändern
3. Speicherlecks vermeiden durch korrektes Freigeben des Speichers

## Fazit
Obwohl C nur Call by Value unterstützt, ermöglichen Doppelpointer die Modifikation von Original-Pointern, was besonders bei der Arbeit mit verketteten Listen wichtig ist.