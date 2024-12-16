# Beispiele für Schleifen in C

Dieser Ordner enthält verschiedene C-Programme, die grundlegende Konzepte der Schleifen in C demonstrieren. Die Programme sind:

1. **Berechnung des Größten Gemeinsamen Teilers (ggT)** (`ggt.c`)
2. **Zufallszahlenspiel mit DO-WHILE-Schleife** (`guess_game_do-while.c`)
3. **Multiplikationstabelle** (`multiplication_table.c`)
4. **Zufallszahlenspiel** (`random_guess_game.c`)
5. **Quadratzahlen mit WHILE-Schleife** (`square_while.c`)
6. **Testprogramm für Schleifen** (`test_program.c`)
7. **Quadratzahlen mit FOR-Schleife** (`square_for.c`)

## 1. Berechnung des Größten Gemeinsamen Teilers (ggT) (`ggt.c`)

Dieses Programm berechnet den größten gemeinsamen Teiler (ggT) zweier eingegebener Ganzzahlen.

### Code:
```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Bitte geben Sie eine Ganzzahl für 'a' an: ");
    scanf("%d", &a);
    printf("Bitte geben Sie eine Ganzzahl für 'b' an: ");
    scanf("%d", &b);

    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }

    printf("Der größte gemeinsame Teiler lautet: %d", a);

    return 0;
}
```

## 2. Zufallszahlenspiel mit DO-WHILE-Schleife (`guess_game_do-while.c`)

Dieses Programm verwendet eine DO-WHILE-Schleife, um den Benutzer zu bitten, eine Zufallszahl zu erraten.

### Code:
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess;
    int tries = 0;

    srand(time(0));
    randomNumber = rand() % 100; 

    do {
        printf("Bitte erraten Sie die Nummer (zwischen 0 und 99): ");
        scanf("%d", &userGuess);
        tries++;

        if (userGuess == randomNumber) {
            printf("Sie haben die Zahl: %d korrekt erraten!\n", randomNumber);
            printf("Sie haben %d Versuche benötigt\n", tries);
        } else if (userGuess < randomNumber) {
            printf("Falsch. Die gesuchte Zahl ist größer als: %d\n", userGuess);
        } else {
            printf("Falsch. Die gesuchte Zahl ist kleiner als: %d\n", userGuess);
        }
    } while (userGuess != randomNumber);

    return 0;
}
```

## 3. Multiplikationstabelle (`multiplication_table.c`)

Dieses Programm gibt die Multiplikationstabelle für die Zahlen 1 bis 10 aus.

### Code:
```c
#include <stdio.h>

int main() {
    printf("Multiplikationstabelle - Das kleine Einmaleins:\n\n");

    printf("   ");
    for (int i = 1; i <= 10; i++) {
        printf("%4d", i);
    }
    printf("\n");

    printf("   ");
    for (int i = 1; i <= 10; i++) {
        printf("----");
    }
    printf("\n");

    for (int i = 1; i <= 10; i++) {
        printf("%2d |", i);
        for (int j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}
```

## 4. Zufallszahlenspiel (`random_guess_game.c`)

Dieses Programm fordert den Benutzer auf, eine Zufallszahl zu erraten, die zwischen 0 und 100 liegt.

### Code:
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guessedNumber;

    srand(time(0));
    randomNumber = rand() % 101;  

    printf("Geben Sie eine Zahl zwischen 0 und 100 ein: ");
    scanf("%d", &guessedNumber);

    if (guessedNumber < 0 || guessedNumber > 100) {
        printf("Bitte geben Sie eine Zahl zwischen 0 und 100 ein.\n");
        return 1;
    }

    if (guessedNumber == randomNumber) {
        printf("Gratulation! Sie haben die richtige Zahl geraten.\n");
    } else {
        printf("Ihre geratene Zahl war %d.\n", guessedNumber);
        if (guessedNumber > randomNumber) {
            printf("Die richtige Zahl ist kleiner.\n");
        } else {
            printf("Die richtige Zahl ist größer.\n");
        }
        printf("Die zufällig generierte Zahl war %d.\n", randomNumber);
    }

    return 0;
}
```

## 5. Quadratzahlen mit WHILE-Schleife (`square_while.c`)

Dieses Programm berechnet die Quadratzahlen von 1 bis zu einer vom Benutzer eingegebenen Zahl.

### Code:
```c
#include <stdio.h>

int main() {
    int n;
    int i = 1;

    printf("Bittte geben Sie eine Ganzzahl ein: ");
    scanf("%d", &n);

    printf("Die Quadratzahlen von 1 bis %d lauten:\n", n);
    while (i <= n) {
        printf("%d^2 = %d\n", i, i * i);
        i++;
    }

    return 0;
}
```

## 6. Testprogramm für Schleifen (`test_program.c`)

Dieses Programm demonstriert die Verwendung einer WHILE-Schleife zur Berechnung einer Folge.

### Code:
```c
#include <stdio.h>

int main() {
    int n = 100;

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        printf("%d\n", n);
    }

    return 0;
}
```

## 7. Quadratzahlen mit FOR-Schleife (`square_for.c`)

Dieses Programm berechnet die Quadratzahlen von 1 bis zu einer vom Benutzer eingegebenen Zahl unter Verwendung einer FOR-Schleife.

### Code:
```c
#include <stdio.h>

int main() {
    int n;

    printf("Bittte geben Sie eine Ganzzahl ein: ");
    scanf("%d", &n);

    printf("Die Quadratzahlen von 1 bis %d lauten:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d^2 = %d\n", i, i * i);
    }

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
gcc -o ggt ggt.c
gcc -o guess_game_do_while guess_game_do-while.c
gcc -o multiplication_table multiplication_table.c
gcc -o random_guess_game random_guess_game.c
gcc -o square_while square_while.c
gcc -o test_program test_program.c
gcc -o square_for square_for.c
```

### Ausführung

Nach der Kompilierung können Sie die Programme mit den folgenden Befehlen ausführen:

```bash
# Ausführen der Programme
./ggt
./guess_game_do_while
./multiplication_table
./random_guess_game
./square_while
./test_program
./square_for
```

## Hinweise

- Stellen Sie sicher, dass Sie GCC installiert haben. Auf den meisten Linux-Distributionen können Sie es mit dem Paketmanager installieren. Auf Windows können Sie MinGW verwenden.
- Achten Sie darauf, dass Sie die Programme im gleichen Verzeichnis ausführen, in dem Sie sie kompiliert haben.
- Diese Programme sind einfach gehalten, um grundlegende Konzepte zu demonstrieren. Sie können sie erweitern und anpassen, um mehr über C-Programmierung zu lernen.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0