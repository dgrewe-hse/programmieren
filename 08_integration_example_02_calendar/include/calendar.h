// Auslagern unserer Kalender Funktionsprotypen in eigene Header-Datei

void print_month(int monat, int jahr);
void print_month_title(int monat, int jahr);            // druckt Monat, Jahr sowie den Tabellenkopf (table head)
void get_and_print_month_name(int monat);               // löst den Montasnamen basierend auf Monatszahl auf und printed zu Konsole
void print_calendar_body(int monat, int jahr);          // druckt die tabellarische Form eines Monats
int get_start_day(int monat, int jahr);                 // liefert uns den Tag der Woche für den 1. eines Monats im Jahr X zurück
int get_total_num_of_days(int monat, int jahr);         // liefert die max Anzahl an Tagen seit 1800   
int get_number_of_days_in_month(int monat, int jahr);   // liefert die max Anzahl an Tagen pro Monat zurück unter Berücksichtigung eines pot. Schaltjahrs  
bool is_leap_year(int jahr);                            // liefert TRUE wenn Schaltjahr vorliegt, ansonsten FALSE
