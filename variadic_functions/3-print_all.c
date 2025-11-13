#include "variadic_functions.h"


/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j,  printed = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && printed)
			{
				printf(", ");
				break;
			}	j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), printed = 1;
				break;
			case 's':
				str = va_arg(args, char *), printed = 1;
				if (!str)
					printf("(nil)");
				printf("%s", str);
				break;
		}	i++;
	}
	va_end(args);
	printf("\n");
}
