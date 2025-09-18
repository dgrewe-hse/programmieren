# Programmargumente in C

In der C-Programmierung sind Programmargumente eine Möglichkeit, Daten an ein Programm zu übergeben, wenn es gestartet wird. Diese Argumente werden über die Befehlszeile übergeben und können verwendet werden, um das Verhalten des Programms zur Laufzeit zu steuern. 

## Verwendung von Programmargumenten

Programmargumente sind nützlich in verschiedenen Szenarien, wie zum Beispiel:

- **Konfiguration**: Übergeben von Konfigurationsparametern, die das Verhalten des Programms beeinflussen.
- **Eingabewerte**: Bereitstellung von Eingabewerten, die das Programm verarbeiten soll, ohne dass eine Benutzerinteraktion erforderlich ist.
- **Flexibilität**: Erlauben von dynamischen Anpassungen des Programms, ohne den Quellcode ändern zu müssen.

## Beispielprogramme

In diesem Repository finden Sie zwei Beispielprogramme, die die Verwendung von Programmargumenten demonstrieren:

### 1. `echo.c`

Das Programm `echo.c` gibt ein übergebenes Argument auf der Konsole aus. Es erwartet genau ein Argument. Wenn das Argument übergeben wird, wird es ausgegeben; andernfalls wird eine Fehlermeldung angezeigt.

```c
int main(int argc, char *argv[]) {
    // Wenn genau ein Argument übergeben wird, wird es ausgegeben
    if (argc == 2) {
        printf("%s\n", argv[1]);
    } 
    else {
        // Wenn kein oder mehr als ein Argument übergeben wird, wird eine Fehlermeldung ausgegeben
        printf("Usage: %s <string>\n", argv[0]);
        exit(1);
    }
    return 0;
}
```

### 2. `main_args.c`

Das Programm `main_args.c` zeigt die Anzahl der übergebenen Argumente und gibt jedes Argument einzeln aus. Es demonstriert, wie man auf die Argumente zugreifen kann, die beim Start des Programms übergeben wurden.

```c
int main(int argc, char *argv[]) {
    // Ausgabe der Anzahl der Argumente
    printf("Anzahl der Argumente: %d\n", argc);
    // Ausgabe der Argumente
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
```

## Kompilierung und Ausführung

Um die Programme zu kompilieren und auszuführen, verwenden Sie das bereitgestellte Makefile.

### Schritte zur Verwendung des Makefiles

1. **Makefile speichern**: Stellen Sie sicher, dass sich das Makefile im gleichen Verzeichnis wie die Quellcodes (`echo.c` und `main_args.c`) befindet.

2. **Terminal öffnen**: Öffnen Sie ein Terminal und navigieren Sie zu dem Verzeichnis, in dem sich die Dateien befinden.

3. **Kompilieren**: Führen Sie den folgenden Befehl aus, um die Programme zu kompilieren:
   ```bash
   make
   ```

4. **Programm ausführen**:
   - Um das `echo`-Programm auszuführen und ein Argument zu übergeben:
     ```bash
     make run-echo
     ```
   - Um das `main_args`-Programm auszuführen und Argumente zu übergeben:
     ```bash
     make run-main-args
     ```

5. **Aufräumen**: Um alle kompilierten Dateien zu löschen, verwenden Sie:
   ```bash
   make clean
   ```

## Fazit

Die Verwendung von Programmargumenten in C ermöglicht es, Programme flexibler und anpassungsfähiger zu gestalten. Die bereitgestellten Beispiele zeigen, wie man Programmargumente in C-Programmen nutzen kann, um Eingaben zu verarbeiten und das Verhalten des Programms zu steuern.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0
