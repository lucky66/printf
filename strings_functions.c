#include "main.h"

/**
 * _strlen - length of string.
 * @s: variable input string.
 * Return: integer.
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * *_reverse - reverses the content of an array of intergers.
 * @s: input array.
 * @n: number of elements of the array.
 * Return: s of char *
 */
char *_reverse(char *s, int n)
{
	int i, aux;

	n--;

	for (i = 0; i <= n; i++, n--)
	{
		aux = s[i];
		s[i] = s[n];
		s[n] = aux;
	}

	return (s);
}

/**
 * *_rot13 - encodes a string with rot13
 * @str: string
 * Return: encoded string
 */

char *_rot13(char *str)
{
	int i, j;
	char chs[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

		for (i = 0; str[i]; i++)
		{
			for (j = 0; chs[j]; j++)
			{
				if (str[i] == chs[j])
				{
					str[i] = rot[j];
					break;
				}
			}
		}

		return (str);
}

/**
 * *_strcpy - copies the string.
 * @dest: pointer dest.
 * @src: string.
 * Return: array result.
 */

void _strcpy(char *dest, char *src)
{
	int len = _strlen(src);
	int i;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
}

/**
 * _rev_ptr - reverses the content of a pointer
 * @str: str var
 */

void _rev_ptr(char *str)
{
	int i, aux;
	int len = _strlen(str) - 1;

	for (i = 0; i <= len; i++, len--)
	{
		aux = str[i];
		str[i] = str[len];
		str[len] = aux;
	}
}
