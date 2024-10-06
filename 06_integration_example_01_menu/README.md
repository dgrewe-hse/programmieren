# C-Integrationsbeispiel: Einfaches Menüsystem

## Übersicht

Dieses Programm demonstriert grundlegende Sprachkonstrukte der Programmiersprache C 
anhand eines einfachen terminalbasierten Menüs. Es wurde entwickelt, um den Benutzer 
durch eine Menüstruktur zu führen, die mehrere Optionen wie das Öffnen und Bearbeiten 
von Dateien simuliert. Das Programm bleibt aktiv, bis der Benutzer die Option zum 
Beenden auswählt.

## Verwendete Sprachkonstrukte

Das Programm verwendet folgende C-Konstrukte:

- **`enum`**: Die Menüstruktur wird als Aufzählung definiert, wobei jeder Eintrag einem Menüpunkt entspricht.
- **Schleifen**: Eine `do-while`-Schleife zeigt das Menü wiederholt an, bis der Benutzer den Vorgang beendet.
- **`switch-case`-Anweisung**: Benutzeraktionen werden analysiert und entsprechend verarbeitet.
- **Benutzereingaben**: Mit der Funktion `getchar()` werden Eingaben von der Konsole entgegengenommen und interpretiert.

## Aufbau und Funktionsweise

### Menüstruktur
Die Menüstruktur wird über eine Aufzählung (`enum`) definiert, die folgende Einträge enthält:

- **FILE_OPEN**: Öffnet eine Datei.
- **FILE_EXIT**: Beendet das Programm.
- **EDIT_COPY**: Kopiert Inhalte.
- **EDIT_PASTE**: Fügt Inhalte ein.

### Programmablauf
1. Das Programm startet und zeigt eine Menüauswahl auf der Konsole an.
2. Der Benutzer wird aufgefordert, eine Eingabe zu machen (zum Beispiel `O` für Öffnen, `C` für Kopieren, usw.).
3. Die Benutzereingabe wird über eine `switch-case`-Anweisung überprüft, und das entsprechende Menü wird ausgeführt.
4. Die Schleife läuft so lange weiter, bis der Benutzer `E` (für Beenden) auswählt.

## Zweck des Beispiels

Dieses Beispiel zeigt, wie man in C ein einfaches interaktives Menü implementieren kann, um dem Benutzer verschiedene Optionen zur Auswahl zu stellen. Es verdeutlicht, wie man mit `enum`-Typen, Schleifen und der Eingabe-/Ausgabesteuerung arbeitet. Das Beispiel ist nützlich für C-Einsteiger, um die Grundlagen von Programmabläufen und Benutzereingaben zu erlernen.


## Ausführung

Kompilieren Sie den Code mit folgendem Befehl:

```bash
$ gcc -o menu menu.c
```