# Beispiele für Funktionen in C

Dieser Ordner enthält verschiedene C-Programme, die grundlegende Konzepte der Funktionsnutzung in C demonstrieren. Die Programme sind:

1. **Max-Funktion** (`max.c`)
2. **Eigene Bibliothek** (`mylib.c` und `mylib.h`)
3. **Primzahlüberprüfung** (`prime.c`)
4. **Nutzung der eigenen Bibliothek** (`use_own_lib.c`)

## 1. Max-Funktion (`max.c`)

Dieses Programm enthält eine Funktion, die das Maximum von zwei gegebenen Zahlen zurückgibt.

### Code:
```c
#include <stdio.h>

int max(int number1, int number2) {
    return (number1 > number2) ? number1 : number2;
}

int main() {
    int i = 5;
    int j = 2;
    int highest_value = max(i, j);
    printf("Die größere der beiden Zahlen lautet: %d\n", highest_value);
    return 0;
}
```

## 2. Eigene Bibliothek (`mylib.c` und `mylib.h`)

Diese Dateien implementieren eine eigene Bibliothek mit einer Funktion zur Überprüfung, ob eine Zahl gerade ist.

### Header-Datei (`mylib.h`):
```c
#include <stdbool.h>

bool isEven(int number);
```

### Implementierungsdatei (`mylib.c`):
```c
#include "mylib.h"

bool isEven(int number) {
    return (number % 2 == 0);
}
```

## 3. Primzahlüberprüfung (`prime.c`)

Dieses Programm überprüft, ob eine gegebene Zahl eine Primzahl ist und gibt die ersten n Primzahlen aus.

### Code:
```c
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number < 2) return false;
    for (int divisor = 2; divisor <= number / 2; divisor++) {
        if (number % divisor == 0) return false;
    }
    return true;
}

void printPrimeNumbers(int numbersToTest) {
    int count = 0;
    int number = 2;
    while (count < numbersToTest) {
        if (isPrime(number)) {
            count++;
            printf("%d ", number);
        }
        number++;
    }
}

int main() {
    int max_primes;
    printf("Wieviele Primzahlen wollen Sie ausgeben: ");
    scanf("%d", &max_primes);
    printPrimeNumbers(max_primes);
    return 0;
}
```

## 4. Nutzung der eigenen Bibliothek (`use_own_lib.c`)

Dieses Programm zeigt, wie man die eigene Bibliothek `mylib` verwendet, um zu überprüfen, ob eine Zahl gerade ist.
Hierbei ist der Funktionsprototyp in der Header-Datei `mylib.h` definiert und die Implementierung in der Implementierungsdatei `mylib.c`.
Bei der Kompilierung wird die Implementierungsdatei `mylib.c` mit der Header-Datei `mylib.h` kompiliert. Diese Dateien müssen sich im gleichen Verzeichnis befinden.

### Code:
```c
#include <stdio.h>
#include "mylib.h"

int main() {
    if (isEven(4))
        printf("Die Zahl ist gerade\n");
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
gcc -o max max.c
gcc -o mylib mylib.c
gcc -o prime prime.c
gcc -o use_own_lib use_own_lib.c
```

### Ausführung

Nach der Kompilierung können Sie die Programme mit den folgenden Befehlen ausführen:

```bash
# Ausführen der Programme
./max
./mylib
./prime
./use_own_lib
```

## Hinweise

- Stellen Sie sicher, dass Sie GCC installiert haben. Auf den meisten Linux-Distributionen können Sie es mit dem Paketmanager installieren. Auf Windows können Sie MinGW verwenden.
- Achten Sie darauf, dass Sie die Programme im gleichen Verzeichnis ausführen, in dem Sie sie kompiliert haben.
- Diese Programme sind einfach gehalten, um grundlegende Konzepte zu demonstrieren. Sie können sie erweitern und anpassen, um mehr über C-Programmierung zu lernen.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0