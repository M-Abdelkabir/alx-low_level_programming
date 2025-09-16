#include "main.h"
/**
* *_strpbrk - check the code.
*
*@s: string that searching into
*@accept: The string of test
* Return: Always a pointer or 0 in the fail.
*/

char *_strpbrk(char *s, char *accept)
{
    char *a;
    
    while (*s) {
        a = accept;
        while (*a) {
            if (*s == *a) return s;
            a++;
        }
        s++;
    }
    return 0;
}
