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
 * File: plot.c
 * Description: Beispiel für den Einsatz von Funktionen als Parameter.
 *              Dieses Beispiel übernimmt eine Funktion an eine Plot-Funktion
 *              übergeben und zeigt die Funktion auf der Konsole an. In diesem
 *              Beispiel wird die Funktion sin(x), cos(x) und my_sinus_function(x)
 *              geplottet.
 * Author: Dennis Grewe
 * Date: December 19th, 2024
 */

#include <stdio.h>
#include <math.h>

// Globale Konstanten
#define PI 3.14159265358979323846

// Funktionsprototypen

/**
 * Funktion, die den Sinus von x*x berechnet.
 * 
 * @param x Wert, dessen Sinus berechnet werden soll
 * @return Sinus von x
 */
double my_sinus_function(double x);

/**
 * Funktion, die den Inhalt/Rückgabewert einer Funktion plotten soll.
 * 
 * @param toPlotFunc Funktion, die geplottet werden soll. Hierbei handelt es sich um
 *             einen Zeiger auf eine Funktion, die einen double-Wert als
 *             Parameter entgegennimmt und einen double-Wert zurückliefert.
 */
void plot_function(double (*toPlotFunc)(double));


/**
 * Hauptprogramm
*/
int main() {

    // Funktionsaufrufe
    printf("\n\n --------------- sin(x) ---------------:\n");
    plot_function(sin);
    printf("\n\n --------------- cos(x) ---------------:\n");
    plot_function(cos);
    printf("\n\n --------------- my_sinus_function(x) ---------------:\n");
    plot_function(my_sinus_function);
    
    return 0;
}


/**
 * Funktion, die den Sinus von x berechnet.
 * 
 * @param x Wert, dessen Sinus berechnet werden soll
 * @return Sinus von x
 */
double my_sinus_function(double x) {
    return sin(x*x);
}

/**
 * Funktion, die den Inhalt/Rückgabewert einer Funktion plotten soll.
 * 
 * @param toPlotFunc Funktion, die geplottet werden soll. Hierbei handelt es sich um
 *             einen Zeiger auf eine Funktion, die einen double-Wert als
 *             Parameter entgegennimmt und einen double-Wert zurückliefert.
 */
void plot_function(double (*toPlotFunc)(double)) {

    // Hinweis: toPlotFunc ist ein Parametername eines Zeigers, der auf eine
    // Funktion zeigt, welche einen double-Wert als Parameter entgegennimmt.

    for (double x = 0.; x < 2. * PI; x += 0.2) {
        // variable y wird mit der Funktion toPlotFunc berechnet
        // Wir nutzen den Zeiger auf die Funktion, um die Funktion aufzurufen.
        double y = toPlotFunc(x);
        printf("\n%12g, %12g: ", x, y);
        for (int i = 0; i < (int) ((y + 1.) * 20.0); i++) {
            printf("*");
        }
    }
}
