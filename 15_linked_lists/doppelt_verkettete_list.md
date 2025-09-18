# Aufgabe: Implementierung einer doppelt verketteten Liste

## Beschreibung
Implementieren Sie eine doppelt verkettete Liste in C. Eine doppelt verkettete Liste ist eine Datenstruktur, bei der jedes Element (Knoten) sowohl einen Verweis auf seinen Nachfolger als auch auf seinen Vorgänger besitzt.

## Anforderungen

### 1. Strukturdefinition
Erstellen Sie eine Struktur `Node` mit folgenden Elementen:
- Ein Datenelement vom Typ `int`
- Einen Zeiger auf den nächsten Knoten
- Einen Zeiger auf den vorherigen Knoten

### 2. Grundfunktionen
Implementieren Sie folgende Funktionen:

#### 2.1 Erstellen eines neuen Knotens
- Funktion: `create_node`
- Parameter: Ganzzahl als Datenwert
- Rückgabe: Zeiger auf den neuen Knoten
- Aufgabe: Reserviert Speicher und initialisiert einen neuen Knoten

#### 2.2 Einfügen am Anfang
- Funktion: `insert_at_beginning`
- Parameter: Doppelzeiger auf den Kopf der Liste, einzufügender Wert
- Rückgabe: Zeiger auf den neuen Kopf der Liste
- Aufgabe: Fügt einen neuen Knoten am Anfang der Liste ein

#### 2.3 Einfügen am Ende
- Funktion: `insert_at_end`
- Parameter: Doppelzeiger auf den Kopf der Liste, einzufügender Wert
- Rückgabe: Zeiger auf den neuen Knoten
- Aufgabe: Fügt einen neuen Knoten am Ende der Liste ein

#### 2.4 Löschen eines Knotens
- Funktion: `delete_node`
- Parameter: Doppelzeiger auf den Kopf der Liste, zu löschender Wert
- Aufgabe: Sucht und löscht einen Knoten mit dem angegebenen Wert

#### 2.5 Ausgabe der Liste
- Funktion: `print_double_linked_list_from_head`
- Parameter: Zeiger auf den Kopf der Liste
- Aufgabe: Gibt alle Elemente der Liste von vorne nach hinten aus

#### 2.6 Speicherfreigabe
- Funktion: `free_list`
- Parameter: Zeiger auf den Kopf der Liste
- Aufgabe: Gibt den gesamten von der Liste belegten Speicher frei

### 3. Zusätzliche Anforderungen
- Implementieren Sie eine geeignete Fehlerbehandlung
- Berücksichtigen Sie Spezialfälle (leere Liste, einzelner Knoten)
- Kommentieren Sie Ihren Code ausführlich
- Verwenden Sie aussagekräftige Variablennamen

### 4. Hauptprogramm
Erstellen Sie ein Hauptprogramm, das:
- Eine neue Liste erstellt
- Verschiedene Werte einfügt
- Die Liste ausgibt
- Einen Wert löscht
- Die Liste erneut ausgibt
- Den Speicher freigibt

## Beispielausgabe

Liste nach Einfügen:
```sh
30 -> 20 -> 10 -> NULL
```

Liste nach Löschen von 20:
```sh
30 -> 10 -> NULL
```

## Hinweise
- Achten Sie besonders auf die korrekte Verwaltung der Zeiger
- Überprüfen Sie bei allen Operationen die Gültigkeit der Eingaben
- Stellen Sie sicher, dass keine Speicherlecks entstehen
- Testen Sie Ihre Implementierung mit verschiedenen Szenarien

## Zusatzaufgabe
Implementieren Sie eine Funktion, die die Liste sowohl vorwärts als auch rückwärts ausgeben kann.