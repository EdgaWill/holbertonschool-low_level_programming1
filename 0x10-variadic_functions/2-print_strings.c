#include "variadic_functions.h"

/**
 * print_strings - check  code
 * @separator: const char
 * @n: unsigned int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int c;
	char *ptr;

	va_start(s, n);
	for (c = 0; c < n; c++)
	{
		ptr = va_arg(s, char*);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (c == n - 1 || separator == NULL)
		{
		continue;
		}
		printf("%s", separator);
	}
	printf("\n");
}
