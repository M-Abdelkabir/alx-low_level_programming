#include <unistd.h>
/**
 * _putchar - just put a caracter
 * @c : one caracter
 * Return : code success or fail
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
