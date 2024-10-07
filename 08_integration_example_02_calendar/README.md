# Kalender-Anwendung

## Übersicht

Dieses Programm ist eine einfache Kalender-Anwendung, die den Monatskalender für einen gegebenen Monat und ein Jahr auf der Konsole ausgibt. Es berechnet den Starttag des Monats und gibt die Anzahl der Tage korrekt unter Berücksichtigung von Schaltjahren aus.

```bash
$ gcc -o kalendar calendar.c    # compile
$ ./kalendar                    # starten des Programms
Bitte geben Sie eine Jahreszahl an (z.B.: 2001): 2024
Bitte geben Sie eine Zahl für den Monat zwischen 1 und 12 an: 10
                Oktober 2024        
----------------------------------------------------
Sun     Mon     Tue     Wed     Thu     Fri     Sat
                1       2       3       4       5
6       7       8       9       10      11      12
13      14      15      16      17      18      19
20      21      22      23      24      25      26
27      28      29      30      31
```

## Benutzung

1.	Starte das Programm.
2.	Gib das Jahr ein, für das du den Kalender sehen möchtest (z.B. 2024).
3.	Gib den Monat als Zahl zwischen 1 und 12 ein (z.B. 10 für Oktober).
4.	Das Programm zeigt den Kalender für den gewünschten Monat und das Jahr an.

## Features

- Ausgabe des Monatsnamens und Jahres als Überschrift.
- Darstellung eines Monatskalenders mit Wochentagen (Sun, Mon, ...) und den entsprechenden Tagen.
- Berücksichtigung von Schaltjahren bei der Berechnung der Tage im Februar.
- Korrekte Berechnung des Starttags für jeden Monat und jedes Jahr ab dem 01.01.1800.

## Funktionsweise

Das Programm basiert auf einem festgelegten Ausgangspunkt: dem 1. Januar 1800, welcher ein Mittwoch war. Von dort aus berechnet das Programm den Wochentag für den ersten Tag des gewünschten Monats und Jahres, indem es die Gesamtanzahl der Tage seit dem 01.01.1800 ermittelt.

## Installation

Um das Programm auszuführen, wird ein C-Compiler benötigt. Für die Installation und Ausführung folgen Sie diesen Schritten:

Kompiliere den Code mit einem C-Compiler. Verwende zum Beispiel den folgenden Befehl, falls du `gcc` verwendest:

```bash
$ gcc -o kalender calendar.c
```

Starte Anschließend das Programm und gib die gewünschten Daten ein.

```bash
$ ./kalender
Bitte geben Sie eine Jahreszahl an (z.B.: 2001): ...
```
