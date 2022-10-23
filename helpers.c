#include "main.h"

/**
 * strcat - concatenates two string together
 * @dest: string to be concatinated to
 * @src: string to be added
 * Return: both strings concatinated together
 */

char *_strcat(char *dest, char *src)
{
	int destlen, srclen, idx = 0, destidx = 0, srcidx = 0;
	char *newstr;

	for (destlen = 0; dest[destlen]; destlen++)
		;
	for (srclen = 0; src[srclen]; srclen++)
		;

	newstr = malloc(sizeof(char) * (destlen + srclen + 1));

	while (idx < (destlen + srclen))
	{
		if (dest[destidx] != '\0')
			newstr[idx++] = dest[destidx++];
		else if (src[srcidx] != '\0')
			newstr[idx++] = src[srcidx++];
	}

	return newstr;
}