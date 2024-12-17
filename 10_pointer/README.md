# Beispiele für Pointer in C

Dieser Ordner enthält verschiedene C-Programme, die grundlegende Konzepte der Verwendung von Pointern in C demonstrieren. Die Programme sind:

1. **Mein erster Pointer** (`my_first_pointer.c`)
2. **Zuweisung von Werten über Pointer** (`pointer_zuweisung.c`)
3. **Syntaktischer Zucker für Pointer** (`syntactical_sugar_pointer.c`)
4. **Inkrementieren und Dekrementieren von Pointern** (`pointer_increment_decrement.c`)
5. **Multi-Pointer** (`multi-pointer.c`)

## 1. Mein erster Pointer (`my_first_pointer.c`)

In diesem Programm wird gezeigt, wie man einen Pointer deklariert und verwendet.

### Code:
```c
#include <stdio.h>

int main() {
    int count = 5;
    int *pointer = &count;

    printf("Wert von count: %d\n", count);
    printf("Wert auf den pointer zeigt (*pointer): %d\n", *pointer);
    printf("Speicheradresse von count (&count): %p\n", (void*)&count);
    printf("Speicheradresse auf die pointer zeigt (pointer): %p\n", (void*)pointer);
    printf("Speicheradresse von pointer selbst (&pointer): %p\n", (void*)&pointer);

    return 0;
}
```

## 2. Zuweisung von Werten über Pointer (`pointer_zuweisung.c`)

Dieses Programm zeigt, wie man Werte über Pointer zuweist.

### Code:
```c
#include <stdio.h>

int main() {
    int apples = 5;
    int bananas = 2;
    
    int *pointer = &apples;
    int *pointer2 = &bananas;
    
    bananas = *pointer;    // bananas wird zu 5
    *pointer2 = apples;    // bananas wird zu 5
    pointer = pointer2;    // pointer zeigt nun auf die gleiche Adresse wie pointer2
    
    return 0;
}
```

## 3. Syntaktischer Zucker für Pointer (`syntactical_sugar_pointer.c`)

Dieses Programm demonstriert die Verwendung von Kurzschreibweisen für Pointer in C.

### Code:
```c
#include <stdio.h>

int main() {
    int *ptr, *ptr2;
    int apples = 5, bananas = 10;
    int *ptr_apples = &apples, *ptr_bananas = &bananas;

    return 0;
}
```

## 4. Inkrementieren und Dekrementieren von Pointern (`pointer_increment_decrement.c`)

Dieses Programm demonstriert, wie man Pointer in C verwendet und wie man sie inkrementiert und dekrementiert.

### Code:
```c
#include <stdio.h>

int main() {
    int counter = 5;
    int *ptr = &counter; // Pointer zeigt auf "counter"
    
    printf("Speicheradresse von counter = %p\n", ptr);
    printf("Wert von counter = %d\n", *ptr);
    
    // Inkrement
    ptr++;  // Bewegt sich zum nächsten Integer
    printf("Nach ptr++:\n");
    printf("Neue Adresse: %p\n", (void*)ptr);
    printf("Wert an dieser Adresse: %d\n\n", *ptr);
    
    // Dekrement
    ptr--;  // Geht einen Integer zurück
    printf("Nach ptr--:\n");
    printf("Neue Adresse: %p\n", (void*)ptr);
    printf("Wert an dieser Adresse: %d\n\n", *ptr);
    
    return 0;
}
```

## 5. Multi-Pointer (`multi-pointer.c`)

In diesem Programm wird gezeigt, wie man einen Pointer auf einen anderen Pointer verwendet.

### Code:
```c
#include <stdio.h>

int main() {
    int var = 3000;     // Variable initialisieren
    int *ptr = &var;   // Adresse von var dem ersten Pointer zuweisen
    int **pptr = &ptr; // Adresse von ptr dem Multi-Pointer zuweisen
    
    // Ausgabe aller Werte
    printf("Wert von var: %d\n", var);
    printf("Wert verfügbar bei *ptr: %d\n", *ptr);
    printf("Wert verfügbar bei **pptr: %d\n", **pptr);
    
    return 0;
}
```

## Kompilierung und Ausführung

### Voraussetzungen

Um die Programme auszuführen, benötigen Sie:
- Einen C-Compiler (z.B. GCC)
- Eine Entwicklungsumgebung oder ein Terminal

### Kompilierung

Um die Programme zu kompilieren, öffnen Sie ein Terminal und navigieren Sie zu dem Verzeichnis, in dem sich die C-Dateien befinden. Verwenden Sie die folgenden Befehle:

```bash
# Kompilieren der Programme
gcc -o my_first_pointer my_first_pointer.c
gcc -o pointer_zuweisung pointer_zuweisung.c
gcc -o syntactical_sugar_pointer syntactical_sugar_pointer.c
gcc -o pointer_increment_decrement pointer_increment_decrement.c
gcc -o multi_pointer multi-pointer.c
```

### Ausführung

Nach der Kompilierung können Sie die Programme mit den folgenden Befehlen ausführen:

```bash
# Ausführen der Programme
./my_first_pointer
./pointer_zuweisung
./syntactical_sugar_pointer
./pointer_increment_decrement
./multi_pointer
```

## Hinweise

- Stellen Sie sicher, dass Sie GCC installiert haben. Auf den meisten Linux-Distributionen können Sie es mit dem Paketmanager installieren. Auf Windows können Sie MinGW verwenden.
- Achten Sie darauf, dass Sie die Programme im gleichen Verzeichnis ausführen, in dem Sie sie kompiliert haben.
- Diese Programme sind einfach gehalten, um grundlegende Konzepte zu demonstrieren. Sie können sie erweitern und anpassen, um mehr über C-Programmierung zu lernen.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0