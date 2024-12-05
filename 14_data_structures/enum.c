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
 * File: enum.c
 * Description: Programm zur Demonstration von enums in C.
 * Author: Dennis Grewe
 * Date: December 5th, 2024
 */
#include <stdio.h>

// ein enum zur Darstellung von Status
enum Status {
    OK = 1,
    ERROR = -1,
    PENDING = 0
};

int main() {
    // eine Variable vom Typ enum Status
    // der Variable wird der Wert ERROR zugewiesen
    enum Status currentStatus = ERROR;

    // eine if-Abfrage, die prüft, ob der Wert der 
    // Variable currentStatus gleich ERROR ist. Wenn ja,
    // wird der Text "Ein Fehler ist aufgetreten." ausgegeben.
    if (currentStatus == ERROR) {
        printf("Ein Fehler ist aufgetreten.\n");
    }
    
    return 0;
}