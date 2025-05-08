#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @arguments: arguments given
 */

void print_char(va_list *arguments)
{
	int character = va_arg(*arguments, int);
	
	printf("%c", character);
}

void print_int(va_list *arguments)
{
	int number = va_arg(*arguments, int);

	printf("%d", number);
}

void print_float(va_list *arguments)
{
	float number = va_arg(*arguments, double);

	printf("%f", number);
}

void print_string(va_list *arguments)
{
	char *string = va_arg(*arguments, char *);

	printf("%s", string);
}

void print_all(const char* const format, ...)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";
	va_list arguments;
	function_t functions[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL},
	};

	va_start(arguments, format);

	while (format != NULL)
	{
		j = 0;

		while (functions[j].identifier != '\0')
		{
			if (format[i] == functions[j].identifier)
			{
				printf("%s", separator);
				separator = ", ";
				functions[j].fptr(arguments);
				break;
			}

			j++;
		}

		i++;
	}

	va_end(arguments);

	printf("\n");
}
