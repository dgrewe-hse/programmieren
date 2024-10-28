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
 * File: array_zeichenkette.c
 * Description: Beispielprogramm zur Nutzung von Arrays in C unter Verwendung von Zeichenketten.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

/*
 * Hauptfunktion des Programms
 */
int main(int argc, char const *argv[])
{
    // Deklaration von Zeichenketten
    char city_esslingen[] = {'E', 's', 's', 'l', 'i', 'n', 'g', 'e', 'n'};
    char city_esslingen2[] = "Esslingen";
    
    // Kapazität von city_esslingen und city_esslingen2
    // Warum ist die Kapazität unterschiedlich?
    printf("Kapazität von city_esslingen: %lu\n", sizeof(city_esslingen));
    printf("Kapazität von city_esslingen2: %lu\n", sizeof(city_esslingen2));

    // letztes Element von city_esslingen
    printf("Letztes Element von city_esslingen: %c\n", city_esslingen[sizeof(city_esslingen) - 1]);
    // letztes Element von city_esslingen2
    printf("Letztes Element von city_esslingen2: %c\n", city_esslingen2[sizeof(city_esslingen2) - 1]);

    return 0;
}
