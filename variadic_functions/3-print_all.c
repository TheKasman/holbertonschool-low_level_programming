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
	int i = 0, j, printed = 0;
	va_list args;
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
			}
			switch (format[i])
			{
				default:
					break;
				case 'c':
					print_char(&args);
					printed = 1;
					break;
				case 'i':
					print_int(&args);
					printed = 1;
					break;
				case 'f':
					print_float(&args);
					printed = 1;
					break;
				case 's':
					print_string(&args);
					printed = 1;
					break;
			}	j++;
		}	i++;
	}
	printf("\n");
	va_end(args);
}
