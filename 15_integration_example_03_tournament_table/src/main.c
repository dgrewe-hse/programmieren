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
 * File: main.c
 * Description: Main file for the match table for a sports event.
 * Author: Dennis Grewe
 * Date: December 11th, 2024
 */
#include "tournament.h"

/**
 * Hauptprogramm
 * 
 * Verwaltet die Hauptschleife des Programms und die Benutzerinteraktion
 */
int main() {
    // Allokiere Speicher für die Gruppen
    Group* groups = malloc(NUM_GROUPS * sizeof(Group));
    int choice, init_choice;
    
    // Initialisierungsauswahl
    printf("Willkommen zum Turnier-Management-System!\n");
    printf("Möchten Sie vordefinierte Teams verwenden? (1: Ja, 0: Nein): ");
    scanf("%d", &init_choice);
    
    // Initialisiere Gruppen und Teams
    initializeGroups(groups, init_choice);
    
    // Hauptprogrammschleife
    do {
        displayMenu();
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                // Zeige aktuelle Tabelle
                displayAllGroups(groups);
                break;
            case 2: {
                // Spielergebnis eingeben
                int group_idx, team1_idx, team2_idx;
                printf("Gruppe (0-2): ");
                scanf("%d", &group_idx);
                printf("Team 1 (0-3): ");
                scanf("%d", &team1_idx);
                printf("Team 2 (0-3): ");
                scanf("%d", &team2_idx);
                
                // Überprüfe Eingabegültigkeit
                if (group_idx >= 0 && group_idx < NUM_GROUPS &&
                    team1_idx >= 0 && team1_idx < TEAMS_PER_GROUP &&
                    team2_idx >= 0 && team2_idx < TEAMS_PER_GROUP) {
                    processMatch(groups[group_idx].teams[team1_idx],
                               groups[group_idx].teams[team2_idx]);
                }
                break;
            }
            case 0:
                printf("Programm wird beendet.\n");
                break;
            default:
                printf("Ungültige Eingabe!\n");
        }
    } while (choice != 0);
    
    // Aufräumen und Speicher freigeben
    freeGroups(groups);
    return 0;
}