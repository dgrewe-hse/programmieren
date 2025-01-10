# Verkettete Listen Beispiele in C

Dieser Ordner enthält verschiedene Implementierungen von verketteten Listen in C, die verschiedene Operationen und Anwendungsfälle demonstrieren.

## Programmübersicht

### 1. Einfache Verkettete Liste (`simple_linked_list.c`)
Eine grundlegende Implementierung einer einfach verketteten Liste, die Folgendes demonstriert:
- Erstellen von Knoten
- Einfügen von Knoten am Anfang der Liste
- Durchlaufen und Ausgeben der Liste

### 2. Suche in Verketteter Liste (`search_linked_list.c`)
Erweitert die einfache verkettete Liste um:
- Suchfunktionalität zum Finden bestimmter Werte in der Liste
- Rückgabe des Knotens, der den gesuchten Wert enthält
- Demonstration der Traversierung für Suchoperationen

### 3. Verkettete Liste mit Einfügen am Ende (`simple_linked_list_rear.c`)
Zeigt eine alternative Implementierung mit Fokus auf:
- Einfügen von Knoten am Ende der Liste
- Verwaltung einer Referenz auf den letzten Knoten
- Demonstration verschiedener Einfügestrategien

### 4. Doppelt Verkettete Liste (`double_linked_list.c`)
Eine Implementierung einer doppelt verketteten Liste, die Folgendes demonstriert:
- Erstellen von Knoten mit Vorwärts- und Rückwärtszeigern
- Einfügen und Löschen von Knoten
- Durchlaufen der Liste in beide Richtungen

### 5. Prioritätswarteschlange (`priority_queue.c`)
Eine Implementierung einer Prioritätswarteschlange, die Folgendes demonstriert:
- Erstellen von Knoten mit Priorität
- Einfügen von Knoten in die Warteschlange
- Entfernen des Knotens mit der höchsten Priorität
- Durchlaufen der Warteschlange

### 6. Mehrfach-Pointer in Verketteten Listen (`list-multi-pointer.c`)
Eine Implementierung, die zeigt, wie ein doppelter Pointer verwendet wird, um den Original-Pointer einer verketteten Liste zu ändern.
Eine detaillierte Erklärung findet sich in der Datei [list-multi-pointer.md](./list-multi-pointer.md).

## Kompilierung und Ausführung

### Voraussetzungen
- [GCC Compiler](https://gcc.gnu.org/)
- [Make](https://www.gnu.org/software/make/)
- Unix-ähnliche Umgebung (Linux, macOS) oder Windows mit installiertem GCC

### Verwendung des Makefiles

Das Projekt enthält ein Makefile mit verschiedenen Befehlen für die Kompilierung und Ausführung der Programme.

#### Hauptbefehle:
```bash
# Hilfe, sowie alle verfügbaren Befehle anzeigen
make help

# Alle Programme kompilieren
make all

# Aufräumen (alle kompilierten Programme löschen)
make clean

```

#### Programme einzeln kompilieren:
```bash
# Einfache verkettete Liste
make simple_list

# Such-Liste
make search_list

# Ende-Einfüge-Liste
make rear_list

# Doppelt verkettete Liste
make double_list

# Prioritätswarteschlange
make priority_queue

# Mehrfach-Pointer in Verketteten Listen
make list-multi-pointer
```

#### Programme ausführen:
```bash
# Einfache verkettete Liste ausführen
make run-simple

# Such-Liste ausführen
make run-search

# Ende-Einfüge-Liste ausführen
make run-rear

# Doppelt verkettete Liste ausführen
make run-double

# Prioritätswarteschlange ausführen
make run-priority

# Mehrfach-Pointer in Verketteten Listen ausführen
make run-list-multi-pointer

# Alle Programme nacheinander ausführen
make run-all
```

### Manuelle Kompilierung (ohne Make)
Falls kein Make verfügbar ist, können die Programme auch direkt mit GCC kompiliert werden:

```bash
# Einfache verkettete Liste
gcc -Wall -Wextra -g -o simple_list simple_linked_list.c

# Such-Liste
gcc -Wall -Wextra -g -o search_list search_linked_list.c

# Ende-Einfüge-Liste
gcc -Wall -Wextra -g -o rear_list simple_linked_list_rear.c

# Doppelt verkettete Liste
gcc -Wall -Wextra -g -o double_list double_linked_list.c

# Prioritätswarteschlange
gcc -Wall -Wextra -g -o priority_queue priority_queue.c

# Mehrfach-Pointer in Verketteten Listen
gcc -Wall -Wextra -g -o list-multi-pointer list-multi-pointer.c
```

## Programmdetails

### Verwendete Datenstrukturen

#### Knotenstruktur
```c
typedef struct Node {
    int data;           // Im Knoten gespeicherte Daten
    struct Node* next;  // Zeiger auf den nächsten Knoten
} Node;
```

### Häufige Operationen

1. **Knoten erstellen**
   - Reserviert Speicher für einen neuen Knoten
   - Initialisiert Daten und next-Zeiger
   - Gibt Zeiger auf neuen Knoten zurück

2. **Knoten einfügen**
   - Am Anfang (`simple_linked_list.c`)
   - Am Ende (`simple_linked_list_rear.c`)
   - In einer doppelt verketteten Liste (`double_linked_list.c`)

3. **Liste ausgeben**
   - Durchläuft die gesamte Liste
   - Gibt die Daten jedes Knotens aus
   - Zeigt Listenstruktur mit Pfeilen

4. **Knoten suchen**
   - Durchläuft Liste um bestimmten Wert zu finden
   - Gibt Knoten mit Wert oder NULL zurück

5. **Knoten entfernen**
   - Entfernt einen bestimmten Knoten aus der Liste
   - Gibt den entfernten Knoten zurück

## Speicherverwaltung

Alle Programme verwalten den Speicher ordnungsgemäß durch:
- Verwendung von `malloc()` für dynamische Speicherreservierung
- Überprüfung auf NULL nach Allokation
- Korrekte Zeigerhandhabung

## Compiler-Flags

Das Makefile verwendet folgende Compiler-Flags:
- `-Wall`: Aktiviert alle Compiler-Warnungen
- `-Wextra`: Aktiviert zusätzliche Warnungen
- `-g`: Fügt Debug-Informationen hinzu
