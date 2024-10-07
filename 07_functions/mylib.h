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
 * File: mylib.h
 * Description: Header-Datei für eine eigene Bibliothek mit bekannten Funktionen.
 * Author: Dennis Grewe
 * Date: October 07th, 2024
 */
#include <stdbool.h> // zur Verwendung des bool Datentyp

/**
 * Funktionsprototyp: isEven
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
 */
bool isEven(int number);