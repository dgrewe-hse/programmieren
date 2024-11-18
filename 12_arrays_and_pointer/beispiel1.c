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
 * File: beispiel1.c
 * Description: Programm zur Demonstration der Pointer Thematik 
 *              am Beispiel eines Arrays und eines Zeigers.
 * Author: Dennis Grewe
 * Date: November 18th, 2024
 */

int main() {

    // Deklaration eines Arrays mit 5 Elementen
    double my_array[5];     // sizeof(my_array) = 5 * sizeof(double) = 40 bytes
                            // der Name des Arrays ist ein Zeiger auf das erste Element des Arrays

    // Deklaration eines Zeigers auf einen double
    double *pointer;        // sizeof(pointer) = 8 bytes

    // Deklaration eines Zeigers auf das vierte Element des Arrays
    double *pointer2 = &my_array[4];    // "array name + []" ist immer eine Dereferenzierung

    for (int i = 0; i < 5; i++) {
        my_array[i] = (double) i * 1.1;
    }
    
    return 0;
}
