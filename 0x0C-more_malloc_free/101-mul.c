#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * _strlen - Calculates the length of a string
 * @s: The string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;
	while (s[len])
		len++;
	return len;
}
/**
 * print_error - Prints "Error" and exits with status 98
 */
void print_error(void)
{
	char *error = "Error\n";
	int i = 0;
	while (error[i])
		_putchar(error[i++]);
	exit(98);
}

/**
 * is_valid_number - Checks if a string contains only digits
 * @s: The string to check
 *
 * Return: 1 if valid, 0 otherwise
 */
int is_valid_number(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] < '0' && s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * multiply - Multiplies two numbers as strings
 * @num1: First number as string
 * @num2: Second number as string
 */
void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	int i, j, carry, product;
	int *result;
	
	result = calloc(len_result, sizeof(int));
	if (result == NULL)
		print_error();
	
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = product / 10;
			result[i + j + 1] = product % 10;
		}
		result[i + j + 1] = carry;
	}
	i = 0;
	while (i < len_result && result[i] == 0)
		i++;
	if (i == len_result)
		_putchar('0');
	else
		for (; i < len_result; i++)
			_putchar(result[i] + '0');
	_putchar('\n');
	free(result);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error();
	
	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
		print_error();
	
	multiply(argv[1], argv[2]);
	
	return (0);
}
