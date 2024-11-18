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
 * File: func_array_call-by-reference.c
 * Description: Programm zur Demonstration, dass Arrays als Referenzen übergeben werden.
 * Author: Dennis Grewe
 * Date: October 28th, 2024
 */
#include <stdio.h>

// Funktionsprototyp
void modifyArray(int array[], int number);

int main() {
    int x = 1;
    const int array[1] = {1, 2}; // const array

    // aufrufen der Funktion
    modifyArray(array, x);

    printf("x is %d\n", x);
    printf("y[0] is %d\n", array[0]);
    
    return 0;
}

void modifyArray(int array[], int number) {
    number = 1001;      // neuen Wert an Number zuweisen
    array[0] = 5555;    // neuen Wert an array[0] zuweisen
}
