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
 * File: mylib.c
 * Description: Implementierung der Header-Datei für eine eigene Bibliothek mit bekannten Funktionen.
 * Author: Dennis Grewe
 * Date: October 07th, 2024
 */
#include "mylib.h"  // Einbinden der Header-Datei, welche diese implementiert

/* Erklärung: Mit dem Einbinden der Header-Datei "mylib.h" implementiert 
 * diese "mylib.c" Datei nun die Funktionsprototypen, welche in der 
 * Header-Datei "mylib.h" definiert wurden. Ohne eine Implementierung
 * kann die Bibliothek nicht genutzt werden, da lediglich die "Schnittstelle" /
 * Funktionsprototyp verfügbar ist, aber keinerlei Logik umgesetzt wurde. 
 * Diese stellt nun die "mylib.c" Datei bereit. */

/**
 * Funktion: isEven
 * ----------------
 * Überprüft, ob eine gegebene Zahl gerade ist.
 *
 * Parameter:
 *  number - Die zu prüfende ganze Zahl.
 *
 * Rückgabewert:
 *  `true`, wenn die Zahl gerade ist, andernfalls `false`.
 *
 * Beschreibung:
 *  Diese Funktion prüft, ob eine gegebene Zahl gerade ist, indem der
 *  Modulo-Operator verwendet wird, um zu testen, ob die Zahl durch 2 teilbar ist.
 *  Wenn der Rest bei der Division durch 2 gleich 0 ist, gilt die Zahl als gerade.
 *
 * Beispiel:
 *  int zahl = 4;
 *  bool ergebnis = isEven(zahl); // ergebnis wird true sein, da 4 eine gerade Zahl ist
 */
bool isEven(int number) {
    return (number % 2 == 0);
}