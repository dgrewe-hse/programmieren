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
 * File: void_pointer.c
 * Description: Programm zur Demonstration von void Pointer.
 * Author: Dennis Grewe
 * Date: November 18th, 2024
 */

#include <stdio.h>

// Prototyp-Deklaration der Funktion print_value
void print_value(void *value_ptr, char type);

/**
 * Hauptprogramm
 */
int main() {
    // Deklaration einer Variable mit einem int Wert
    int int_value = 10;
    float float_value = 10.5;
    char char_value = 'A';

    // Deklaration eines void Pointer
    void *void_ptr;

    // Zuweisung des void Pointer auf die Variable int_value
    void_ptr = &int_value;
    print_value(void_ptr, 'i');

    // Zuweisung des void Pointer auf die Variable float_value
    void_ptr = &float_value;
    print_value(void_ptr, 'f');

    // Zuweisung des void Pointer auf die Variable char_value
    void_ptr = &char_value;
    print_value(void_ptr, 'c');

    return 0;

    void *v_ptr;         // Deklaration eines void Pointer
    double f = 2.0;      // Deklaration einer double Variable
    double *f_ptr = &f;  // Deklaration eines double Pointer
    int *i_ptr;          // Deklaration eines int Pointer

    // Zuweisung des void Pointer auf den double Pointer
    v_ptr = f_ptr;  // void pointer nun auf double pointer
    // Zuweisung des void Pointer auf den int Pointer
    i_ptr = v_ptr; // void pointer nun auf int pointer (Verkürzung)

    // Verlustbehaftete Ausgabe des Wertes des int Pointer
    printf("Value of i_ptr = %d\n", *i_ptr);
}



/**
 * Funktion zur Ausgabe des Wertes des void Pointer
 */
void print_value(void *value_ptr, char type) {
    switch (type) {
        case 'i':
            printf("Value of type %c = %d\n", type, *(int *)value_ptr);
            break;
        case 'f':
            printf("Value of type %c = %f\n", type, *(float *)value_ptr);
            break;
        case 'c':
            printf("Value of type %c = %c\n", type, *(char *)value_ptr);
            break;
        default:
            printf("Invalid type\n");
            break;
    }
}
