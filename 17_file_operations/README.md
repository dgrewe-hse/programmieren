# Kapitel 18: Dateioperationen in C

In der C-Programmierung sind Dateioperationen ein wichtiger Bestandteil, um Daten persistent zu speichern und zu verwalten. Die häufigsten Funktionen für Dateioperationen sind `fopen`, `fclose`, `fread`, `fwrite` und `fseek`. Diese Funktionen ermöglichen das Öffnen, Schließen, Lesen, Schreiben und die Navigation innerhalb von Dateien.

## Wichtige Funktionen

### 1. `fopen`
Die Funktion `fopen` wird verwendet, um eine Datei zu öffnen. Sie benötigt den Dateinamen und den Modus (z.B. "r" für Lesen, "w" für Schreiben, "a" für Anhängen). Es ist auch möglich, den Modus zu kombinieren, indem man ein `+`-Symbol verwendet, um sowohl Lese- als auch Schreibzugriff zu ermöglichen (z.B. "r+" für Lesen und Schreiben).

```c
FILE *file = fopen("dateiname.txt", "r+"); // Öffnet die Datei zum Lesen und Schreiben
```

### 2. `fclose`
Die Funktion `fclose` schließt eine geöffnete Datei. Es ist wichtig, Dateien zu schließen, um sicherzustellen, dass alle Puffer geleert und Ressourcen freigegeben werden.

```c
fclose(file);
```

### 3. `fread`
Die Funktion `fread` wird verwendet, um Daten aus einer Datei zu lesen. Sie benötigt einen Zeiger auf den Speicherort, an dem die Daten gespeichert werden sollen, die Größe der zu lesenden Elemente, die Anzahl der Elemente und den Zeiger auf die Datei.

```c
fread(buffer, sizeof(char), size, file);
```

### 4. `fwrite`
Die Funktion `fwrite` wird verwendet, um Daten in eine Datei zu schreiben. Sie benötigt einen Zeiger auf die Daten, die Größe der Elemente, die Anzahl der Elemente und den Zeiger auf die Datei.

```c
fwrite(buffer, sizeof(char), size, file);
```

### 5. `fseek`
Die Funktion `fseek` wird verwendet, um die Position des Dateizeigers zu ändern. Sie benötigt den Zeiger auf die Datei, die Anzahl der Bytes, um die verschoben werden soll, und die Position, von der aus die Verschiebung erfolgen soll (z.B. `SEEK_SET`, `SEEK_CUR`, `SEEK_END`).

```c
fseek(file, 0, SEEK_SET); // Zurück zum Anfang der Datei
```

## Beispielprogramm: `file_operations.c`

Das bereitgestellte Beispielprogramm `file_operations.c` demonstriert die Verwendung dieser Funktionen, um Kundendaten in einer Datei zu speichern, zu lesen, zu aktualisieren und zu löschen. 

### Anwendungsfall

Das Programm ist nützlich für Anwendungen, die eine einfache Verwaltung von Kundendaten erfordern. Es ermöglicht das Hinzufügen neuer Kunden, das Abrufen von Informationen über bestehende Kunden, das Aktualisieren von Kundendaten und das Löschen von Datensätzen. Diese Funktionen sind besonders wichtig in Anwendungen wie Kundenmanagementsystemen, wo die Datenintegrität und -verfügbarkeit entscheidend sind.

### Funktionen im Beispiel

- **write_customer_to_file**: Diese Funktion schreibt einen Kundendatensatz in die Datei `customer.dat`. Sie öffnet die Datei im Anhänge-Modus, um sicherzustellen, dass neue Datensätze am Ende der Datei hinzugefügt werden.

- **read_customer_from_file**: Diese Funktion liest einen Kundendatensatz aus der Datei `customer.dat`, basierend auf der übergebenen Kunden-ID. Sie öffnet die Datei im Lese-Modus und gibt den gelesenen Datensatz zurück.

- **update_customer_in_file**: Diese Funktion aktualisiert einen bestehenden Kundendatensatz in der Datei. Sie sucht nach der entsprechenden Kunden-ID und aktualisiert die Daten, wenn der Datensatz gefunden wird.

- **delete_customer_from_file**: Diese Funktion löscht einen Kundendatensatz aus der Datei. Derzeit ist die Implementierung unvollständig, da sie nur die Datei öffnet und einen Datensatz liest, ohne ihn tatsächlich zu löschen. Eine vollständige Implementierung würde das Erstellen einer neuen Datei ohne den zu löschenden Datensatz erfordern.


## Kompilierung und Ausführung

Um das Programm zu kompilieren und auszuführen, verwenden Sie das bereitgestellte Makefile.

### Schritte zur Verwendung des Makefiles

1. **Makefile speichern**: Stellen Sie sicher, dass sich das Makefile im gleichen Verzeichnis wie die Quellcodes (`file_operations.c`) befindet.

2. **Terminal öffnen**: Öffnen Sie ein Terminal und navigieren Sie zu dem Verzeichnis, in dem sich die Dateien befinden.

3. **Kompilieren**: Führen Sie den folgenden Befehl aus, um das Programm zu kompilieren:
   ```bash
   make
   ```

4. **Programm ausführen**: Um das Programm auszuführen, verwenden Sie:
   ```bash
   make run
   ```

5. **Aufräumen**: Um alle kompilierten Dateien zu löschen, verwenden Sie:
   ```bash
   make clean
   ```

## Fazit

Die Verwendung von Dateioperationen in C ermöglicht es, Daten effizient zu speichern und zu verwalten. Die bereitgestellten Funktionen sind grundlegend für die Arbeit mit Dateien und sollten in jedem C-Programmierer-Werkzeugkasten vorhanden sein. Nutzen Sie das Beispielprogramm und das Makefile, um die Funktionsweise dieser Dateioperationen zu verstehen und anzuwenden.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0
