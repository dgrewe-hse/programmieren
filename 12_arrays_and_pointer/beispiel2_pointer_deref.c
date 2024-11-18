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
 * File: beispiel2_pointer.c
 * Description: Programm zur Demonstration der Pointer Thematik.
 * Author: Dennis Grewe
 * Date: November 18th, 2024
 */

#include <stdio.h>

int main() {

    // Deklaration eines Arrays mit 6 Elementen
    int list[6] = {11, 12, 13, 14, 15, 16};
    int *pointer = &list[0];

    for (int i = 0; i < 6; i++) {
        // Ausgabe der Adresse des i-ten Elements
        // mit %p wird der Wert des Zeigers ausgegeben
        printf("Address of list[%d] = %p", i, (list + i));
        printf(" value via deref = %d", *(list + i));
        printf(" via pointer = %d", pointer[i]);
        printf(" via index = %d\n", list[i]);
    }

    return 0;
}