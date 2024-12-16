# Beispiele für Arrays (Felder) in C

Dieser Ordner enthält verschiedene C-Programme, die grundlegende Konzepte der Verwendung von Arrays (Felder) in C demonstrieren. Die Programme sind:

1. **Zugriff auf Arrays über Indizes** (`access_array_via_index.c`)
2. **Zugriff auf Arrays über eine for-Schleife** (`access_array_via_for_loop.c`)
3. **Zugriff auf Arrays über eine while-Schleife** (`access_array_via_while_loop.c`)
4. **Eingabe und Ausgabe von Arrays** (`input_output_array.c`)
5. **Erstes Beispiel mit Arrays** (`my_first_array.c`)
6. **Nutzung von Zeichenketten in Arrays** (`array_zeichenkette.c`)
7. **Sieb des Eratosthenes zur Bestimmung von Primzahlen** (`sieb_des_eratosthenes.c`)
8. **Umkehren eines Arrays** (`reverse_array.c`)

## 1. Zugriff auf Arrays über Indizes (`access_array_via_index.c`)

Dieses Programm demonstriert, wie man auf die Elemente eines Arrays über ihre Indizes zugreift und diese ausgibt.

### Code:
```c
#include <stdio.h>

int main() {
    int my_array[5] = {1, 2, 3, 4, 5};
    printf("Das erste Element des Arrays my_array hat den Wert: %d\n", my_array[0]);
    // Weitere Ausgaben...
    return 0;
}
```

## 2. Zugriff auf Arrays über eine for-Schleife (`access_array_via_for_loop.c`)

In diesem Programm wird eine for-Schleife verwendet, um alle Elemente eines Arrays auszugeben.

### Code:
```c
#include <stdio.h>

int main() {
    int my_array[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("Das Element %d hat den Wert: %d\n", i, my_array[i]);
    }
    return 0;
}
```

## 3. Zugriff auf Arrays über eine while-Schleife (`access_array_via_while_loop.c`)

Dieses Programm zeigt, wie man mit einer while-Schleife auf die Elemente eines Arrays zugreift.

### Code:
```c
#include <stdio.h>

int main() {
    int my_array[5] = {1, 2, 3, 4, 5};
    int i = 0;
    while (i < 5) {
        printf("Das Element %d hat den Wert: %d\n", i, my_array[i]);
        i++;
    }
    return 0;
}
```

## 4. Eingabe und Ausgabe von Arrays (`input_output_array.c`)

In diesem Programm wird gezeigt, wie man Werte in ein Array eingibt und diese anschließend ausgibt.

### Code:
```c
#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
    int my_array[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Bitte geben Sie den Wert für das Element %d ein: ", i);
        scanf("%d", &my_array[i]);
    }
    // Ausgabe...
    return 0;
}
```

## 5. Erstes Beispiel mit Arrays (`my_first_array.c`)

Dieses Programm zeigt die grundlegende Verwendung eines Arrays und gibt die Größe des Arrays aus.

### Code:
```c
#include <stdio.h>

int main() {
    int my_array[5];
    printf("Das Array my_array hat die Größe: %lu\n", sizeof(my_array));
    return 0;
}
```

## 6. Nutzung von Zeichenketten in Arrays (`array_zeichenkette.c`)

In diesem Programm wird demonstriert, wie man Zeichenketten in Arrays speichert und deren Kapazität überprüft.

### Code:
```c
#include <stdio.h>

int main() {
    char city_esslingen[] = "Esslingen";
    printf("Kapazität von city_esslingen: %lu\n", sizeof(city_esslingen));
    return 0;
}
```

## 7. Sieb des Eratosthenes zur Bestimmung von Primzahlen (`sieb_des_eratosthenes.c`)

Dieses Programm implementiert das Sieb des Eratosthenes zur Bestimmung von Primzahlen bis zu einer gegebenen Obergrenze.

### Code:
```c
#include <stdio.h>
#include <stdbool.h>

void sieveOfEratosthenes(int n) {
    // Implementierung...
}

int main() {
    int n;
    // Benutzereingabe...
    sieveOfEratosthenes(n);
    return 0;
}
```

## 8. Umkehren eines Arrays (`reverse_array.c`)

In diesem Programm wird ein Array umgekehrt und die umgekehrte Zeichenkette ausgegeben.

### Code:
```c
#include <stdio.h>

int main() {
    char input[100];
    // Eingabe und Umkehrung...
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
gcc -o access_array_via_index access_array_via_index.c
gcc -o access_array_via_for_loop access_array_via_for_loop.c
gcc -o access_array_via_while_loop access_array_via_while_loop.c
gcc -o input_output_array input_output_array.c
gcc -o my_first_array my_first_array.c
gcc -o array_zeichenkette array_zeichenkette.c
gcc -o sieb_des_eratosthenes sieb_des_eratosthenes.c
gcc -o reverse_array reverse_array.c
```

### Ausführung

Nach der Kompilierung können Sie die Programme mit den folgenden Befehlen ausführen:

```bash
# Ausführen der Programme
./access_array_via_index
./access_array_via_for_loop
./access_array_via_while_loop
./input_output_array
./my_first_array
./array_zeichenkette
./sieb_des_eratosthenes
./reverse_array
```

## Hinweise

- Stellen Sie sicher, dass Sie GCC installiert haben. Auf den meisten Linux-Distributionen können Sie es mit dem Paketmanager installieren. Auf Windows können Sie MinGW verwenden.
- Achten Sie darauf, dass Sie die Programme im gleichen Verzeichnis ausführen, in dem Sie sie kompiliert haben.
- Diese Programme sind einfach gehalten, um grundlegende Konzepte zu demonstrieren. Sie können sie erweitern und anpassen, um mehr über C-Programmierung zu lernen.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0