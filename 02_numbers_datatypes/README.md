# Beispiele für Zahlen und Datentypen in C

Dieser Ordner enthält verschiedene C-Programme, die grundlegende Konzepte im Umgang mit Zahlen und Datentypen demonstrieren. Die Programme sind:

1. **Enum Beispiel** (`enum.c`)
2. **Größe von Datentypen** (`sizeof.c`)
3. **Variablendeklaration** (`variables.c`)

## 1. Enum Beispiel (`enum.c`)

Dieses Programm demonstriert die Verwendung von Enumerationen (enum) in C. Enumerationen sind eine Möglichkeit, benannte Konstanten zu definieren, die die Lesbarkeit des Codes verbessern.

### Code:
```c
#include <stdio.h>

typedef enum color { 
    RED,
    GREEN,
    BLUE 
} Color;

int main() {
    Color myColor;
    myColor = RED;

    return 0;
}
```

### Erklärung:
- Eine Enumeration `Color` wird definiert, die die Farben `RED`, `GREEN` und `BLUE` enthält.
- Eine Variable `myColor` vom Typ `Color` wird deklariert und mit dem Wert `RED` initialisiert.

## 2. Größe von Datentypen (`sizeof.c`)

Dieses Programm zeigt, wie man die Größe von verschiedenen Datentypen in C mit der `sizeof`-Funktion ermitteln kann.

### Code:
```c
#include <stdio.h>

int main() {
    int ergebnis;
    double radius;
    char buchstabe;

    printf("%lu\n", sizeof(ergebnis));
    printf("%lu\n", sizeof(radius));
    printf("%lu\n", sizeof(buchstabe));

    return 0;
}
```

### Erklärung:
- Es werden Variablen für `int`, `double` und `char` deklariert.
- Die `sizeof`-Funktion wird verwendet, um die Größe dieser Variablen in Bytes zu bestimmen und auf der Konsole auszugeben.

## 3. Variablendeklaration (`variables.c`)

Dieses Programm demonstriert die Deklaration und Zuweisung von Variablen in C.

### Code:
```c
#include <stdio.h>

int main() {
    int ergebnis;		// Definiert “ergebnis” als eine integer Variable (4 Byte);
    double radius;		// Definiert ”radius” als eine double Variable (8 Byte);
    char buchstabe;		// Definiert “buchstabe” als eine character Variable (1 Byte);

    ergebnis = 10;      // weist den Wert "10" an die Variable "ergebnis" zu
    radius = 5.2;       // weist den Wert "5.2" an die Variable "radius" zu
    buchstabe = 'A';    // weist den Wert "A" (=65) an die Variable "buchstabe" zu

    return 0;
}
```

### Erklärung:
- Es werden drei Variablen deklariert: `ergebnis` (int), `radius` (double) und `buchstabe` (char).
- Den Variablen werden Werte zugewiesen, um deren Verwendung zu demonstrieren.

## Kompilierung und Ausführung

### Voraussetzungen

Um die Programme auszuführen, benötigen Sie:
- Einen C-Compiler (z.B. GCC)
- Eine Entwicklungsumgebung oder ein Terminal

### Kompilierung

Um die Programme zu kompilieren, öffnen Sie ein Terminal und navigieren Sie zu dem Verzeichnis, in dem sich die C-Dateien befinden. Verwenden Sie die folgenden Befehle:

```bash
# Kompilieren der Programme
gcc -o enum enum.c
gcc -o sizeof sizeof.c
gcc -o variables variables.c
```

### Ausführung

Nach der Kompilierung können Sie die Programme mit den folgenden Befehlen ausführen:

```bash
# Ausführen der Programme
./enum
./sizeof
./variables
```

## Hinweise

- Stellen Sie sicher, dass Sie GCC installiert haben. Auf den meisten Linux-Distributionen können Sie es mit dem Paketmanager installieren. Auf Windows können Sie MinGW verwenden.
- Achten Sie darauf, dass Sie die Programme im gleichen Verzeichnis ausführen, in dem Sie sie kompiliert haben.
- Diese Programme sind einfach gehalten, um grundlegende Konzepte zu demonstrieren. Sie können sie erweitern und anpassen, um mehr über C-Programmierung zu lernen.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0