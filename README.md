# Vorlesung Programmieren in C an der Hochschule Esslingen (IT1-PRG)

    Disclaimer: This repository contains example code as part of the Programming module (IT1-PRG) 
    at Esslingen University of Applied Sciences. All contents are for educational purposes only. 
    I do not intend for the content to be a substitute for professional usage and do not provide
    any guarantee for completness of the code.

The following documentation is only available in German.

Dieses Programmcode Repository beinhaltet Programmbeispiele im Rahmen der Vorlesung "Programmieren" 
(IT1-PRG) an der Hochschule Esslingen. Bitte beachten Sie folgende Ausschlussklausel:

    Ausschlussklausel: Alle Inhalte dienen ausschließlich Bildungszwecken. 
    Der Inhalt ist nicht für die professionelle Nutzung gedacht und gibt keine
    Garantie auf Vollständigkeit oder Lauffähigkeit.

Dieses Projekt dient als Einführung in die Programmiersprache C und umfasst verschiedene Beispiele, die grundlegende Konzepte und Techniken der Programmierung demonstrieren. Die Beispiele sind in verschiedene Themenbereiche unterteilt, um das Lernen zu erleichtern und basieren auf der Vorlesung "Programmieren in C" an der Hochschule Esslingen.

## Voraussetzungen

Um die Beispiele lokal auszuführen, benötigen Sie Folgendes auf Ihrem Rechner installiert:

- **GCC (GNU Compiler Collection)**: Ein C-Compiler, um die Programme zu kompilieren: [gcc](https://gcc.gnu.org/) oder auch das moderne [clang](https://clang.llvm.org/) ist möglich.
- **Make**: Ein Build-Tool, um Makefiles zu verwenden (optional, aber empfohlen): [make](https://www.gnu.org/software/make/)

### Installation von GCC und Make

- **Linux**: Verwenden Sie den Paketmanager Ihrer Distribution, z.B. apt, um gcc und make als Teil des Build-Essentials zu installieren:

  ```bash
  sudo apt install build-essential
  ```
- **macOS**: Installieren Sie Xcode Command Line Tools:

  ```bash
  xcode-select --install
  ```
- **Windows**: Installieren Sie [MinGW](https://www.mingw-w64.org/) oder [Cygwin](https://www.cygwin.com/), um GCC und Make zu erhalten. Informationen hierzu finden Sie im Moodle Kurs zur Vorlesung.

## Programmcode von GitHub herunterladen (klonen)

Um das Projekt in ein lokales Verzeichnis auf Ihrem Rechner herunterzuladen (klonen), verwenden Sie den folgenden Befehl in einem Terminal (Konsole):
Evtl. ist es notwendig, zuerst git zu installieren. Informationen hierzu finden Sie auf der [git-Website](https://git-scm.com/).

```bash
git clone https://github.com/dgrewe-hse/programmieren.git
```

Alternativ können Sie das Projekt auch direkt in Microsoft Visual Studio Code öffnen. Dazu klicken Sie auf den Button "Clone Git Repository" auf der Startseite von Visual Studio Code und geben den folgenden URL ein:
```
https://github.com/dgrewe-hse/programmieren.git
```

## Inhalte 

Das Projekt besteht aus mehreren Unterordnern, welche nach Kapiteln der Vorlesung strukturiert sind. Jeder Unterordner enthält eine Beschreibung, welche eine kurze Beschreibung des Inhalts des Unterordners enthält. Die Links in der Tabelle führen zu den jeweiligen Beschreibungen.

| Ordner                          | Inhalt                             |
|---------------------------------|------------------------------------|
| 01_intro                        | [Einführung in die Programmierung in C](01_intro/README.md)|
| 02_numbers_datatypes            | [Zahlen und Datentypen](02_numbers_datatypes/README.md) |
| 03_operands                     | [Operatoren](03_operands/README.md) |
| 04_control                      | [Kontrollstrukturen](04_control/README.md)  |
| 05_loops                        | [Schleifen](05_loops/README.md)    |
| 06_integration_example_01_menu  | [Integration Beispiel 1: Menü](06_integration_example_01_menu/README.md) |
| 07_functions                    | [Funktionen](07_functions/README.md) |
| 08_integration_example_02_calendar  | [Integration Beispiel 2: Kalender](08_integration_example_02_calendar/README.md) |
| 09_arrays                       | [Arrays](09_arrays/README.md) |
| 10_pointers                     | [Zeiger](10_pointers/README.md) |
| 11_func_advc_and_call-by-value_reference  | [Funktionen (Fortgeschritten) und Call-by-Value/Reference](11_func_advc_and_call-by-value_reference/README.md) |
| 12_arrays_and_pointers          | [Arrays und Zeiger](12_arrays_and_pointers/README.md) |
| 13_recursion                    | [Rekursion](13_recursion/README.md) |
| 14_data_structures              | [Datenstrukturen](14_data_structures/README.md) |
| 15_linked_lists                 | [Verkettete Listen](15_linked_lists/README.md) |
| 16_func_as_params               | [Funktionen als Parameter](16_func_as_params/README.md) |
| 17_file_operations              | [Dateioperationen](17_file_operations/README.md) |
| 18_program_args                 | [Programmargumente](18_program_args/README.md) |

## Ausführen

Um die Programme zu kompilieren und auszuführen, navigieren Sie in das entsprechende Verzeichnis und verwenden Sie die folgenden Befehle in einem Terminal (Konsole):

```bash
$ cd 01_intro                   # wechseln in den Unterordner 01_intro der Einführung
$ gcc -o hallo hallo_welt.c     # -o für den Namen des ausführbaren Programms gefolgt von der Datei mit dem Quellcode
$ ./hallo                       # anschließend ausführen der übersetzten Programms
```

### Makefiles

Einige Projektordner (ab Kapitel 15) enthalten Makefiles, welche die Kompilierung und Ausführung der Programme vereinfachen. Nutzen Sie folgende Befehle, um die Programme zu kompilieren und auszuführen:

1. **Kompilieren**:
   ```bash
   make all
   ```

2. **Hilfe**:
   ```bash
   make help
   ```

3. **Programm ausführen**:
   ```bash
   make <programmname>
   ```

Ersetzen Sie `programmname` durch den Namen des gewünschten Programms. Konsultieren Sie die Hilfe, um zu sehen, welche Programme verfügbar sind.

4. **Aufräumen**: Um alle kompilierten Dateien zu löschen, verwenden Sie:
   ```bash
   make clean
   ```

## Fazit

Dieses Projekt bietet eine umfassende Einführung in die Programmierung mit C und ist eine wertvolle Ressource für Studierende, die ihre Programmierkenntnisse entwickeln möchten. Nutzen Sie die bereitgestellten Beispiele und Anleitungen, um Ihre Fähigkeiten zu verbessern.

## Lizenz

Copyright 2024, Lizenziert unter der Apache License, Version 2.0