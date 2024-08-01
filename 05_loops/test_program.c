/* Beispiel Kapitel Schleifen */
/* Programm: Ausgabe erraten */
/* Author: Dennis Grewe (HS Esslingen) */
#include <stdio.h>

int main() {
    // n > 0, z.B. n == 100
    int n = 100;

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        }
        else {
            n = 3 * n + 1;
        }
        printf("%d\n", n);
    }

    return 0;
}
