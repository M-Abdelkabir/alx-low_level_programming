#include "main.h"

/**
 * print_chessboard - Imprime le tableau en utilisant uniquement des pointeurs
 * @a: Pointeur vers un tableau de 8 caractères (ligne du tableau)
 */
void print_chessboard(char (*a)[8])
{
    char (*ligne)[8]; // Pointeur vers une ligne (tableau de 8 chars)
    char *colonne;    // Pointeur vers un caractère dans la ligne
    
    for (ligne = a; *ligne != '\0'; ligne++)
    {
        for (colonne = *ligne; colonne < *ligne + 8; colonne++)
        {
            _putchar(*colonne);
        }
        _putchar('\n');
    }
}
