#include "../includes/ft_printf.h"

int main()
{
	ft_printf("* **************************************************** *\n");
	ft_printf("*                                                      *\n");
	ft_printf("*  ft_printf's behavior with conversion specifier %%c  *\n");
	ft_printf("*                                                      *\n");
	ft_printf("* **************************************************** *\n\n");

	printf("printf(\"%%c\", 'a')\n");
	printf("return : %d\n", printf("\t\tresult : |%c|\n\t\t", 'a') - 16);

	printf("printf(\"%%-c\", 'a')\n");
	printf("return : %d\n", printf("\t\tresult : |%-c|\n\t\t", 'a') - 16);

	printf("printf(\"%%c\", '\\0')\n");
	printf("return : %d\n", printf("\t\tresult : |%c|\n\t\t", '\0') - 16);

	printf("printf(\"%%5c\", '\\0')\n");
	printf("return : %d\n", printf("\t\tresult : |%5c|\n\t\t", '\0') - 16);

	printf("printf(\"%%-5c\", '\\0')\n");
	printf("return : %d\n", printf("\t\tresult : |%-5c|\n\t\t", '\0') - 16);

	printf("printf(\"%%5c\", 'a')\n");
	printf("return : %d\n", printf("\t\tresult : |%5c|\n\t\t", 'a') - 16);

	printf("printf(\"%%-5c\", 'a')\n");
	printf("return : %d\n", printf("\t\tresult : |%-5c|\n\t\t", 'a') - 16);

	printf("printf(\"%%*c\", 5, 'a')\n");
	printf("return : %d\n", printf("\t\tresult : |%*c|\n\t\t", 5, 'a') - 16);

	printf("printf(\"%%*c\", -5, 'a')\n");
	printf("return : %d\n", printf("\t\tresult : |%*c|\n\t\t", -5, 'a') - 16);

	printf("printf(\"%%.c\", 'a')\n");
	printf("return : %d\n", printf("\t\tresult : |%.c|\n\t\t", 'a') - 16);

	printf("printf(\"%%.5c\", 'a')\n");
	printf("\t\tundefined behavior warning: precision used with 'c'\n");

	printf("printf(\"%%7.3c\", 'a')\n");
	printf("\t\tundefined behavior warning: precision used with 'c'\n");

	printf("printf(\"%%0c\", 'a')\n");
	printf("\t\tundefined behavior warning: flag '0' with 'c'\n");

	printf("printf(\"%%#c\", 'a')\n");
	printf("\t\tundefined behavior warning: flag '#' with 'c'\n");

	printf("printf(\"%% c\", 'a')\n");
	printf("\t\tundefined behavior warning: flag ' ' with 'c'\n");

	printf("printf(\"%%+c\", 'a')\n");
	printf("\t\tundefined behavior warning: flag '+' with 'c'\n");
	printf("\n\n");

	printf("-----------------------------------------------------\n\n");

	ft_printf("ft_printf(\"%%c\", 'a')\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%c|\n\t\t", 'a') - 16);

	ft_printf("ft_printf(\"%%-c\", 'a')\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-c|\n\t\t", 'a') - 16);

	ft_printf("ft_printf(\"%%c\", '\\0')\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%c|\n\t\t", '\0') - 16);

	ft_printf("ft_printf(\"%%5c\", '\\0')\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%5c|\n\t\t", '\0') - 16);

	ft_printf("ft_printf(\"%%-5c\", '\\0')\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-5c|\n\t\t", '\0') - 16);

	ft_printf("ft_printf(\"%%5c\", 'a')\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%5c|\n\t\t", 'a') - 16);

	ft_printf("ft_printf(\"%%-5c\", 'a')\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-5c|\n\t\t", 'a') - 16);


	ft_printf("ft_printf(\"%%*c\", 5, 'a')\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*c|\n\t\t", 5, 'a') - 16);

	ft_printf("ft_printf(\"%%*c\", -5, 'a')\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*c|\n\t\t", -5, 'a') - 16);

	ft_printf("ft_printf(\"%%.c\", 'a')\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.c|\n\t\t", 'a') - 16);

	ft_printf("ft_printf(\"%%.5c\", 'a')\n");
	ft_printf("\t\tundefined behavior warning: precision used with 'c'\n");

	ft_printf("ft_printf(\"%%7.3c\", 'a')\n");
	ft_printf("\t\tundefined behavior warning: precision used with 'c'\n");

	ft_printf("ft_printf(\"%%0c\", 'a')\n");
	ft_printf("\t\tundefined behavior warning: flag '0' with 'c'\n");

	ft_printf("ft_printf(\"%%#c\", 'a')\n");
	ft_printf("\t\tundefined behavior warning: flag '#' with 'c'\n");

	ft_printf("ft_printf(\"%% c\", 'a')\n");
	ft_printf("\t\tundefined behavior warning: flag ' ' with 'c'\n");

	ft_printf("ft_printf(\"%%+c\", 'a')\n");
	ft_printf("\t\tundefined behavior warning: flag '+' with 'c'\n");
	ft_printf("\n\n");

}
