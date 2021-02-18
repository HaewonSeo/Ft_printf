#include "../includes/ft_printf.h"

int		main(void)
{
	ft_printf("* **************************************************** *\n");
	ft_printf("*                                                      *\n");
	ft_printf("* ft_printf's behavior with conversion specifier %%%%  *\n");
	ft_printf("*                                                      *\n");
	ft_printf("* **************************************************** *\n\n");

	printf("printf(\"%%%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |%%|\n\t\t") - 16);

	printf("printf(\"%%5%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |%5%|\n\t\t") - 16);

	printf("printf(\"%%-5%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |%-5%|\n\t\t") - 16);

	printf("printf(\"%%-%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |%-%|\n\t\t") - 16);

	printf("printf(\"%%*%%\", 5)\n");
	printf("return : %d\n", printf("\t\tresult : |%*%|\n\t\t", 5) - 16);

	printf("printf(\"%%*%%\", -5)\n");
	printf("return : %d\n", printf("\t\tresult : |%*%|\n\t\t", -5) - 16);

	printf("printf(\"%%.5%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |%.5%|\n\t\t") - 16);

	printf("printf(\"%%.-5%%\")\n");
	printf("\t\twarning : invalid conversion specifier '-'\n");

	printf("printf(\"%%.*%%\", -5)\n");
	printf("return : %d\n", printf("\t\tresult : |%.*%|\n\t\t", -5) - 16);

	printf("printf(\"%%.%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |%.%|\n\t\t") - 16);

	printf("printf(\"%%.0%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |%.0%|\n\t\t") - 16);

	printf("printf(\"%%05%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |%05%|\n\t\t") - 16);

	printf("printf(\"%% %%\")\n");
	printf("return : %d\n", printf("\t\tresult : |% %|\n\t\t") - 16);

	printf("printf(\"%% 05%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |% 05%|\n\t\t") - 16);

	printf("printf(\"%%-05%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |%-05%|\n\t\t") - 16);

	printf("printf(\"%%#5%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |%#5%|\n\t\t") - 16);

	printf("printf(\"%%+5%%\")\n");
	printf("return : %d\n", printf("\t\tresult : |%+5%|\n\t\t") - 16);

	printf("-----------------------------------------------------\n\n");

	ft_printf("ft_printf(\"%%%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%%|\n\t\t") - 16);

	ft_printf("ft_printf(\"%%5%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%5%|\n\t\t") - 16);

	ft_printf("ft_printf(\"%%-5%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-5%|\n\t\t") - 16);

	ft_printf("ft_printf(\"%%-%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-%|\n\t\t") - 16);

	ft_printf("ft_printf(\"%%*%%\", 5)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*%|\n\t\t", 5) - 16);

	ft_printf("ft_printf(\"%%*%%\", -5)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*%|\n\t\t", -5) - 16);

	ft_printf("ft_printf(\"%%.5%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.5%|\n\t\t") - 16);

	ft_printf("ft_printf(\"%%.-5%%\")\n");
	ft_printf("\t\twarning : invalid conversion specifier '-'\n");

	ft_printf("ft_printf(\"%%.*%%\", -5)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.*%|\n\t\t", -5) - 16);

	ft_printf("ft_printf(\"%%.%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.%|\n\t\t") - 16);

	ft_printf("ft_printf(\"%%.0%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.0%|\n\t\t") - 16);

	ft_printf("ft_printf(\"%%05%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%05%|\n\t\t") - 16);

	ft_printf("ft_printf(\"%% %%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |% %|\n\t\t") - 16);

	ft_printf("ft_printf(\"%% 05%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |% 05%|\n\t\t") - 16);

	ft_printf("ft_printf(\"%%-05%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-05%|\n\t\t") - 16);

	ft_printf("ft_printf(\"%%#5%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#5%|\n\t\t") - 16);

	ft_printf("ft_printf(\"%%+5%%\")\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+5%|\n\t\t") - 16);
	ft_printf("\n\n");
}
