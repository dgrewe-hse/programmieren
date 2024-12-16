# Beispiele für Operanden in C

Dieser Ordner enthält verschiedene C-Programme, die grundlegende Konzepte im Umgang mit Operanden demonstrieren. Die Programme sind:

1. **Umrechnung von Sekunden in Minuten** (`calc_seconds_into_minutes.c`)
2. **Vergleichsoperatoren** (`comparison_operands.c`)
3. **Berechnung der Kreisfläche** (`circle_area.c`)
4. **Mehrwertsteuerberechnung** (`mwst_decimal.c`)
5. **Überlauf-Demonstration** (`overflow.c`)

## 1. Umrechnung von Sekunden in Minuten (`calc_seconds_into_minutes.c`)

Dieses Programm konvertiert eine eingegebene Anzahl von Sekunden in Minuten und verbleibende Sekunden.

### Code:
```c
#include <stdio.h>

int main() {
    int seconds;
    int minutes;
    int remainingSeconds;

    scanf("%d", &seconds);

    minutes = seconds / 60;
    remainingSeconds = seconds % 60;

    printf("%i seconds are %i minutes and %i seconds", 
        seconds, minutes, remainingSeconds);
    return 0;
}
```

### Erklärung:
- Der Benutzer gibt eine Anzahl von Sekunden ein.
- Das Programm berechnet die Minuten und die verbleibenden Sekunden und gibt das Ergebnis aus.

## 2. Vergleichsoperatoren (`comparison_operands.c`)

Dieses Programm demonstriert die Verwendung von Vergleichsoperatoren in C.

### Code:
```c
#include <stdio.h>

int main() {
    printf("7 < 10: %i\n", (7 < 10));
    printf("4 > 3: %i\n", (4 > 3));
    printf("5 <= 6: %i\n", (5 <= 6));
    printf("17.0 >= 3.5: %i\n", (17.0 >= 3.5));

    return 0;
}
```

### Erklärung:
- Das Programm führt verschiedene Vergleichsoperationen durch und gibt die Ergebnisse (1 für wahr, 0 für falsch) auf der Konsole aus.

## 3. Berechnung der Kreisfläche (`circle_area.c`)

Dieses Programm berechnet die Fläche eines Kreises basierend auf einem gegebenen Radius.

### Code:
```c
#include <stdio.h>

int main() {
    const float PI = 3.14159;
    double radius, area;
    radius = 20;
    area = radius * radius * PI;
    printf("Ergebnis Kreisflaeche mit Radius %f: %f", radius, area);

    return 0;
}
```

### Erklärung:
- Der Radius des Kreises wird festgelegt, und die Fläche wird mit der Formel \( \text{Fläche} = \pi \times \text{Radius}^2 \) berechnet und ausgegeben.

## 4. Mehrwertsteuerberechnung (`mwst_decimal.c`)

Dieses Programm berechnet die Mehrwertsteuer für einen eingegebenen Betrag.

### Code:
```c
#include <stdio.h>

int main() {
    double purchaseAmount;

    printf("Bitte den Grundbetrag angeben: ");
    scanf("%lf", &purchaseAmount);

    double tax = purchaseAmount * 0.19;

    printf("Sales tax is : %.2lf\n", ((int)(tax * 100) / 100.0));

    return 0;
}
```

### Erklärung:
- Der Benutzer gibt den Grundbetrag ein, und das Programm berechnet die Mehrwertsteuer (19%) und gibt das Ergebnis aus.

## 5. Überlauf-Demonstration (`overflow.c`)

Dieses Programm zeigt, was passiert, wenn ein Überlauf bei einer `char`-Variablen auftritt.

### Code:
```c
#include <stdio.h>

int main() {
    unsigned char a = 255;

    printf("Initial value of a: %u\n", a);

    a = a + 1;

    printf("Value of a after overflow: %u\n", a);

    return 0;
}
```

### Erklärung:
- Eine `unsigned char`-Variable wird auf 255 gesetzt. Wenn 1 hinzugefügt wird, tritt ein Überlauf auf, und der Wert wird auf 0 zurückgesetzt.

## Kompilierung und Ausführung

### Voraussetzungen

Um die Programme auszuführen, benötigen Sie:
- Einen C-Compiler (z.B. GCC)
- Eine Entwicklungsumgebung oder ein Terminal

### Kompilierung

Um die Programme zu kompilieren, öffnen Sie ein Terminal und navigieren Sie zu dem Verzeichnis, in dem sich die C-Dateien befinden. Verwenden Sie die folgenden Befehle:

```bash
# Kompilieren der Programme
gcc -o calc_seconds_into_minutes calc_seconds_into_minutes.c
gcc -o comparison_operands comparison_operands.c
gcc -o circle_area circle_area.c
gcc -o mwst_decimal mwst_decimal.c
gcc -o overflow overflow.c
```

### Ausführung

Nach der Kompilierung können Sie die Programme mit den folgenden Befehlen ausführen:

```bash
# Ausführen der Programme
./calc_seconds_into_minutes
./comparison_operands
./circle_area
./mwst_decimal
./overflow
```

## Hinweise

- Stellen Sie sicher, dass Sie GCC installiert haben. Auf den meisten Linux-Distributionen können Sie es mit dem Paketmanager installieren. Auf Windows können Sie MinGW verwenden.
- Achten Sie darauf, dass Sie die Programme im gleichen Verzeichnis ausführen, in dem Sie sie kompiliert haben.
- Diese Programme sind einfach gehalten, um grundlegende Konzepte zu demonstrieren. Sie können sie erweitern und anpassen, um mehr über C-Programmierung zu lernen.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0