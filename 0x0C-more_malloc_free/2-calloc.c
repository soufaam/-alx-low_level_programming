#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _calloc -  Entrypoint
* Description: 'the program's description _strdup
* @nmemb : 1 param
* @size: 2 param
*  Return: Always 0 (Success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i = 0;
	void *var;
	unsigned char *dest;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	var = malloc(nmemb * size);
	if (!var)
		return (NULL);
	dest = var;
	for (i = 0; i < (nmemb * size); i++)
		dest[i] = 0;
	return (dest);
}
