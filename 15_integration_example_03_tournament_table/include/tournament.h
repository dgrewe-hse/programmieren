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
 * File: tournament.h
 * Description: Header file for tournament.c
 * Author: Dennis Grewe
 * Date: December 11th, 2024
 */
#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Konstanten für die Turnierkonfiguration
 */
#define MAX_TEAM_NAME 50    // Maximale Länge eines Teamnamens
#define MAX_TEAMS 12        // Maximale Anzahl Teams im Turnier
#define TEAMS_PER_GROUP 4   // Anzahl Teams pro Gruppe
#define NUM_GROUPS 3        // Anzahl der Gruppen

/**
 * @brief Struktur für ein Team mit seinen Statistiken
 * 
 * Speichert alle relevanten Informationen für ein Team:
 * - Name des Teams
 * - Anzahl gewonnener Spiele
 * - Anzahl unentschiedener Spiele
 * - Anzahl verlorener Spiele
 * - Gesamtpunktzahl
 */
typedef struct {
    char name[MAX_TEAM_NAME];
    int wins;
    int draws;
    int losses;
    int points;
} Team;

/**
 * @brief Struktur für eine Gruppe im Turnier
 * 
 * Enthält:
 * - Gruppenname (A, B, C, etc.)
 * - Array von Zeigern auf die Teams in dieser Gruppe
 */
typedef struct {
    char name;
    Team* teams[TEAMS_PER_GROUP];
} Group;

/**
 * @brief Initialisiert ein einzelnes Team
 * @param team Zeiger auf das zu initialisierende Team
 * @param name Name des Teams
 */
void initializeTeam(Team* team, const char* name);

/**
 * @brief Zeigt die Statistiken eines Teams an
 * @param team Zeiger auf das anzuzeigende Team
 */
void displayTeamStats(const Team* team);

/**
 * @brief Zeigt alle Gruppen und deren Teams an
 * @param groups Zeiger auf das Array der Gruppen
 */
void displayAllGroups(Group* groups);

/**
 * @brief Aktualisiert die Statistiken nach einem Spiel
 * @param team1 Zeiger auf das erste Team
 * @param team2 Zeiger auf das zweite Team
 * @param score1 Tore des ersten Teams
 * @param score2 Tore des zweiten Teams
 */
void updateTeamStats(Team* team1, Team* team2, int score1, int score2);

/**
 * @brief Verarbeitet ein einzelnes Spiel
 * @param team1 Zeiger auf das erste Team
 * @param team2 Zeiger auf das zweite Team
 */
void processMatch(Team* team1, Team* team2);

/**
 * @brief Initialisiert alle Gruppen und Teams
 * @param groups Zeiger auf das Array der Gruppen
 * @param usePredefines Flag für die Verwendung vordefinierter Teams
 */
void initializeGroups(Group* groups, int usePredefines);

/**
 * @brief Gibt den allokierten Speicher frei
 * @param groups Zeiger auf das Array der Gruppen
 */
void freeGroups(Group* groups);

/**
 * @brief Zeigt das Hauptmenü an
 */
void displayMenu(void);

#endif // TOURNAMENT_H