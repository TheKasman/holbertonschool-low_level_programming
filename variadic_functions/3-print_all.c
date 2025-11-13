#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: the argument
 */

void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * print_int - prints an int
 * @args: the argument
 */

void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}


/**
 * print_float - prints a float
 * @args: the argument
 */

void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - prints a string
 * @args: the argument
 */

void print_string(va_list *args)
{
	char *str = va_arg(*args, char *);

	if (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}


/**
 * print_all - prints the things!
 * @format: read only type
 * @...: the list
 */


void print_all(const char * const format, ...)
{
	int i = 0, printed = 0;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (printed &&
		(format[i] == 'c' || format[i] == 'i' ||
		 format[i] == 'f' || format[i] == 's'))
			printf(", ");

		switch (format[i])
		{
			default:
				break;
			case 'c':
				print_char(&args);
				break;
			case 'i':
				print_int(&args);
				break;
			case 'f':
				print_float(&args);
				break;
			case 's':
				print_string(&args);
				break;
		}

		i++;
	}
	printf("\n");
	va_end(args);
}
