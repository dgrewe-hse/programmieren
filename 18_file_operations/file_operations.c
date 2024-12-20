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
 * File: file_operations.c
 * Description: Beispiel für den Einsatz von Funktionen als Parameter.
 *              Dieses Beispiel übernimmt eine Funktion an eine Plot-Funktion
 *              übergeben und zeigt die Funktion auf der Konsole an. In diesem
 *              Beispiel wird die Funktion sin(x), cos(x) und my_sinus_function(x)
 *              geplottet.
 * Author: Dennis Grewe
 * Date: December 19th, 2024
 */

#include <stdio.h>
#include <string.h>

// Struktur für einen Kundendatensatz
// Datensätze werden in Datei "customer.dat" gespeichert
typedef struct Customer {
    int customer_id;
    char first_name[50];
    char last_name[50];
} Customer;

// Funktionsprototypen
/** Schreibt einen Kundendatensatz in die Datei "customer.dat"
 * @param customer Der zu schreibende Kundendatensatz
 */
void write_customer_to_file(Customer customer);

/** Liest einen Kundendatensatz aus der Datei "customer.dat"
 * @param customer_id Die ID des zu lesenden Kundendatensatzes
 * @return Der gelesene Kundendatensatz oder ein leerer Datensatz, wenn nicht gefunden
 */
Customer read_customer_from_file(int customer_id);

/** Aktualisiert einen Kundendatensatz in der Datei "customer.dat"
 * @param customer Der zu aktualisierende Kundendatensatz
 */
void update_customer_in_file(Customer customer);

/** Löscht einen Kundendatensatz aus der Datei "customer.dat"
 * @param customer_id Die ID des zu löschenden Kundendatensatzes
 */
void delete_customer_from_file(int customer_id);

/** Hauptprogramm
 */
int main() {
    // Daten für einen Kundendatensatz
    Customer customer;
    customer.customer_id = 1;
    strcpy(customer.first_name, "John");
    strcpy(customer.last_name, "Doe");

    Customer customer2;
    customer2.customer_id = 2;
    strcpy(customer2.first_name, "Jane");
    strcpy(customer2.last_name, "Doe");

    // Schreiben zweier Kundendatensätze in die Datei
    write_customer_to_file(customer);
    write_customer_to_file(customer2);

    // Lesen des Kundendatensatzes aus der Datei
    Customer customer_read = read_customer_from_file(1);
    printf("Gelesener Kundendatensatz: %d %s %s\n", customer_read.customer_id, 
            customer_read.first_name, customer_read.last_name);

    // Aktualisieren des Kundendatensatzes in der Datei
    strcpy(customer.first_name, "Jane");
    update_customer_in_file(customer);

    // Löschen des Kundendatensatzes aus der Datei
    delete_customer_from_file(1);

    return 0;
}

// Funktionen für Dateioperationen
/** Schreibt einen Kundendatensatz in die Datei "customer.dat"
 * @param customer Der zu schreibende Kundendatensatz
 */
void write_customer_to_file(Customer customer) {
    // Öffnen der Datei im Anhängen-Modus
    FILE *file = fopen("customer.dat", "a");    // a: append

    // Überprüfen, ob die Datei erfolgreich geöffnet wurde
    if (file == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return;
    }

    // Schreiben des Kundendatensatzes in die Datei
    fprintf(file, "%d %s %s\n", customer.customer_id, customer.first_name, customer.last_name);

    // Schließen der Datei
    fclose(file);
}

/**
 * @brief Liest einen Kundendatensatz aus der Datei "customer.dat"
 * @param customer_id Die ID des zu lesenden Kundendatensatzes
 * @return Der gelesene Kundendatensatz oder ein leerer Datensatz, wenn nicht gefunden
 */
Customer read_customer_from_file(int customer_id) {
    // Deklaration des Kundendatensatzes
    Customer customer = {0};
    int found = 0; // Flag, um zu überprüfen, ob der Datensatz gefunden wurde

    // Öffnen der Datei im Lese-Modus
    FILE *file = fopen("customer.dat", "r");    // r: read

    // Überprüfen, ob die Datei erfolgreich geöffnet wurde
    if (file == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return customer; // Rückgabe eines leeren Datensatzes
    }

    // Durchlaufen der Datei, um den gewünschten Kundendatensatz zu finden
    while (fscanf(file, "%d %s %s", &customer.customer_id, customer.first_name, customer.last_name) != EOF) {
        if (customer.customer_id == customer_id) {
            found = 1; // Datensatz gefunden
            break; // Schleife beenden
        }
    }

    // Schließen der Datei
    fclose(file);

    if (!found) {
        printf("Kundendatensatz mit ID %d nicht gefunden.\n", customer_id);
        // Rückgabe eines leeren Datensatzes, wenn nicht gefunden
        customer.customer_id = -1; // Beispiel für einen ungültigen ID-Wert
    }

    // Rückgabe des gelesenen oder leeren Kundendatensatzes
    return customer;
}

/**
 * @brief Aktualisiert einen Kundendatensatz in der Datei "customer.dat"
 * @param customer Der zu aktualisierende Kundendatensatz
 */
void update_customer_in_file(Customer customer) {
    // Temporäre Struktur für das Lesen der Datensätze
    Customer temp;
    int found = 0; // Flag, um zu überprüfen, ob der Datensatz gefunden wurde

    // Öffnen der Datei im Lese-Modus
    FILE *file = fopen("customer.dat", "r+"); // r+: read and write
    if (file == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return;
    }

    // Durchlaufen der Datei, um den Datensatz zu finden
    while (fscanf(file, "%d %s %s", &temp.customer_id, temp.first_name, temp.last_name) != EOF) {
        if (temp.customer_id == customer.customer_id) {
            // Datensatz gefunden, aktualisieren
            found = 1;
            fseek(file, -((long)sizeof(Customer)), SEEK_CUR); // Zurück zum Anfang des Datensatzes
            fprintf(file, "%d %s %s\n", customer.customer_id, customer.first_name, customer.last_name);
            break;
        }
    }

    if (!found) {
        printf("Kundendatensatz mit ID %d nicht gefunden. Aktualisierung fehlgeschlagen.\n", customer.customer_id);
    } else {
        printf("Kundendatensatz mit ID %d erfolgreich aktualisiert.\n", customer.customer_id);
    }

    // Schließen der Datei
    fclose(file);
}

/**
 * @brief Löscht einen Kundendatensatz aus der Datei "customer.dat"
 * @param customer_id Die ID des zu löschenden Kundendatensatzes
 */
void delete_customer_from_file(int customer_id) {
    // Temporäre Struktur für das Lesen der Datensätze
    Customer temp;
    FILE *file = fopen("customer.dat", "r"); // Öffnen der Datei im Lese-Modus
    FILE *temp_file = fopen("temp.dat", "w"); // Temporäre Datei zum Speichern der verbleibenden Datensätze

    // Überprüfen, ob die Dateien erfolgreich geöffnet wurden
    if (file == NULL || temp_file == NULL) {
        printf("Fehler beim Öffnen der Datei.\n");
        return;
    }

    // Durchlaufen der Datei, um den Datensatz zu finden und zu löschen
    while (fscanf(file, "%d %s %s", &temp.customer_id, temp.first_name, temp.last_name) != EOF) {
        if (temp.customer_id != customer_id) {
            // Wenn die ID nicht übereinstimmt, in die temporäre Datei schreiben
            fprintf(temp_file, "%d %s %s\n", temp.customer_id, temp.first_name, temp.last_name);
        }
    }

    // Schließen der Dateien
    fclose(file);
    fclose(temp_file);

    // Löschen der ursprünglichen Datei und Umbenennen der temporären Datei
    remove("customer.dat");
    rename("temp.dat", "customer.dat");

    printf("Kundendatensatz mit ID %d erfolgreich gelöscht.\n", customer_id);
}
