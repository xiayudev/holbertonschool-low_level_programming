#include "main.h"

/**
 * _strncpy - function
 * @dest: The string to be evaluated
 * @src: The string to be evaluated
 * @n: The number of bytes
 * Copy a string
 *
 * Return: Pointer to the resulting dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len_src;

	i = 0;
	len_src = 0;

	while (src[len_src] != '\0')
		len_src++;

	while (i < n)
	{
		/*If n > length of src, the reminder of dest padded with nul character*/
		if (i > len_src)
			*(dest + i) = '\0';
		else
			*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
