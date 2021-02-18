#include "../includes/ft_printf.h"

int		main(void)
{
	ft_printf("* ******************************************************** *\n");
	ft_printf("*                                                          *\n");
	ft_printf("*  ft_printf's behavior with conversion specifier %%x, %%X  *\n");
	ft_printf("*                                                          *\n");
	ft_printf("* ******************************************************** *\n\n");

	printf("printf(\"%%x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%x|\n\t\t", 768955) - 16);

	printf("printf(\"%%x\", 4294967295u)\n");
	printf("return : %d\n", printf("\t\tresult : |%x|\n\t\t", 4294967295u) - 16);

	printf("printf(\"%%x\", -768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%x|\n\t\t", -768955) - 16);

	printf("printf(\"%%X\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%X|\n\t\t", 768955) - 16);


	printf("printf(\"%%3x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%3x|\n\t\t", 768955) - 16);

	printf("printf(\"%%7x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%7x|\n\t\t", 768955) - 16);

	printf("printf(\"%%-7x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%-7x|\n\t\t", 768955) - 16);

	printf("printf(\"%%-x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%-x|\n\t\t", 768955) - 16);

	printf("printf(\"%%*x\", 7, 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%*x|\n\t\t", 7, 768955) - 16);

	printf("printf(\"%%*x\", -7, 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%*x|\n\t\t", -7, 768955) - 16);

	printf("printf(\"%%.x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%.x|\n\t\t", 768955) - 16);

	printf("printf(\"%%.0x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%.0x|\n\t\t", 768955) - 16);

	printf("printf(\"%%.3x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%.3x|\n\t\t", 768955) - 16);

	printf("printf(\"%%.7x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%.7x|\n\t\t", 768955) - 16);

	printf("printf(\"%%-.7x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%-.7x|\n\t\t", 768955) - 16);

	printf("printf(\"%%0x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%0x|\n\t\t", 768955) - 16);

	printf("printf(\"%%07x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%07x|\n\t\t", 768955) - 16);


	printf("printf(\"%%x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%x|\n\t\t", 0) - 16);

	printf("printf(\"%%3x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%3x|\n\t\t", 0) - 16);

	printf("printf(\"%%3.x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%3.x|\n\t\t", 0) - 16);

	printf("printf(\"%%03x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%03x|\n\t\t", 0) - 16);

	printf("printf(\"%%.x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%.x|\n\t\t", 0) - 16);

	printf("printf(\"%%.3x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%.3x|\n\t\t", 0) - 16);

	printf("printf(\"%%#.3x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%#.3x|\n\t\t", 0) - 16);

	printf("printf(\"%%#x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%#x|\n\t\t", 0) - 16);

	printf("printf(\"%%#3x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%#.3x|\n\t\t", 0) - 16);

	printf("printf(\"%%#.03x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%#.03x|\n\t\t", 0) - 16);

	printf("printf(\"%%#3.0x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%#3.0x|\n\t\t", 0) - 16);

	printf("printf(\"%%#03x\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%#03x|\n\t\t", 0) - 16);


	printf("printf(\"%%#x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%#x|\n\t\t", 768955) - 16);

	printf("printf(\"%%#7x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%#7x|\n\t\t", 768955) - 16);

	printf("printf(\"%%#9x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%#9x|\n\t\t", 768955) - 16);

	printf("printf(\"%%#.3x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%#.3x|\n\t\t", 768955) - 16);

	printf("printf(\"%%#15.3x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%#15.3x|\n\t\t", 768955) - 16);

	printf("printf(\"%%#15.5x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%#15.5x|\n\t\t", 768955) - 16);

	printf("printf(\"%%#15.7x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%#15.7x|\n\t\t", 768955) - 16);

	printf("printf(\"%%#015.7x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%#015.7x|\n\t\t", 768955) - 16);

	printf("printf(\"%%#015x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%#015x|\n\t\t", 768955) - 16);

	printf("printf(\"%%#3.7x\", 768955)\n");
	printf("return : %d\n", printf("\t\tresult : |%#3.7x|\n\t\t", 768955) - 16);

	printf("printf(\"%% x\", 768955)\n");
	printf("\t\tundefined behavior warning: flag ' ' with 'x'\n");

	printf("printf(\"%%+x\", 768955)\n");
	printf("\t\tundefined behavior warning: flag '+' with 'x'\n");
	printf("\n\n");

	printf("-----------------------------------------------------\n\n");

	ft_printf("ft_printf(\"%%x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%x\", 4294967295u)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%x|\n\t\t", 4294967295u) - 16);

	ft_printf("ft_printf(\"%%x\", -768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%x|\n\t\t", -768955) - 16);

	ft_printf("ft_printf(\"%%X\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%X|\n\t\t", 768955) - 16);


	ft_printf("ft_printf(\"%%3x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%3x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%7x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%7x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%-7x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%-x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%*x\", 7, 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*x|\n\t\t", 7, 768955) - 16);

	ft_printf("ft_printf(\"%%*x\", -7, 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*x|\n\t\t", -7, 768955) - 16);

	ft_printf("ft_printf(\"%%.x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%.0x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.0x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%.3x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.3x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%.7x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.7x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%-.7x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-.7x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%0x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%0x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%07x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%07x|\n\t\t", 768955) - 16);


	ft_printf("ft_printf(\"%%x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%x|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%3x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%3x|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%3.x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%3.x|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%03x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%03x|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%.x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.x|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%.3x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.3x|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%#.3x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#.3x|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%#x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#x|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%#3x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#.3x|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%#.03x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#.03x|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%#3.0x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#3.0x|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%#03x\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#03x|\n\t\t", 0) - 16);


	ft_printf("ft_printf(\"%%#x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%#7x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#7x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%#9x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#9x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%#.3x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#.3x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%#15.3x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#15.3x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%#15.5x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#15.5x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%#15.7x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#15.7x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%#015.7x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#015.7x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%#015x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#015x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%%#3.7x\", 768955)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%#3.7x|\n\t\t", 768955) - 16);

	ft_printf("ft_printf(\"%% x\", 768955)\n");
	ft_printf("\t\tundefined behavior warning: flag ' ' with 'x'\n");

	ft_printf("ft_printf(\"%%+x\", 768955)\n");
	ft_printf("\t\tundefined behavior warning: flag '+' with 'x'\n");
	ft_printf("\n\n");
}
