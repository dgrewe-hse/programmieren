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
 * File: use_own_lib.c
 * Description: Beispielprogramm zur Nutzung und Einbindung einer eigenen Bibliothek.
 *              In diesem Beispiel nutzen wir die "mylib.h" und "mylib.c" Bibliothek
 *              aus der gleichen Ordnerstruktur.
 * Author: Dennis Grewe
 * Date: October 07th, 2024
 */
#include <stdio.h>
#include "mylib.h"  // Einbindung der eigenen Bibiliothek (selbes Verzeichnis)

/* 
 * Hauptfunktion des Programms 
 */
int main() {
    // Verwendung der eingenen isEven-Funktion aus
    // mylib.h / mylib.c Dateien
    // Test auf Gerade/Ungerade und Ausgabe auf Konsole
    if (isEven(4))
        printf("Die Zahl ist gerade");

    return 0;
}