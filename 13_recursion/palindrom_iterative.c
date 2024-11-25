/**
 * File: palindrom_iterative.c
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
    // Iterieren über den String und vergleichen die Zeichen am Start- und Endindex.
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Nicht ein Palindrom.
        }
        start++;
        end--;
    }
    return 1; // Palindrom.
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
