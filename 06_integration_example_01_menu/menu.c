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
 * File: guess_game_do-while.c
 * Description: Kleines Integrationsbeispiel für bisherig gelernte Sprachkonstrukte
 *              am Beispiel einer Kleinen Eingabenmaske (Terminal GUI).
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Bilbliotheken zur Nutzung von Funktionen
#include <stdio.h>

/* 
 * Hauptfunktion des Programms 
 */
int main() {

    // --------------
    // Deklarationen
    // --------------

    // Definition unserer Menüstruktur als enum;
    // Jeder Eintrag stellt ein Menüpunkt dar, dessen 
    // Übersicht auf der Konsole ausgegeben werden soll
    enum menu { FILE, FILE_OPEN, FILE_EXIT, EDIT,
                EDIT_COPY, EDIT_PASTE, MENU_END };
    
    // Deklaration unserer Menü
    enum menu subMenu,  // aktuelles Menü 
              index;    // laufender Index beim Ausgeben aller Menüs
    
    char userInput,     // einlesen des Buchstaben durch Benutzer
         dummy;         // Variable zum Überlesen des \n Zeichens
    int i;              // Zählvariable für Ausgabe von Formelementen (Trennlinie)

    // --------------
    // Ablauflogik
    // --------------

    // Ausführen des Programms in einer Schleife um Menüstruktur
    // darzustellen.
    // Abbruchbedingung der Schleife: Benutzer beendet mit 'E'.
    do { // Haupt-Schleife

        // Trennlinie für Auswahloptionen malen
        // 36 Mal "-=" auf Konsole ausgeben
        for (i=0; i < 36; i++) { 
            printf("-="); 
        }
        // anschließend Zeilenumbruch für neue Inhalte
        printf("\n");

        // Vorhandene Menüoptionen dem Benutzer darstellen
        // Wir nehmen die enum Struktur und den Index um über 
        // alle Menüoptionen zu iterieren
        for (index=FILE; index < MENU_END; index++) {
            switch (index) {
                case FILE: 
                    printf("\nDatei:\n\t"); break;
                case EDIT: 
                    printf("\nBearbeiten:\n\t");break;
                case FILE_OPEN: 
                    printf("_O_pen (Oeffnen) "); break;
                case FILE_EXIT: 
                    printf("_E_nd (Beenden) "); break;
                case EDIT_COPY: 
                    printf("_C_opy (Kopieren) "); break;
                case EDIT_PASTE: 
                    printf("_I_nsert (Einfuegen) "); break;
                default: 
                    // Fehler
                    fprintf(stderr, "Menue implementation error!"); return(1);
            } // switch
        } // for

        // Benutzer um eingabe bitten
        printf( "\n\nBitte wählen Sie ein Untermenü durch Angabe eines Buchstaben."
                "\nSchliessen Sie mit Return ab.\n");
        // einlesen eines einzelnen Buchstabens durch Benutzer
        userInput = getchar();
        // "Enter" ebenfalls einlesen um Programmfluss zu ermöglichen
        // Hinweis: Diese Eingabe kann ignoriert werden.
        dummy = getchar(); // \n
        
        // initiales Setzen der Menuvariable
        subMenu = MENU_END;
        /* überprüfen der Benutzereingabe und Setzen
         des richtigen Menüs */
        switch (userInput) {
            case 'O': 
                subMenu=FILE_OPEN; break;
            case 'E': 
                subMenu=FILE_EXIT; break;
            case 'C': 
                subMenu=EDIT_COPY; break;
            case 'I': 
                subMenu=EDIT_PASTE; break;
            default: 
                // Fehlerhafte Eingabe
                fprintf(stderr, "Kein Menü zum Buchstaben %c!\n", userInput);
        }
        printf ("Buchstabe '%c' entspricht Menü-Nummer %d\n", userInput, subMenu );

        // -----------
        /* Hier dann mehr Verarbeitung erfolgen ... */

    } 
    // führe Schleife erneut aus, solange Benutzer nicht mit 'E' => FILE_EXIT beendet
    while (subMenu != FILE_EXIT);     // Haupt-Schleife

    return 0;
}