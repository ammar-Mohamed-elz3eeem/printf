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

char *hex_converter(__uint64_t num)
{
	__uint64_t temp;
	int hexlen = 0, idx = 0;
	char *hexstr;

	if (num == 0)
		return (NULL);
	temp = num;
	while (temp > 0)
	{
		temp = temp / 16;
		hexlen++;
	}

	hexstr = malloc(sizeof(char) * (hexlen + 1));

	if (hexstr == NULL)
		return (NULL);

	temp = num;
	while (idx < hexlen)
	{
		if ((temp % 16) > 9)
			hexstr[hexlen - idx - 1] = (temp % 16) + 87;
		else
			hexstr[hexlen - idx - 1] = (temp % 16) + '0';

		temp /= 16;
		idx++;
	}
	return hexstr;
}