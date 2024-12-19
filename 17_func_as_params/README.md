# Kapitel 17: Funktionen als Parameter in C

In der C-Programmierung ist es möglich, Funktionen als Parameter an andere Funktionen zu übergeben. Dies wird durch die Verwendung von Funktionszeigern erreicht. Funktionszeiger ermöglichen es, die Funktion, die aufgerufen werden soll, zur Laufzeit auszuwählen, was eine flexible und modulare Programmierung ermöglicht.

## Vorteile der Verwendung von Funktionszeigern

- **Flexibilität**: Sie können verschiedene Funktionen zur Laufzeit auswählen, ohne den Code ändern zu müssen.
- **Modularität**: Funktionen können als Parameter an andere Funktionen übergeben werden, was die Wiederverwendbarkeit des Codes erhöht.
- **Callback-Funktionen**: Sie ermöglichen die Implementierung von Callback-Mechanismen, die in vielen Anwendungen nützlich sind.

## Codebeispiele

In diesem Repository finden Sie zwei Beispiele, die die Verwendung von Funktionszeigern demonstrieren:

1. **Calculator** (`calculator.c`): Ein einfacher Rechner, der zwei Zahlen einliest und eine der vier Grundrechenarten (Addition, Subtraktion, Multiplikation, Division) auswählt, die über Funktionszeiger aufgerufen wird.

2. **Plot** (`plot.c`): Ein Programm, das die Funktionen `sin(x)`, `cos(x)` und eine benutzerdefinierte Funktion `my_sinus_function(x)` plottet. Die Plot-Funktion nimmt einen Funktionszeiger als Parameter, um die gewünschte Funktion zu zeichnen.

### 1. Calculator (`calculator.c`)

Dieses Programm liest zwei double-Werte von der Konsole ein und fragt den Benutzer nach der gewünschten Operation. Die tatsächliche Funktionsaufruf erfolgt über einen Zeiger auf die ausgewählte Funktion.

```c
#include <stdio.h>
#include <math.h>

// Funktionsprototypen
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    double num1, num2;
    int operation;
    double (*operationPtr)(double, double); // Pointer to function

    // Eingabe der zwei Zahlen
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%lf", &num1);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%lf", &num2);

    // Auswahl der Operation
    printf("Wählen Sie die Operation:\n");
    printf("1: Addition\n");
    printf("2: Subtraktion\n");
    printf("3: Multiplikation\n");
    printf("4: Division\n");
    printf("Geben Sie Ihre Wahl ein (1-4): ");
    scanf("%d", &operation);

    // Zuweisung der entsprechenden Funktion basierend auf der Auswahl
    switch (operation) {
        case 1:
            operationPtr = add;
            break;
        case 2:
            operationPtr = subtract;
            break;
        case 3:
            operationPtr = multiply;
            break;
        case 4:
            operationPtr = divide;
            break;
        default:
            printf("Ungültige Auswahl!\n");
            return 1; // Programm mit Fehler beenden
    }

    // Funktionsaufruf über den Funktionszeiger
    double result = operationPtr(num1, num2);
    printf("Das Ergebnis ist: %.2f\n", result);

    return 0;
}
```

### 2. Plot (`plot.c`)

Dieses Programm zeigt die Verwendung von Funktionszeigern, um verschiedene mathematische Funktionen zu plotten.

```c
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

double my_sinus_function(double x);
void plot_function(double (*toPlotFunc)(double));

int main() {
    printf("\n\n --------------- sin(x) ---------------:\n");
    plot_function(sin);
    printf("\n\n --------------- cos(x) ---------------:\n");
    plot_function(cos);
    printf("\n\n --------------- my_sinus_function(x) ---------------:\n");
    plot_function(my_sinus_function);
    
    return 0;
}

double my_sinus_function(double x) {
    return sin(x*x);
}

void plot_function(double (*toPlotFunc)(double)) {
    for (double x = 0.; x < 2. * PI; x += 0.2) {
        double y = toPlotFunc(x);
        printf("\n%12g, %12g: ", x, y);
        for (int i = 0; i < (int) ((y + 1.) * 20.0); i++) {
            printf("*");
        }
    }
}
```

## Kompilierung und Ausführung

Um die Programme zu kompilieren und auszuführen, verwenden Sie das bereitgestellte Makefile.

### Schritte zur Verwendung des Makefiles

1. **Makefile speichern**: Stellen Sie sicher, dass sich das Makefile im gleichen Verzeichnis wie die Quellcodes (`calculator.c` und `plot.c`) befindet.

2. **Terminal öffnen**: Öffnen Sie ein Terminal und navigieren Sie zu dem Verzeichnis, in dem sich die Dateien befinden.

3. **Kompilieren**: Führen Sie den folgenden Befehl aus, um alle Programme zu kompilieren:
   ```bash
   make
   ```

4. **Programme ausführen**: Sie können die Programme einzeln oder alle zusammen ausführen:
   - Um den Rechner auszuführen:
     ```bash
     make run-calculator
     ```
   - Um das Plot-Programm auszuführen:
     ```bash
     make run-plot
     ```
   - Um alle Programme auszuführen:
     ```bash
     make run-all
     ```

5. **Aufräumen**: Um alle kompilierten Dateien zu löschen, verwenden Sie:
   ```bash
   make clean
   ```

## Übungsaufgabe

Um den Umgang mit Funktionszeigern zu vertiefen ist hier eine weitere Übungsaufgabe:


Erstellen Sie ein Programm, das vom Benutzer drei Zahlen einliest:
    * den Tag (1-31), 
    * den Monat (1-12) 
    * und das Jahr

Schreiben Sie drei Funktionen mit gleicher Signatur, die drei int-Parameter erhalten und als Datum auf der Konsole ausgeben:
1. In der deutschen Form: TT.MM.JJJJ
2. In der amerikanischen Form: MM/TT/JJJJ
3. Nach ISO8601: JJJJ-MM-TT

Schreiben Sie eine Funktion `ausgabeDatum`, die neben drei int-Parametern auch einen Funktionspointer als Parameter hat (mit der Signatur der 3 o.g. Funktionen). Die Funktion `ausgabeDatum` soll den Funktionspointer für einen Aufruf nutzen und die 3 int-Parameter übergeben.

Im Hauptprogramm soll `ausgabeDatum` dann 3mal aufgerufen werden, jeweils mit einem anderen Funktionspointer.

## Fazit

Die Verwendung von Funktionszeigern als Parameter in C ermöglicht eine flexible und modulare Programmierung. Die bereitgestellten Beispiele zeigen, wie Sie diese Technik in Ihren Programmen anwenden können. Nutzen Sie das Makefile, um die Kompilierung und Ausführung der Programme zu erleichtern.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0