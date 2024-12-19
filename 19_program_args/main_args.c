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
 * File: main_args.c
 * Description: Beispiel für die Nutzung von Programmargumenten.
 *              Dieses Beispiel zeigt, wie man Programmargumente in einem C-Programm
 *              verwendet.
 * Author: Dennis Grewe
 * Date: December 19th, 2024
 */

#include <stdio.h>
#include <string.h>

/*
 * main: Hauptfunktion des Programms
 * argc: Anzahl der Argumente
 * argv: Array der Argumente
 * Rückgabewert: 0 bei Erfolg, 1 bei Fehler
 */
int main(int argc, char *argv[]) {

    // Ausgabe der Anzahl der Argumente
    // argc ist die Anzahl der Argumente, die beim Start des Programms übergeben wurden
    printf("Anzahl der Argumente: %d\n", argc);

    // Ausgabe der Argumente
    // argv ist ein Array von Zeichenketten, die die Argumente darstellen
    for (int i = 0; i < argc; i++) {
        // Ausgabe des Argumentes
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
