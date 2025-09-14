#include "main.h"

/**
 * print_chessboard - Print chessboard until empty row
 * @a: Pointer to chessboard rows
 */
void print_chessboard(char (*a)[8])
{
    char (*ligne)[8] = a;
    char *colonne;

    while (ligne <= a + 8)
    {
        for (colonne = *ligne; colonne < *ligne + 8; colonne++)
        {
            putchar(*colonne);
        }
        putchar('\n');
        ligne++;
    }
}
