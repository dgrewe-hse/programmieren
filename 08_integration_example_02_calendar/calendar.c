/*
 * Copyright 2024
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * File: calendar.c
 * Description: Integrationsbeispiel einer Kalendar-Anwendung, welche den aktuellen
 *              Monat auf der Konsole ausgibt.
 * Author: Dennis Grewe
 * Date: October 07th, 2024
 */
#include <stdio.h>
#include <stdbool.h>

// ---------------------------
// FUNKTIONSPROTOTYPEN

void printCalendar(int month, int year);
void printMonthTitle(int month, int year);
void printMonthName(int month);
void printMonthBody(int month, int year);
int getStartDay(int month, int year);
int getTotalNumberOfDays(int month, int year);
int getNumberOfDaysInMonth(int month, int year);
bool isLeapYear(int year);

// ---------------------------

// ---------------------------
// MAIN

int main() {
    // Deklaration der benötigten Variablen "year" und "month"
    int year, month;

    do {
        // Benutzer um Jahr und Monat bitten
        printf("Bitte geben Sie eine Jahreszahl an (z.B.: 2001): ");
        scanf("%d", &year);
        printf("Bitte geben Sie eine Zahl für den Monat zwischen 1 und 12 an (0==Ende): ");
        scanf("%d", &month);
    
        // Ausgabe des Kalenders auf der Konsole
        printCalendar(month, year);
    } while (month != 0);

    return 0;
}
// ---------------------------

// ---------------------------
// FUNKTIONSIMPLEMENTIERUNGEN

void printCalendar(int month, int year) {
    // Ausgabe des Monats-Titel
    printMonthTitle(month, year);

    // Ausgabe der Tage und Daten des Monats auf Konsole
    printMonthBody(month, year);
}

/**
 * Funktion: printMonthTitle
 * -------------------------
 * Gibt den Titel eines Monats mit dem Jahr und einer Kalenderüberschrift auf der Konsole aus.
 *
 * Parameter:
 *  month - Der Monat als ganze Zahl (1 = Januar, 12 = Dezember).
 *  year  - Das Jahr als ganze Zahl, das im Titel ausgegeben wird.
 *
 * Beschreibung:
 *  Diese Funktion gibt den Namen des Monats sowie das Jahr in einer formatierten Tabellenstruktur auf der Konsole aus. 
 *  Zusätzlich wird eine Kopfzeile mit den Tagen der Woche (Sun, Mon, ...) angezeigt. 
 *  Die Funktion verwendet `printMonthName`, um den Monatsnamen auszugeben, gefolgt von der Darstellung des Jahres und einer festgelegten Struktur für den Kalender.
 *
 * Beispiel:
 *  printMonthTitle(3, 2024);  // Gibt den Titel "März 2024" und die Kalenderüberschrift aus.
 */
void printMonthTitle(int month, int year) {
    // Ausgabe des Monats Name
    printMonthName(month);
    // Ausgabe der Tabellenstruktur
    printf(" %d        \n", year);
    printf("----------------------------------------------------\n");
    printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
}

/**
 * Funktion: printMonthName
 * ------------------------
 * Gibt den Namen des Monats basierend auf der übergebenen Monatszahl aus.
 *
 * Parameter:
 *  month - Der Monat als ganze Zahl (1 = Januar, 12 = Dezember).
 *
 * Beschreibung:
 *  Diese Funktion gibt den Namen des Monats auf der Konsole aus, basierend auf der übergebenen Zahl. 
 *  Die Zahl muss zwischen 1 und 12 liegen, um einen gültigen Monat darzustellen. 
 *  Wenn eine ungültige Zahl übergeben wird (z.B. < 1 oder > 12), wird eine Fehlermeldung ausgegeben.
 *
 * Beispiel:
 *  printMonthName(3);   // Gibt "März" aus
 *  printMonthName(15);  // Gibt "Falsche Eingabe - Kein passender Monat gefunden!" aus
 */
void printMonthName(int month) {
    // switch Anweisung zur Darstellung des Monats
    switch (month) 
    {
        case 1:
            printf("\t\tJanuar");
            break;
        case 2:
            printf("\t\tFabruar");
            break;
        case 3:
            printf("\t\tMärz");
            break;
        case 4:
            printf("\t\tApril");
            break;
        case 5:
            printf("\t\tMai");
            break;
        case 6:
            printf("\t\tJuni");
            break;
        case 7:
            printf("\t\tJuli");
            break;
        case 8:
            printf("\t\tAugust");
            break;
        case 9:
            printf("\t\tSeptember");
            break;
        case 10:
            printf("\t\tOktober");
            break;
        case 11:
            printf("\t\tNovember");
            break;
        case 12:
            printf("\t\tDezember");
            break;
        default:
            printf("Falsche Eingabe - Kein passender Monat gefunden!");
            break;
    }
}

/**
 * Funktion: printMonthBody
 * ------------------------
 * Gibt die Tage eines Monats in einem Kalenderformat auf der Konsole aus.
 *
 * Parameter:
 *  month - Der Monat als ganze Zahl (1 = Januar, 12 = Dezember).
 *  year  - Das Jahr als ganze Zahl.
 *
 * Beschreibung:
 *  Diese Funktion gibt die Tage eines bestimmten Monats und Jahres auf der Konsole in einem typischen Kalenderformat aus.
 *  Zuerst wird der Starttag des Monats ermittelt (z.B. Montag, Dienstag, usw.) mit der Funktion `getStartDay`.
 *  Danach wird die Anzahl der Tage im Monat mittels der Funktion `getNumberOfDaysInMonth` berechnet.
 *  Die Ausgabe erfolgt so, dass die ersten Tage in der entsprechenden Spalte des Wochentags beginnen.
 *  Anschließend werden alle Tage des Monats ausgegeben, wobei am Ende einer Woche (nach 7 Tagen) ein Zeilenumbruch hinzugefügt wird.
 *
 * Beispiel:
 *  printMonthBody(3, 2024);  // Gibt die Tage des März 2024 im Kalenderformat auf der Konsole aus
 */
void printMonthBody(int month, int year) {
    // zunächst einmal den Starttag des 01. des Monats
    // herausfinden (z.B.: Dienstag, Freitag, etc.)
    int startDay = getStartDay(month, year);

    // anschließend die Anzahl der Tage im gesuchten
    // Monat bestimmen
    int numberOfDaysInMonth = getNumberOfDaysInMonth(month, year);

    // Ausgabe der Tage auf der Konsole
    // Basierend auf dem Starttag, rücken wir soweit ein,
    // dass der Wochentag zum 01. des Monats passt.
    for (int i = 0; i < startDay; i++) {
        printf("\t");
    }

    // Anschließend Ausgabe aller Tage des Monats auf Konsole
    // Wenn wir am Ende einer Woche angekommen sind (Tag 7)
    // wird ein Zeilenumbruch hinzugefügt
    for (int i = 1; i <= numberOfDaysInMonth; i++) {
        printf("%d\t", i);

        if ((i + startDay) % 7 == 0) {
            printf("\n");
        }
    }
    // finale neue Zeile am Ende
    printf("\n");
}

/**
 * Funktion: getStartDay
 * ---------------------
 * Berechnet den Starttag (Wochentag) für den ersten Tag eines gegebenen Monats und Jahres.
 *
 * Parameter:
 *  month - Der Monat als ganze Zahl (1 = Januar, 12 = Dezember).
 *  year  - Das Jahr als ganze Zahl.
 *
 * Rückgabewert:
 *  Der Starttag als ganze Zahl (0 = Sonntag, 1 = Montag, ..., 6 = Samstag).
 *
 * Beschreibung:
 *  Diese Funktion berechnet den Wochentag, an dem der erste Tag des gegebenen Monats und Jahres liegt.
 *  Als Ausgangspunkt wird der 01.01.1800 angenommen, da dieser Tag ein Mittwoch war (3. Tag der Woche). 
 *  Die Funktion ermittelt die Gesamtanzahl der Tage zwischen dem 01.01.1800 und dem eingegebenen Monat 
 *  und Jahr durch die Verwendung der Hilfsfunktion `getTotalNumberOfDays()`. 
 *  Der Starttag des Monats wird berechnet, indem die Anzahl der Tage zur Referenz (01.01.1800) addiert und das Ergebnis
 *  durch 7 geteilt wird, um den Wochentag zu bestimmen.
 *
 * Beispiel:
 *  int startTag = getStartDay(3, 2024);  // Gibt den Wochentag für den 1. März 2024 zurück
 */
int getStartDay(int month, int year) {
    // Wir nehmen den 01.01.1800 als Ausgangspunkt
    // da wir wissen, dass dies ein Mittwoch (dritter 
    // Tag in Woche) war
    int startDay1800 = 3;
    // nun die Gesamtzahl aller Tage seit 01.01.1800
    // und dem eingegebenen Monat ermitteln
    int totalNumberofDays = getTotalNumberOfDays(month, year);

    // nun die Differenz ermitteln um den Starttag
    // des eingegebenen Monats zu ermitteln mittels 
    // % 7, da die Woche 7 Tage hat.
    return (totalNumberofDays + startDay1800) % 7;
}

/**
 * Funktion: getTotalNumberOfDays
 * ------------------------------
 * Berechnet die Gesamtanzahl der Tage vom 01.01.1800 bis zum Beginn eines gegebenen Monats und Jahres.
 *
 * Parameter:
 *  year  - Das Jahr als ganze Zahl, bis zu dem die Tage berechnet werden.
 *  month - Der Monat als ganze Zahl (1 = Januar, 12 = Dezember), bis zu dem die Tage im gegebenen Jahr berechnet werden.
 *
 * Rückgabewert:
 *  Die Gesamtzahl der Tage vom 01.01.1800 bis zum ersten Tag des gegebenen Monats und Jahres.
 *
 * Beschreibung:
 *  Diese Funktion berechnet die Gesamtanzahl der vergangenen Tage seit dem 01.01.1800 bis zum Start eines bestimmten Monats
 *  und Jahres. Zunächst wird die Anzahl der Tage von 1800 bis zum 31.12. des vorherigen Jahres berechnet. 
 *  Für jedes Jahr wird überprüft, ob es sich um ein Schaltjahr handelt (366 Tage) oder nicht (365 Tage).
 *  Anschließend wird die Anzahl der Tage der vergangenen Monate des aktuellen Jahres zum Gesamtergebnis hinzugefügt.
 *
 * Beispiel:
 *  int tage = getTotalNumberOfDays(2024, 3);  // Gibt die Gesamtanzahl der Tage vom 01.01.1800 bis zum 1. März 2024 zurück
 */
int getTotalNumberOfDays(int month, int year) {
    // Deklaration einer Variable für das Ergebnis
    int total = 0;

    // nun alle Tage seit 01.01.1800 - bis zum 31.12.XXXX
    // des eingegebenen Jahres berechnen
    for (int i = 1800; i < year; i++) {
        // falls Schaltjahr -> +366 Tage
        if (isLeapYear(i)) {
            total += 366;
        }
        // falls kein Schaltjahr -> +365 Tage
        else {
            total += 365;
        }
    }

    // Anschließend die vergangenen Tage des eingegebenen
    // Jahres berechnen und zum Gesamtergebnis aufsummieren.
    for (int i = 1; i < month; i++) {
        total += getNumberOfDaysInMonth(i, year);
    }

    return total;
}

/**
 * Funktion: getNumberOfDaysInMonth
 * --------------------------------
 * Gibt die Anzahl der Tage in einem bestimmten Monat und Jahr zurück, wobei Schaltjahre berücksichtigt werden.
 *
 * Parameter:
 *  month - Der Monat als ganze Zahl (1 = Januar, 12 = Dezember).
 *  year  - Das Jahr als ganze Zahl, um zu überprüfen, ob es ein Schaltjahr ist (für den Februar).
 *
 * Rückgabewert:
 *  Die Anzahl der Tage im gegebenen Monat. 
 *  Gibt 31 Tage für Monate mit 31 Tagen, 30 Tage für Monate mit 30 Tagen und entweder 28 oder 29 Tage für den Februar zurück, je nachdem, ob das Jahr ein Schaltjahr ist.
 *  Gibt 0 zurück, wenn ein ungültiger Monat übergeben wird.
 *
 * Beschreibung:
 *  Diese Funktion überprüft den übergebenen Monat und das Jahr und gibt die korrekte Anzahl von Tagen für diesen Monat zurück. 
 *  Für den Februar wird die Anzahl der Tage basierend darauf bestimmt, ob das Jahr ein Schaltjahr ist. 
 *  Ungültige Monate (nicht zwischen 1 und 12) führen zur Rückgabe von 0.
 *
 * Beispiel:
 *  int tage = getNumberOfDaysInMonth(2, 2024);  // Gibt 29 zurück, da 2024 ein Schaltjahr ist
 */
int getNumberOfDaysInMonth(int month, int year) {
    // Überprüfung auf Monat und Jahr um korrekte
    // Anzahl an Tagen pro Monat zurückzugeben.
    // Berücksichtige: Februar und Schaltjahre
    if (month == 1 || month == 3 || month == 5 ||
        month == 7 || month == 8 || month == 10 ||
        month == 12)
        // 31 Tage zurückgeben
        return 31;
    else if (month == 4 || month == 6 || month == 9 ||
             month == 11)
        // 30 Tage zurückgeben
        return 30;
    else if (month == 2)
        // 28 Tage zurückgeben, außer an Schaltjahren -> 29
        // mittels tenary-Operator (? :)
        return isLeapYear(year) ? 29 : 28;

    return 0; // falls falscher Monat übergeben wurde
}

/**
 * Funktion: isLeapYear
 * --------------------
 * Überprüft, ob ein gegebenes Jahr ein Schaltjahr ist.
 *
 * Parameter:
 *  year - Das zu prüfende Jahr (als ganze Zahl).
 *
 * Rückgabewert:
 *  `true`, wenn das Jahr ein Schaltjahr ist, andernfalls `false`.
 *
 * Beschreibung:
 *  Diese Funktion bestimmt, ob das übergebene Jahr ein Schaltjahr ist. Ein Jahr ist ein Schaltjahr, wenn es entweder:
 *   - durch 400 teilbar ist, oder
 *   - durch 4 teilbar, aber nicht durch 100 teilbar ist.
 *  Wenn eine dieser Bedingungen zutrifft, wird `true` zurückgegeben, andernfalls `false`.
 *
 * Beispiel:
 *  int jahr = 2024;
 *  bool ergebnis = isLeapYear(jahr);  // ergebnis wird true sein, da 2024 ein Schaltjahr ist
 */
bool isLeapYear(int year) {
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

// ---------------------------