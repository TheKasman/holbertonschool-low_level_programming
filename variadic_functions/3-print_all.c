#include "variadic_functions.h"


/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, printed = 0;
	char *str;
	char type;

	va_start(args, format);
	while (format && format[i])
	{
		type = format[i];

		if ((type == 'c' || type == 'i' ||
				type == 'f' || type == 's') && printed)
			printf(", ");

		switch (type)
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
				printf("%f", va_arg(args, double));
				printed = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str);
				if (!str)
					printf("(nil)");
				printed = 1;
				break;
		}	i++;
	}
	va_end(args);
	printf("\n");
}
