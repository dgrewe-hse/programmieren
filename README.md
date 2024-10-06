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



## Vorbedingungen

Um die Beispiele in Maschinensprache zu übersetzen und anschließend auszuführen benötigt man eine Compiler-Infrastruktur.
In der Veranstaltung nutzen wir [gcc](https://gcc.gnu.org/) unter Linux, aber auch das modernere [clang](https://clang.llvm.org/) ist möglich.

Bitte installieren Sie eines dieser Compiler-Infrastrukturen auf Ihrem Rechner.


## Ausführen

Innerhalb der Unterordern, welche nach Kapiteln der Vorlesung strukturiert sind, finden Sie Quelldateien der Beispiele aus der Vorlesung.
Diese können Sie mit folgender Befehlstruktur in Maschineninstruktionen überführen:

```bash
$ cd 01_intro # wechseln in den Unterordner 01_intro der Einführung
$ gcc -o hallo hallo_welt.c     # -o für den Namen des ausführbaren Programms gefolgt von der Datei mit dem Quellcode
$ ./hallo                       # anschließend ausführen der übersetzten Programms
```

