#include "main.h"

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */
char *rot13(char *s)
{
	int i;
	char storeh[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char storel[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{	
			if (s[i] == storeh[j])
			{
				s[i] = store[j];
				break;

			}
		}
	}
	return (s);
}
