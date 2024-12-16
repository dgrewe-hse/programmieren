# Beispiele für Verzweigungen und Logische Operatoren in C

Dieser Ordner enthält verschiedene C-Programme, die grundlegende Konzepte der Verzweigungen und logischen Operatoren demonstrieren. Die Programme sind:

1. **Berechnung des Body-Mass-Index (BMI)** (`bmi.c`)
2. **IF-Anweisungen** (`if.c`)
3. **Verschachtelte IF-Anweisungen** (`if_nested.c`)
4. **Verschachtelte und kombinierte IF-Anweisungen** (`if_nested_combined.c`)
5. **Logische Operatoren** (`logical_operands.c`)
6. **Zufallszahlenspiel** (`random_guess_game.c`)
7. **SWITCH-Anweisung** (`switch.c`)
8. **Wochentage mit SWITCH und ENUM** (`weekdays.c`)

## 1. Berechnung des Body-Mass-Index (BMI) (`bmi.c`)

Dieses Programm berechnet den BMI basierend auf dem Gewicht in Pfund und der Größe in Zoll.

### Code:
```c
#include <stdio.h>

const double KILOGRAM_PER_POUND = 0.45359237;
const double METERS_PER_INCH = 0.0254;

int main() {
    double weight;
    double height;

    printf("Bitte geben Sie das Gewicht in Pfund an: ");
    scanf("%lf", &weight);
    printf("Bitte geben Sie die Körpergöße in Zoll an: ");
    scanf("%lf", &height);

    double weightInKilogram = weight * KILOGRAM_PER_POUND;
    double heightInMeters = height * METERS_PER_INCH;
    double bmi = weightInKilogram / (heightInMeters * heightInMeters);

    printf("Ihr BMI Wert lautet: %lf -> ", bmi);
    if (bmi < 16)
        printf("Sie sind ernsthaft untergewichtig!");
    else if (bmi < 18)
        printf("Sie sind untergewichtig!");
    else if (bmi < 24)
        printf("Sie sind normalgewichtig!");
    else if (bmi < 29)
        printf("Sie sind übergewichtig!");
    else if (bmi < 35)
        printf("Sie sind ernsthaft übergewichtig!");
    else
        printf("Sie sind stark übergewichtig!");

    return 0;
}
```

## 2. IF-Anweisungen (`if.c`)

Dieses Programm demonstriert die Verwendung von IF-Anweisungen zur Überprüfung, ob eine Zahl gerade oder ungerade ist.

### Code:
```c
#include <stdio.h>

int main() {
    int number;

    printf("Geben Sie eine Zahl ein: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Die Zahl %i ist gerade.", number);
    }
    if (number % 2 != 0) {
        printf("Die Zahl %i ist ungerade.", number);
    }

    return 0;
}
```

## 3. Verschachtelte IF-Anweisungen (`if_nested.c`)

Dieses Programm zeigt, wie man verschachtelte IF-Anweisungen verwendet.

### Code:
```c
#include <stdio.h>

int main() {
    int i = 2;
    int j = 1;
    int k = 3;

    if (i > k) {
        if (j > k) {
            printf("i und j sind größer als k!");
        }
    }
    else {
        printf("i ist kleiner gleich k!");
    }

    return 0;
}
```

## 4. Verschachtelte und kombinierte IF-Anweisungen (`if_nested_combined.c`)

Dieses Programm demonstriert die Verwendung von kombinierten IF-Anweisungen.

### Code:
```c
#include <stdio.h>

int main() {
    int i = 2;
    int j = 1;
    int k = 3;

    if (i > k && j > k) {
        printf("i und j sind größer als k!");
    }
    else {
        printf("i ist kleiner gleich k!");
    }

    return 0;
}
```

## 5. Logische Operatoren (`logical_operands.c`)

Dieses Programm zeigt die Verwendung von logischen Operatoren in C.

### Code:
```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = 0;

    if (a > b && b > 0) {
        printf("Beide Werte in a und b sind größer als 0.\n");
    }

    if (a < b || c == 0) {
        printf("Entweder a ist kleiner als b, oder c ist gleich 0.\n");
    }

    if (!c) {
        printf("Wert in c ist gleich 0; dies entspricht 'unwahr'/false. Somit ist !c (nicht c) gleich 'wahr'.\n");
    }
    
    return 0;
}
```

## 6. Zufallszahlenspiel (`random_guess_game.c`)

Dieses Programm demonstriert die Verwendung eines Zufallszahlengenerators.

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
    } 
    else {
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

## 7. SWITCH-Anweisung (`switch.c`)

Dieses Programm demonstriert die Verwendung einer SWITCH-Anweisung.

### Code:
```c
#include <stdio.h>

int main(void) {
    char choice = 'N';
    switch (choice) {
        case 'Y':
            printf("Yes");
            break;
        case 'M':
            printf("Maybe");
            break;
        case 'N':
            printf("No");
            break;
        default:
            printf("Invalid input!");
    }

    return 0;
}
```

## 8. Wochentage mit SWITCH und ENUM (`weekdays.c`)

Dieses Programm zeigt die Verwendung einer SWITCH-Anweisung zusammen mit einer Enumeration (ENUM).

### Code:
```c
#include <stdio.h>

typedef enum {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Day;

int main() {
    Day today;
    today = WEDNESDAY;

    switch (today) {
        case SUNDAY:
            printf("Heute ist Sonntag.\n");
            break;
        case MONDAY:
            printf("Heute ist Montag.\n");
            break;
        case TUESDAY:
            printf("Heute ist Dienstag.\n");
            break;
        case WEDNESDAY:
            printf("Heute ist Mittwoch.\n");
            break;
        case THURSDAY:
            printf("Heute ist Donnerstag.\n");
            break;
        case FRIDAY:
            printf("Heute ist Freitag.\n");
            break;
        case SATURDAY:
            printf("Heute ist Samstag.\n");
            break;
        default:
            printf("Ungültige Eingabe.\n");
            break;
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
gcc -o bmi bmi.c
gcc -o if if.c
gcc -o if_nested if_nested.c
gcc -o if_nested_combined if_nested_combined.c
gcc -o logical_operands logical_operands.c
gcc -o random_guess_game random_guess_game.c
gcc -o switch switch.c
gcc -o weekdays weekdays.c
```

### Ausführung

Nach der Kompilierung können Sie die Programme mit den folgenden Befehlen ausführen:

```bash
# Ausführen der Programme
./bmi
./if
./if_nested
./if_nested_combined
./logical_operands
./random_guess_game
./switch
./weekdays
```

## Hinweise

- Stellen Sie sicher, dass Sie GCC installiert haben. Auf den meisten Linux-Distributionen können Sie es mit dem Paketmanager installieren. Auf Windows können Sie MinGW verwenden.
- Achten Sie darauf, dass Sie die Programme im gleichen Verzeichnis ausführen, in dem Sie sie kompiliert haben.
- Diese Programme sind einfach gehalten, um grundlegende Konzepte zu demonstrieren. Sie können sie erweitern und anpassen, um mehr über C-Programmierung zu lernen.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0