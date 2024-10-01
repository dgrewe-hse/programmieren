/* Beispiel für ein Programm um Werte in C auf 
 * der Konsole zu formatieren */
#include <stdio.h>

int main(void) {
    int zahl = 2002;
    float gk = 12.34f;
    printf("%d\n", zahl);
    printf("%8d\n", zahl);
    printf("%-8d\n", zahl);
    printf("%o\n", zahl);
    printf("%x\n", zahl);
    printf("\n\n%f\n", gk);
    printf("%8.2f\n", gk);
    printf("%8.1f\n", gk);
    printf("\nNr\tPreis\n");
    printf("%3d\t%6.2f\n", 1, 1.5);
    printf("%3d\t%6.2f\n", 101, 121.5);
	return 0;
}
