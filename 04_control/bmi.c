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
 * File: bmi.c
 * Description: Beispielprogramm zur Berechnung des Body-Mass-Index (BMI).
 * Author: Dennis Grewe
 * Date: October 06th, 2024
 */
// Einbinden von Funktionen aus Bibliotheken
#include <stdio.h>

// Deklaration von Umrechnungsfaktoren als Konstante Variablen
const double KILOGRAM_PER_POUND = 0.45359237;
const double METERS_PER_INCH = 0.0254;

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Deklaration der benötigten Variablen für Gewicht und Größe
    double weight;
    double height;

    // Aufforderung an den Benutzer Gewicht und Größe anzugeben
    printf("Bitte geben Sie das Gewicht in Pfund an: ");
    scanf("%lf", &weight);
    printf("Bitte geben Sie die Körpergöße in Zoll an: ");
    scanf("%lf", &height);

    // Berechnung des BMI
    double weightInKilogram = weight * KILOGRAM_PER_POUND;
    double heightInMeters = height * METERS_PER_INCH;
    double bmi = weightInKilogram / (heightInMeters * heightInMeters);

    // Ergebnis auf der Konsole ausgeben
    // basierend auf dem Wert wird eine unterschiedliche Ausgabe angegeben
    printf("Ihr BMI Wert lautet: %lf -> ", bmi);
    if (bmi < 16)
        printf("Sie sind ernsthaft untergewichtig!");
    else if (bmi < 18)
        printf("Sie sind untergewichtig!");
    else if (bmi < 24)
        printf("Sie sind normalgewichtig!");
    else if (bmi < 29)
        printf("Sie sind übergewichtig!");
    else if (bmi < 35)
        printf("Sie sind ernsthaf übergewichtig!");
    else
        printf("Sie sind stark übergewichtig!");

    return 0;
}