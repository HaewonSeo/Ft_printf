#include "../includes/ft_printf.h"

int		main(void)
{
	ft_printf("* **************************************************** *\n");
	ft_printf("*                                                      *\n");
	ft_printf("*  ft_printf's behavior with conversion specifier %%u  *\n");
	ft_printf("*                                                      *\n");
	ft_printf("* **************************************************** *\n\n");

	printf("printf(\"%%u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%u|\n\t\t", 12345) - 16);

	printf("printf(\"%%u\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%u|\n\t\t", -12345) - 16);

	printf("printf(\"%%3u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%3u|\n\t\t", 12345) - 16);

	printf("printf(\"%%7u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%7u|\n\t\t", 12345) - 16);

	printf("printf(\"%%-7u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-7u|\n\t\t", 12345) - 16);

	printf("printf(\"%%-u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-u|\n\t\t", 12345) - 16);

	printf("printf(\"%%*u\", 7, 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%*u|\n\t\t", 7, 12345) - 16);

	printf("printf(\"%%*u\", -7, 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%*u|\n\t\t", -7, 12345) - 16);

	printf("printf(\"%%.u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.u|\n\t\t", 12345) - 16);

	printf("printf(\"%%.0u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.0u|\n\t\t", 12345) - 16);

	printf("printf(\"%%.3u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.3u|\n\t\t", 12345) - 16);

	printf("printf(\"%%.7u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.7u|\n\t\t", 12345) - 16);

	printf("printf(\"%%-.7u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-.7u|\n\t\t", 12345) - 16);

	printf("printf(\"%%-9.7u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-9.7u|\n\t\t", 12345) - 16);

	printf("printf(\"%%9.7u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%9.7u|\n\t\t", 12345) - 16);

	printf("printf(\"%%-7.9u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-7.9u|\n\t\t", 12345) - 16);

	printf("printf(\"%%-3.7u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-3.7u|\n\t\t", 12345) - 16);

	printf("printf(\"%%-7.3u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-7.3u|\n\t\t", 12345) - 16);

	printf("printf(\"%%.3u\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.3u|\n\t\t", -12345) - 16);

	printf("printf(\"%%.7u\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.7u|\n\t\t", -12345) - 16);

	printf("printf(\"%%-.7u\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-.7u|\n\t\t", -12345) - 16);

	printf("printf(\"%%-9.7u\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-9.7u|\n\t\t", -12345) - 16);

	printf("printf(\"%%-7.9u\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-7.9u|\n\t\t", -12345) - 16);

	printf("printf(\"%%-3.7u\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-3.7u|\n\t\t", -12345) - 16);

	printf("printf(\"%%-7.3u\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-7.3u|\n\t\t", -12345) - 16);

	printf("printf(\"%%0u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%0u|\n\t\t", 12345) - 16);

	printf("printf(\"%%07u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%07u|\n\t\t", 12345) - 16);

	printf("printf(\"%%u\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%u|\n\t\t", 0) - 16);

	printf("printf(\"%%3u\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%3u|\n\t\t", 0) - 16);

	printf("printf(\"%%3.u\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%3.u|\n\t\t", 0) - 16);

	printf("printf(\"%%03u\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%03u|\n\t\t", 0) - 16);

	printf("printf(\"%%09.0u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%09.0u|\n\t\t", 12345) - 16);

	printf("printf(\"%%09.7u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%09.7u|\n\t\t", 12345) - 16);

	printf("printf(\"%%07.9u\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%07.9u|\n\t\t", 12345) - 16);

	printf("printf(\"%%.u\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%.u|\n\t\t", 0) - 16);

	printf("printf(\"%%.3u\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%.3u|\n\t\t", 0) - 16);

	printf("printf(\"%% u\", 12345)\n");
	printf("\t\tundefined behaviour warning : flag ' ' with 'u'\n");

	printf("printf(\"%%+u\", 12345)\n");
	printf("\t\tundefined behaviour warning : flag '+' with 'u'\n");

	printf("printf(\"%%#u\", 0)\n");
	printf("\t\tundefined behavior warning: flag '#' with 'u'\n");

	printf("\n\n");

	printf("-----------------------------------------------------\n\n");

	ft_printf("ft_printf(\"%%u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%u\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%u|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%3u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%3u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%7u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%7u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-7u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%*u\", 7, 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*u|\n\t\t", 7, 12345) - 16);

	ft_printf("ft_printf(\"%%*u\", -7, 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*u|\n\t\t", -7, 12345) - 16);

	ft_printf("ft_printf(\"%%.u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%.0u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.0u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%.3u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.3u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%.7u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.7u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-.7u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-.7u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-9.7u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-9.7u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%9.7u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%9.7u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-7.9u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7.9u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-3.7u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-3.7u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-7.3u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7.3u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%.3u\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.3u|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%.7u\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.7u|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%-.7u\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-.7u|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%-9.7u\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-9.7u|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%-7.9u\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7.9u|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%-3.7u\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-3.7u|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%-7.3u\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7.3u|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%0u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%0u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%07u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%07u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%u\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%u|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%3u\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%3u|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%3.u\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%3.u|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%03u\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%03u|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%09.0u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%09.0u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%09.7u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%09.7u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%07.9u\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%07.9u|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%.u\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.u|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%.3u\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.3u|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%% u\", 12345)\n");
	ft_printf("\t\tundefined behaviour warning : flag ' ' with 'u'\n");

	ft_printf("ft_printf(\"%%+u\", 12345)\n");
	ft_printf("\t\tundefined behaviour warning : flag '+' with 'u'\n");

	ft_printf("ft_printf(\"%%#u\", 0)\n");
	ft_printf("\t\tundefined behavior warning: flag '#' with 'u'\n");

	ft_printf("\n\n");
}
