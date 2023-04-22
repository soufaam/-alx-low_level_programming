#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
* sum_them_all - ENTRYPOINT
* @n : constant
*@... : unlimited args
* Return: 0 success or uint
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
