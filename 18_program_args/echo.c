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
 * File: echo.c
 * Description: Beispiel für die Nutzung von Programmargumenten.
 *              Dieses Beispiel gibt alle übergebenen Argumente auf der Konsole aus.
 * Author: Dennis Grewe
 * Date: December 19th, 2024
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Wenn genau ein Argument übergeben wird, wird es ausgegeben
    if (argc == 2) {
        printf("%s\n", argv[1]);
    } 
    else {
        // Wenn kein oder mehr als ein Argument übergeben wird, wird eine Fehlermeldung ausgegeben
        printf("Usage: %s <string>\n", argv[0]);
        exit(1);
    }
    return 0;
}