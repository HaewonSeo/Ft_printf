#include "../includes/ft_printf.h"

int		main(void)
{
	ft_printf("* **************************************************** *\n");
	ft_printf("*                                                      *\n");
	ft_printf("* ft_printf's behavior with conversion specifier %%s   *\n");
	ft_printf("*                                                      *\n");
	ft_printf("* **************************************************** *\n\n");

	printf("printf(\"%%s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%s\", \"\")\n");
	printf("return : %d\n", printf("\t\tresult : |%s|\n\t\t", "") - 16);

	printf("printf(\"%%s\", NULL)\n");
	printf("return : %d\n", printf("\t\tresult : |%s|\n\t\t", NULL) - 16);

	printf("printf(\"%%-s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%-s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%3s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%3s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%-3s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%-3s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%7s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%7s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%-7s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%-7s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%*s\", 7, \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%*s|\n\t\t", 7, "abcde") - 16);

	printf("printf(\"%%*s\", 0, \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%*s|\n\t\t", 0, "abcde") - 16);

	printf("printf(\"%%*s\", -7, \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%*s|\n\t\t", -7, "abcde") - 16);

	printf("printf(\"%%.0s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%.0s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%.s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%.s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%.3s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%.3s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%.7s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%.7s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%3.7s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%3.7s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%7.3s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%7.3s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%7.9s\", \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%7.9s|\n\t\t", "abcde") - 16);

	printf("printf(\"%%7.3s\", NULL)\n");
	printf("return : %d\n", printf("\t\tresult : |%7.3s|\n\t\t", NULL) - 16);

	printf("printf(\"%%.-1s\", \"abcde\")\n");
	printf("\t\twarning : invalid conversion specifier \'-\'\n");

	printf("printf(\"%%.*s\", -1, \"abcde\")\n");
	printf("return : %d\n", printf("\t\tresult : |%.*s|\n\t\t", -1, "abcde") - 16);

	printf("printf(\"%%0s\", \"abcde\")\n");
	printf("\t\tundefined behavior warning: flag '0' with 's'\n");

	printf("printf(\"%%#s\", \"abcde\")\n");
	printf("\t\tundefined behavior warning: flag '#' with 's'\n");

	printf("printf(\"%% s\", \"abcde\")\n");
	printf("\t\tundefined behavior warning: flag ' ' with 's'\n");

	printf("printf(\"%%+s\", \"abcde\")\n");
	printf("\t\tundefined behavior warning: flag '+' with 's'\n");

	printf("\n\n");

	printf("-----------------------------------------------------\n\n");

	ft_printf("ft_printf(\"%%s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%s\", \"\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%s|\n\t\t", "") - 16);

	ft_printf("ft_printf(\"%%s\", NULL)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%s|\n\t\t", NULL) - 16);

	ft_printf("ft_printf(\"%%-s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%3s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%3s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%-3s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-3s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%7s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%7s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%-7s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%*s\", 7, \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*s|\n\t\t", 7, "abcde") - 16);

	ft_printf("ft_printf(\"%%*s\", 0, \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*s|\n\t\t", 0, "abcde") - 16);

	ft_printf("ft_printf(\"%%*s\", -7, \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*s|\n\t\t", -7, "abcde") - 16);

	ft_printf("ft_printf(\"%%.0s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.0s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%.s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%.3s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.3s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%.7s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.7s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%3.7s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%3.7s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%7.3s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%7.3s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%7.9s\", \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%7.9s|\n\t\t", "abcde") - 16);

	ft_printf("ft_printf(\"%%7.3s\", NULL)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%7.3s|\n\t\t", NULL) - 16);

	ft_printf("ft_printf(\"%%.-1s\", \"abcde\")\n");
	ft_printf("\t\twarning : invalid conversion specifier \'-\'\n");

	ft_printf("ft_printf(\"%%.*s\", -1, \"abcde\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.*s|\n\t\t", -1, "abcde") - 16);

	ft_printf("ft_printf(\"%%0s\", \"abcde\")\n");
	ft_printf("\t\tundefined behavior warning: flag '0' with 's'\n");

	ft_printf("ft_printf(\"%%#s\", \"abcde\")\n");
	ft_printf("\t\tundefined behavior warning: flag '#' with 's'\n");

	ft_printf("ft_printf(\"%% s\", \"abcde\")\n");
	ft_printf("\t\tundefined behavior warning: flag ' ' with 's'\n");

	ft_printf("ft_printf(\"%%+s\", \"abcde\")\n");
	ft_printf("\t\tundefined behavior warning: flag '+' with 's'\n");

	ft_printf("\n\n");
}
