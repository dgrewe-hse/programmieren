# C Programmbeispiele

Dieser Ordner enthält einfache C-Programme, die grundlegende Konzepte einer der ersten Übungen in der Programmierung demonstrieren. Die Programme sind:

1. **Hallo Welt Programm** (`hello_world.c`)
2. **Mehrwertsteuer Berechnung** (`calc_mwst.c`)
3. **Wertformatierung** (`formatter.c`)

## 1. Hallo Welt Programm (`hello_world.c`)

Dieses Programm gibt einfach den Text "Hallo Welt!" auf der Konsole aus. Es ist das klassische Beispiel für den Einstieg in die Programmierung.

### Code:
```c
#include <stdio.h>

int main() {
    printf("Hallo Welt!\n");
    return 0;
}
```

## 2. Mehrwertsteuer Berechnung (`calc_mwst.c`)

Dieses Programm berechnet die Mehrwertsteuer für einen eingegebenen Nettobetrag. Der Benutzer wird aufgefordert, einen Betrag einzugeben, und das Programm gibt den Gesamtbetrag inklusive Mehrwertsteuer aus.

### Code:
```c
#include <stdio.h>

#define MWST 1.19

int main(void) {
    float betrag, ges_betrag;
    printf("Nettobetrag in Euro: ");
    scanf("%f", &betrag);
    ges_betrag = betrag * MWST;
    printf("Der Gesamtbetrag ist %f\n", ges_betrag);
    return 0;
}
```

## 3. Wertformatierung (`formatter.c`)

Dieses Programm zeigt, wie man verschiedene Datentypen in C formatiert ausgibt. Es demonstriert die Verwendung von Formatbezeichnern für Ganzzahlen und Gleitkommazahlen.

### Code:
```c
#include <stdio.h>

int main(void) {
    int zahl = 2002;
    float gk = 12.34f;

    printf("%d\n", zahl);
    printf("%8d\n", zahl);
    printf("%-8d\n", zahl);
    printf("%o\n", zahl);
    printf("%x\n", zahl);
    printf("\n\n%f\n", gk);
    printf("%8.2f\n", gk);
    printf("%8.1f\n", gk);
    printf("\nNr\tPreis\n");
    printf("%3d\t%6.2f\n", 1, 1.5);
    printf("%3d\t%6.2f\n", 101, 121.5);
    return 0;
}
```

## Kompilierung und Ausführung

### Voraussetzungen

Um die Programme auszuführen, benötigen Sie:
- Einen C-Compiler (z.B. [GCC](https://gcc.gnu.org/))
- Eine Entwicklungsumgebung oder ein Terminal

### Kompilierung

Um die Programme zu kompilieren, öffnen Sie ein Terminal und navigieren Sie zu dem Verzeichnis, in dem sich die C-Dateien befinden. Verwenden Sie die folgenden Befehle:

```bash
# Kompilieren des Hallo Welt Programms
gcc -o hello_world hello_world.c

# Kompilieren des Mehrwertsteuer Programms
gcc -o calc_mwst calc_mwst.c

# Kompilieren des Formatierungs Programms
gcc -o formatter formatter.c
```

### Ausführung

Nach der Kompilierung können Sie die Programme mit den folgenden Befehlen ausführen:

```bash
# Ausführen des Hallo Welt Programms
./hello_world

# Ausführen des Mehrwertsteuer Programms
./calc_mwst

# Ausführen des Formatierungs Programms
./formatter
```

## Hinweise

- Stellen Sie sicher, dass Sie GCC installiert haben. Auf den meisten Linux-Distributionen können Sie es mit dem Paketmanager installieren. Auf Windows können Sie MinGW verwenden.
- Achten Sie darauf, dass Sie die Programme im gleichen Verzeichnis ausführen, in dem Sie sie kompiliert haben.
- Die Programme sind einfach gehalten, um grundlegende Konzepte zu demonstrieren. Sie können sie erweitern und anpassen, um mehr über C-Programmierung zu lernen.
