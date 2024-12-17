# Kapitel 13: Rekursion und Iteration in C

Dieser Ordner enthält verschiedene C-Programme, die grundlegende Konzepte der Rekursion und Iteration demonstrieren. Die Programme sind:

1. **Fakultätsberechnung iterativ** (`faculty_iterative.c`)
2. **Fakultätsberechnung rekursiv** (`faculty_recursive.c`)
3. **Überprüfung, ob ein String ein Palindrom ist (iterativ)** (`palindrom_iterative.c`)
4. **Überprüfung, ob ein String ein Palindrom ist (rekursiv)** (`palindrom_recursive.c`)
5. **Berechnung der Summe eines Arrays (iterativ und rekursiv)** (`sum_array.c`)

## 1. Fakultätsberechnung iterativ (`faculty_iterative.c`)

Dieses Programm berechnet die Fakultät einer gegebenen Zahl iterativ.

```c
#include <stdio.h>

int faculty(int n) {
    // Iterative Berechnung der Fakultät
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 5;
    printf("Die Fakultät von %d ist %d\n", n, faculty(n));
    return 0;
}
```

## 2. Fakultätsberechnung rekursiv (`faculty_recursive.c`)

In diesem Programm wird die Fakultät einer gegebenen Zahl rekursiv berechnet.

```c
#include <stdio.h>

int faculty(int n) {
    if (n == 0) {
        return 1; // Abbruchbedingung
    }
    return n * faculty(n - 1); // Rekursiver Aufruf
}

int main() {
    int n = 5;
    printf("Die Fakultät von %d ist %d\n", n, faculty(n));
    return 0;
}
```

## 3. Überprüfung, ob ein String ein Palindrom ist (iterativ) (`palindrom_iterative.c`)

Dieses Programm überprüft, ob ein eingegebener String ein Palindrom ist, indem es die Zeichen von beiden Enden des Strings vergleicht.

```c
#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Nicht ein Palindrom
        }
        start++;
        end--;
    }
    return 1; // Palindrom
}

int main() {
    char str[100];
    printf("Geben Sie einen String ein: ");
    scanf("%s", str);
    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("Der String ist ein Palindrom.\n");
    } else {
        printf("Der String ist kein Palindrom.\n");
    }
    return 0;
}
```

## 4. Überprüfung, ob ein String ein Palindrom ist (rekursiv) (`palindrom_recursive.c`)

In diesem Programm wird die Palindromüberprüfung rekursiv durchgeführt.

```c
#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int start, int end) {
    if (start >= end) {
        return 1; // Basisfall
    }
    if (str[start] != str[end]) {
        return 0; // Nicht ein Palindrom
    }
    return isPalindrome(str, start + 1, end - 1); // Rekursiver Aufruf
}

int main() {
    char str[100];
    printf("Geben Sie einen String ein: ");
    scanf("%s", str);
    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("Der String ist ein Palindrom.\n");
    } else {
        printf("Der String ist kein Palindrom.\n");
    }
    return 0;
}
```

## 5. Berechnung der Summe eines Arrays (iterativ und rekursiv) (`sum_array.c`)

Dieses Programm berechnet die Summe der Elemente eines Arrays sowohl iterativ als auch rekursiv.

```c
#include <stdio.h>

int sum_iterative(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int sum_recursive(int arr[], int size) {
    if (size == 0) {
        return 0; // Abbruchbedingung
    }
    return arr[size - 1] + sum_recursive(arr, size - 1); // Rekursiver Aufruf
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Iterative Summe: %d\n", sum_iterative(arr, size));
    printf("Rekursive Summe: %d\n", sum_recursive(arr, size));
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
gcc -o faculty_iterative faculty_iterative.c
gcc -o faculty_recursive faculty_recursive.c
gcc -o palindrom_iterative palindrom_iterative.c
gcc -o palindrom_recursive palindrom_recursive.c
gcc -o sum_array sum_array.c
```

### Ausführung

Nach der Kompilierung können Sie die Programme mit den folgenden Befehlen ausführen:

```bash
# Ausführen der Programme
./faculty_iterative
./faculty_recursive
./palindrom_iterative
./palindrom_recursive
./sum_array
```

## Hinweise

- Stellen Sie sicher, dass Sie GCC installiert haben. Auf den meisten Linux-Distributionen können Sie es mit dem Paketmanager installieren. Auf Windows können Sie MinGW verwenden.
- Achten Sie darauf, dass Sie die Programme im gleichen Verzeichnis ausführen, in dem Sie sie kompiliert haben.
- Diese Programme sind einfach gehalten, um grundlegende Konzepte zu demonstrieren. Sie können sie erweitern und anpassen, um mehr über C-Programmierung zu lernen.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0