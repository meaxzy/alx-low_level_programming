#include "variadic_functions.h"

/**
 * print_char - function prints char
 * @arg: argument
 *
 * Return: format specifier
 */
void print_all(const char * const format, ...)
{
        int i, check_count;
        char *str;

        va_list args;

        va_start(args, format);
        int i = 0;

        while (format != NULL && format[i] != '\0')
        {
		switch (format[i])
		{
			case 'c':
                                printf("%c", va_arg(args, char));
				check_count = 0;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				check_count = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
                                check_count = 0;
                                break;
			case 's':
				str = va_arg(args, char *)
					if (str == NULL)
						str = ("(nill)");
				printf("%s", str);
				break;
			default:
				check_count = 1;
				break;
		}
		if (format [i + 1] != '\0' && check_count == 0)
			printf(",");
		i++;
	}
	printf("\n");
	va_end(args);
}
