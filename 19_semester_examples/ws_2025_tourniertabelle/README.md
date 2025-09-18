# Spieltabelle für Sportereignisse

## Übersicht

Dieses Programm ist eine einfache Spieltabelle für Sportereignisse. Es ermöglicht die Eingabe von Spielen und deren Ergebnissen in einem Turnier.

Das Programm wird gemeinschaftlich über das Semester hinweg entwickelt.
Diese Dokumentation wird entsprechend aktualisiert.

## Lernziele

* Üben des Einsatzes der gelernten Konzepte der Programmiersprache C.

## Aufgabenstellung

Erstellen Sie ein vollständiges C-Programm, das es ermöglicht, die Sportergebnisse eines Spieltages (z.B.: eines Fußballturniers, Handballturniers, etc.) vom Benutzer ausgewählten Partien (von acht) einzugeben und nach jedem Spieltag die aktuelle Tabelle entsprechend den Ergebnissen darzustellen. 
Die Tabelle soll hierbei in einem dynamischen Array mit Einsatz von Pointern gespeichert werden. Folgende Spalten sollen vorhanden sein:
* Mannschaft
* Gewonnen
* Unentschieden
* Verloren
* Punkte

Die Kommunikation mit dem Benutzer soll mithilfe einer Text-Benutzer-Schnittstelle erfolgen über die Konsole erfolgen.

### Weitere Annahmen

Die weiteren Annahmen sollen gelten:
* Initialisierung: Es soll zwei Möglichkeiten zur Initialisierung der Mannschaften zur Verfügung stehen:
  * Manuell durch den Benutzer
  * Aus einer vordefinierten Menge
* Der Speicher des Programms soll dynamisch verwaltet werden.
* Spiele/Gruppierung an jedem Spieltag sind vorgegeben.

In unserem Beispiel werden wir ein Fußballturnier wie die anstehende FIFA World Cup 2026 annehmen. Hinweis: Die tatsächlichen Teams und Gruppierungen stehen zum aktuellen Zeitpunkt (September 2025) noch nicht fest.


## Struktur des Programms

Eine Mannschaftstabelle besteht aus einer festen Anzahl von Spalten und Zeilen. In diesem Beispiel nehmen wir an, dass die Tabelle 4 Spalten und 6 Zeilen hat.

| Group | Contestant1 | Contestant2 | Contestant3 | Contestant4 |
|-------|-------------|-------------|-------------|-------------|
| A     |   Team1     |   Team2     |   Team3     |   Team4     |
| B     |   Team5     |   Team6     |   Team7     |   Team8     |
| C     |   Team9     |   Team10    |   Team11    |   Team12    |
| ...   |   ...       |   ...       |   ...       |   ...       |

Basierend auf der Struktur der Mannschaftstabelle und den pot. Gruppierungen kann eine Spieltagtabelle als 5x4 Matrix mit folgender Struktur definiert werden:

| Team | Gewonnen | Unentschieden | Verloren | Punkte |
|------|----------|---------------|----------|--------|
| Team1|    0     |       0       |    0     |    0   |
| Team2|    0     |       0       |    0     |    0   |
| Team3|    0     |       0       |    0     |    0   |
| Team4|    0     |       0       |    0     |    0   |
| ...  |   ...    |   ...         |   ...    |   ...  |



