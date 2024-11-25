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
 * File: palindrom_recursive.c
 * Description: Programm zur Überprüfung, ob ein String ein Palindrom ist.
 * Author: Dennis Grewe
 * Date: November 25th, 2024
 */

#include <stdio.h>
#include <string.h>

/**
 * Funktion zur Überprüfung, ob ein String ein Palindrom ist.
 * @param str: Der zu überprüfende String.
 * @param start: Der Startindex.
 * @param end: Der Endindex.
 * @return: 1, wenn der String ein Palindrom ist, sonst 0.
 */
int isPalindrome(char *str, int start, int end) {
    // Basisfall: Wenn der Startindex gleich oder größer als der Endindex ist, ist es ein Palindrom.
    if (start >= end) {
        return 1;
    }
    // Überprüfen, ob die Zeichen am Start- und Endindex gleich sind.
    if (str[start] != str[end]) {
        return 0; // Nicht ein Palindrom.
    }
    // Rekursiver Aufruf mit den nächsten Indizes.
    return isPalindrome(str, start + 1, end - 1);
}

/**
 * Hauptprogramm
 */
int main() {
    char str[100]; // Array zur Speicherung des Strings.

    // Eingabe des Strings.
    printf("Geben Sie einen String ein: ");
    scanf("%s", str);
    
    // Überprüfung, ob der String ein Palindrom ist.
    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("Der String ist ein Palindrom.\n");
    } else {
        printf("Der String ist kein Palindrom.\n");
    }
    
    return 0;
}
