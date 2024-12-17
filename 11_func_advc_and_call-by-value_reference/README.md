# Pass-by-Value und Pass-by-Reference in C

In der C-Programmierung gibt es zwei Hauptmethoden zur Übergabe von Argumenten an Funktionen: **Pass by Value (PBV)** und **Pass by Reference (PBR)**. 

## Unterschied zwischen PBV und PBR

- **Pass by Value (PBV)**: Bei dieser Methode wird eine Kopie des Wertes der Variablen an die Funktion übergeben. Änderungen, die innerhalb der Funktion an diesem Wert vorgenommen werden, haben keinen Einfluss auf die ursprüngliche Variable in der aufrufenden Funktion. Dies bedeutet, dass die ursprünglichen Werte unverändert bleiben.

- **Pass by Reference (PBR)**: Bei dieser Methode wird die Adresse der Variablen an die Funktion übergeben. Dadurch kann die Funktion direkt auf die ursprüngliche Variable zugreifen und deren Wert ändern. Änderungen, die innerhalb der Funktion vorgenommen werden, wirken sich auf die ursprüngliche Variable aus.

Dieser Ordner enthält verschiedene C-Programme, die grundlegende Konzepte der Verwendung von Pointern in C demonstrieren. Die Programme sind:

1. **Inkrementfunktion mit Pass by Value** (`increment_pbv.c`)
2. **Inkrementfunktion mit Pass by Reference** (`increment_pbr.c`)
3. **Funktion zur Ausgabe eines Arrays** (`func_print_array.c`)
4. **Umkehrung eines Arrays** (`reverse_array.c`)
5. **Swap-Funktion mit Pass by Value** (`swap_call-by-value.c`)
6. **Swap-Funktion mit Pass by Reference** (`swap_call-by-reference.c`)

## Programme

### 1. Inkrementfunktion mit Pass by Value (`increment_pbv.c`)

Dieses Programm demonstriert die Pass-by-Value-Thematik, indem es eine Funktion zur Erhöhung eines Wertes implementiert. Der Wert in der aufrufenden Funktion bleibt unverändert.

```c
#include <stdio.h>

void increment(int number) {
    number++;
    printf("\tDer Wert von Nummer innerhalb der 'increment' Funktion lautet: %d\n", number);
}

int main() {
    int number = 1;
    printf("Der Wert von Nummer zu Beginn in der 'main' Funktion lautet: %d\n", number);
    increment(number);
    printf("Der Wert von Nummer am Ende der 'main' Funktion lautet weiterhin: %d\n", number);
    return 0;
}
```

### 2. Inkrementfunktion mit Pass by Reference (`increment_pbr.c`)

In diesem Programm wird die Pass-by-Reference-Thematik demonstriert. Der Wert der Variablen wird durch die Funktion verändert.

```c
#include <stdio.h>

void increment(int *number) {
    (*number)++;
    printf("\tDer Wert von Nummer innerhalb der 'increment' Funktion lautet: %d\n", *number);
}

int main() {
    int number = 1;
    printf("Der Wert von Nummer zu Beginn in der 'main' Funktion lautet: %d\n", number);
    increment(&number);
    printf("Der Wert von Nummer am Ende der 'main' Funktion lautet: %d\n", number);
    return 0;
}
```

### 3. Funktion zur Ausgabe eines Arrays (`func_print_array.c`)

Dieses Programm zeigt, wie man ein Array an eine Funktion übergibt. Arrays werden in C immer als Referenz übergeben, was bedeutet, dass Änderungen innerhalb der Funktion auch außerhalb sichtbar sind.

```c
#include <stdio.h>

void printArray(int list[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {1, 3, 6, 4, 8};
    printArray(numbers, 5);
    return 0;
}
```

### 4. Umkehrung eines Arrays (`reverse_array.c`)

In diesem Programm wird ein Array umgekehrt. Die Funktion erhält das Array als Referenz, sodass die Änderungen direkt am ursprünglichen Array vorgenommen werden.

```c
#include <stdio.h>

void reverse_array(int array[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    printf("Array vor der Umkehrung: ");
    print_array(array, 5);
    reverse_array(array, 5);
    printf("Array nach der Umkehrung: ");
    print_array(array, 5);
    return 0;
}
```
### 5. Swap-Funktion mit Pass by Value (`swap_call-by-value.c`)

In diesem Programm wird die Swap-Funktion mit Pass by Value demonstriert. Die ursprünglichen Werte bleiben unverändert.

```c
#include <stdio.h>

void swap(int number1, int number2) {
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

int main() {
    int number1 = 1, number2 = 2;
    printf("Main - Definierte Werte lauten: (%d, %d)\n", number1, number2);
    swap(number1, number2);
    printf("Main - Definierte Werte in Main lauten weiterhin: (%d, %d)\n", number1, number2);
    return 0;
}
```

### 6. Swap-Funktion mit Pass by Reference (`swap_call-by-reference.c`)

Dieses Programm demonstriert die Verwendung von Pass by Reference, um die Werte zweier Variablen zu tauschen.

```c
#include <stdio.h>

void swap(int *number1, int *number2) {
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

int main() {
    int number1 = 1, number2 = 2;
    printf("Main - Definierte Werte lauten: (%d, %d)\n", number1, number2);
    swap(&number1, &number2);
    printf("Main - Definierte Werte in Main lauten: (%d, %d)\n", number1, number2);
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
gcc -o increment_pbv increment_pbv.c
gcc -o increment_pbr increment_pbr.c
gcc -o func_print_array func_print_array.c
gcc -o reverse_array reverse_array.c
gcc -o swap_call_by_value swap_call-by-value.c
gcc -o swap_call_by_reference swap_call-by-reference.c
```

### Ausführung

Nach der Kompilierung können Sie die Programme mit den folgenden Befehlen ausführen:

```bash
# Ausführen der Programme
./increment_pbv
./increment_pbr
./func_print_array
./reverse_array
./swap_call_by_value
./swap_call_by_reference
```

## Hinweise

- Stellen Sie sicher, dass Sie GCC installiert haben. Auf den meisten Linux-Distributionen können Sie es mit dem Paketmanager installieren. Auf Windows können Sie MinGW verwenden.
- Achten Sie darauf, dass Sie die Programme im gleichen Verzeichnis ausführen, in dem Sie sie kompiliert haben.
- Diese Programme sind einfach gehalten, um grundlegende Konzepte zu demonstrieren. Sie können sie erweitern und anpassen, um mehr über C-Programmierung zu lernen.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0