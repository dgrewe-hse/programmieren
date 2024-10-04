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
 * File: calc_mwst.c
 * Description: Beispiel für die Berechnung der Mehrwertsteuer für einen bestimmten Betrag
 * Author: Dennis Grewe
 * Date: September 23rd, 2024
 */
#include <stdio.h>

/* Definition von Konstanten */
#define MWST 1.19

/* Hauptprogramm Mehrwertsteuer */
int main(void) {

    // Variablen für eingegebenen Betrag und Gesamtbetrag festlegen
    float betrag, ges_betrag;
    // Benutzer um Eingabe "Betrag" bitten
    printf("Nettobetrag in Euro: ");
    // Eingabe vom Benutzer lesen mittels scanf(), beachten Sie "&" Symbol zwingend notwendig
    scanf("%f", &betrag);
    // Berechnen der Mehrwertsteuer: Betrag * 1.19 = Gesamtbetrag
    // Beachten Sie: Zuweisungsoperation ist rechtsassoziativ, erfolgt von rechts nach links.
    ges_betrag = betrag * MWST;
    // Ausgabe Gesamtbetrag auf Konsole mittels printf()
    printf("Der Gesamtbetrag ist %f\n", ges_betrag);

    return 0;
}



