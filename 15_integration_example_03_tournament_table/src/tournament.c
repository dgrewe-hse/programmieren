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
 * File: tournament.c
 * Description: Implementation of the match table for a sports event.
 * Author: Dennis Grewe
 * Date: December 11th, 2024
 */
#include "tournament.h"

/**
 * Vordefinierte Teamnamen für die automatische Initialisierung
 */
static const char* PREDEFINED_TEAMS[] = {
    "Deutschland", "Frankreich", "Spanien", "Italien",
    "England", "Niederlande", "Portugal", "Belgien",
    "Brasilien", "Argentinien", "Uruguay", "Chile"
};

void initializeTeam(Team* team, const char* name) {
    // Kopiere den Namen sicher in das Team-Struct
    strncpy(team->name, name, MAX_TEAM_NAME - 1);
    team->name[MAX_TEAM_NAME - 1] = '\0';  // Ensure null termination
    
    // Initialisiere alle Statistiken mit 0
    team->wins = 0;
    team->draws = 0;
    team->losses = 0;
    team->points = 0;
}

void displayTeamStats(const Team* team) {
    // Formatierte Ausgabe der Team-Statistiken
    printf("%-15s | %3d | %3d | %3d | %3d\n",
           team->name, team->wins, team->draws, team->losses, team->points);
}

void displayAllGroups(Group* groups) {
    // Iteriere durch alle Gruppen
    for (int i = 0; i < NUM_GROUPS; i++) {
        printf("\nGruppe %c:\n", groups[i].name);
        printf("Team           | Gew | Unt | Ver | Pkt\n");
        printf("----------------------------------------\n");
        
        // Zeige Statistiken für jedes Team in der Gruppe
        for (int j = 0; j < TEAMS_PER_GROUP; j++) {
            displayTeamStats(groups[i].teams[j]);
        }
    }
}

void updateTeamStats(Team* team1, Team* team2, int score1, int score2) {
    // Aktualisiere Statistiken basierend auf dem Spielergebnis
    if (score1 > score2) {
        // Team 1 gewinnt
        team1->wins++;
        team2->losses++;
        team1->points += 3;
    } else if (score1 < score2) {
        // Team 2 gewinnt
        team2->wins++;
        team1->losses++;
        team2->points += 3;
    } else {
        // Unentschieden
        team1->draws++;
        team2->draws++;
        team1->points++;
        team2->points++;
    }
}

void processMatch(Team* team1, Team* team2) {
    int score1, score2;
    
    // Spielergebnisse vom Benutzer einlesen
    printf("Spiel: %s vs %s\n", team1->name, team2->name);
    printf("Tore %s: ", team1->name);
    scanf("%d", &score1);
    printf("Tore %s: ", team2->name);
    scanf("%d", &score2);
    
    // Statistiken aktualisieren
    updateTeamStats(team1, team2, score1, score2);
}

void initializeGroups(Group* groups, int usePredefines) {
    // Initialisiere jede Gruppe
    for (int i = 0; i < NUM_GROUPS; i++) {
        groups[i].name = 'A' + i;  // Setze Gruppennamen (A, B, C, ...)
        
        // Initialisiere Teams in der Gruppe
        for (int j = 0; j < TEAMS_PER_GROUP; j++) {
            // Allokiere Speicher für das Team
            groups[i].teams[j] = malloc(sizeof(Team));
            
            if (usePredefines) {
                // Verwende vordefinierte Teams
                initializeTeam(groups[i].teams[j], 
                             PREDEFINED_TEAMS[i * TEAMS_PER_GROUP + j]);
            } else {
                // Manuelle Teameingabe
                char name[MAX_TEAM_NAME];
                printf("Name für Team %d in Gruppe %c: ", j+1, groups[i].name);
                scanf("%s", name);
                initializeTeam(groups[i].teams[j], name);
            }
        }
    }
}

void freeGroups(Group* groups) {
    // Gebe den Speicher für alle Teams frei
    for (int i = 0; i < NUM_GROUPS; i++) {
        for (int j = 0; j < TEAMS_PER_GROUP; j++) {
            free(groups[i].teams[j]);
        }
    }
    // Gebe den Speicher für das Gruppen-Array frei
    free(groups);
}

void displayMenu(void) {
    // Zeige Hauptmenü an
    printf("\nHauptmenü:\n");
    printf("1. Tabelle anzeigen\n");
    printf("2. Spielergebnis eingeben\n");
    printf("0. Beenden\n");
    printf("Ihre Wahl: ");
}