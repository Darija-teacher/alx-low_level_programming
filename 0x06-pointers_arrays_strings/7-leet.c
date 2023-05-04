#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *p)

{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for  (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] == s1[j])
			{
				p[i] = s2[j];
			}
		}
	}
	return (p);
}

