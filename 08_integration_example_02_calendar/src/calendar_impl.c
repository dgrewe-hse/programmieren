#include <stdio.h>
#include <stdbool.h>
#include "../include/calendar.h"

//------------------
// FUNKTIONSIMPLEMENTIERUNGEN

// Funktion, welche Kalenderkopf und Kalenderkörper Funktionen aufruft
void print_month(int monat, int jahr) {

    // Ausgabe des Monats und Jahr in ausgeschrieber Form
    print_month_title(monat, jahr);

    // Ausgabe der tabellarischen Form des Kalenders
    print_calendar_body(monat, jahr);
}

// druckt Monat, Jahr sowie den Tabellenkopf (table head)
void print_month_title(int monat, int jahr) {

    // übersetzen Monatszahl auf menschenlesbarer Monat
    // switch-case da wir nur auf Wert einer einzelnen Variable (Monat) testen
    get_and_print_month_name(monat);
    printf("%d", jahr);

    // print Tabellenkopf
    printf("\n---------------------------------------------------\n");
    printf("So\tMo\tDi\tMi\tDo\tFr\tSa\n");

}

// übersetzen Monatszahl auf menschenlesbarer Monat
void get_and_print_month_name(int monat) {

    // übersetzen Monatszahl auf menschenlesbarer Monat
    // switch-case da wir nur auf Wert einer einzelnen Variable (Monat) testen
    switch (monat)
    {
        case 1: // 1 == Januar
            printf("Januar ");
            break;
        case 2: // 2 == Februar
            printf("Februar ");
            break;
        case 3: // 3 == März
            printf("März ");
            break;
        case 4: // 4 == April
            printf("April ");
            break;
        case 5: // 5 == Mai
            printf("Mai ");
            break;
        case 6: // 6 == Juni
            printf("Juni ");
            break;
        case 7: // 7 == Juli
            printf("Juli ");
            break;
        case 8: // 8 == August
            printf("August ");
            break;
        case 9: // 9 == September
            printf("September ");
            break;
        case 10: // 10 == Oktober
            printf("Oktober ");
            break;
        case 11: // 11 == November
            printf("November ");
            break;
        case 12: // 12 == Dezember
            printf("Dezember ");
            break;
        default:
            printf("Falsche Eingabe eines Monats zur Auflösung!");
            break;
    }
}

// druckt die tabellarische Form eines Monats
void print_calendar_body(int monat, int jahr) {

    // Start Tag identifizieren (ist dieser ein Montag, Mittwoch, etc.)
    int start_day = get_start_day(monat, jahr);

    // auflösen wie viele Tage hat der Monat generell (Achtung: Schaltjahr berücksichtigen)
    int total_number_of_days_in_month = get_number_of_days_in_month(monat, jahr);

    // finale Ausgabe in Tabellenform
    
    // Einrücken basierend auf dem Starttag der Woche
    for (int i = 0; i < start_day; i++) {
        printf("\t");
    }

    // anschließend alle tage im Monat printen
    for (int i = 1; i <= total_number_of_days_in_month; i++) {
        printf("%d\t", i);

        if ((i + start_day) % 7 == 0) {
            printf("\n");
        }
    }

    // ganz am Ende (wenn wir mit allem fertig sind) noch einen finalen Zeileinumbruch
    printf("\n");
}

int get_start_day(int monat, int jahr) {

    // 1.1.1800 war ein Mittwoch == 3

    int start_day;
    int total_days_since_1800 = 0;

    // Berechnung wie viele Tage sind seit dem 01.01.1800 vergangen bis zum gesuchten 1. Monat
    // berücksicht werden muss: Schaltjahre
    // berücksichtigt werden muss: Tage in gesuchtem Jahr bis 1. Monats

    for (int i = 1800; i < jahr; i++) {
        // prüfe ob Schaltjahr ist: +366
        if (is_leap_year(i)) {
            //total_days_since_1800 = total_days_since_1800 + 366;
            total_days_since_1800 += 366;
        }
        // wenn kein Schaltjahr: +365
        else {
            total_days_since_1800 = total_days_since_1800 + 365;
        }
    }

    // Tage bis zum 1. des gesuchten Monat
    for (int i = 1; i < monat; i++) {
        total_days_since_1800 += get_number_of_days_in_month(i, jahr);
    }

    // gesamtberechung start day
    // TODO offset 3 vergessen
    start_day = (total_days_since_1800 + 3) % 7;
    //start_day = total_days_since_1800 % 7;

    //printf("start tag: %d", start_day);

    return start_day;
}

// prüfung ist ein Jahr ein Schaltjahr
bool is_leap_year(int jahr) {

    // jedes 4 Jahr ist Schaltjahr, außer jahr % 100 != 0, jedes 400 Jahr ist ein Schaltjahr jahr % 400 == 0
    //bool ergebnis = (jahr % 400 == 0 || (jahr % 4 == 0 && jahr % 100 != 0));

    //printf("schaltjahr: %d", total_days_since_1800 % 7);

    //return ergebnis;
    return (jahr % 400 == 0 || (jahr % 4 == 0 && jahr % 100 != 0));
}

int get_number_of_days_in_month(int monat, int jahr) {

    // rückgabe der Tage im Monat -> 31 Tage
    if (monat == 1 || monat == 3 || monat == 5 || 
        monat == 7 || monat == 8 || monat == 10 || monat == 12) {
            return 31;
    }
    else if (monat == 4 || monat == 6 || 
             monat == 9 || monat == 11) {
            return 30;
    }
    else {
        // im Fall des Februar
        if (is_leap_year(jahr)) {
            return 29;
        }
        else {
            return 28;
        }
    }
}