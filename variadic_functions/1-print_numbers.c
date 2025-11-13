#include "variadic_functions.h"

/**
 * print_numbers - prints numbers... DUH.
 * @separator: separates my life from this moral coil.
 * @n: a counter?
 * @...: the list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if(separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if(separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
