#include <stdio.h>
#include "../includes/ft_printf.h"

int		main(void)
{
	ft_printf("* **************************************************** *\n");
	ft_printf("*                                                      *\n");
	ft_printf("*  ft_printf's behavior with conversion specifier %%p  *\n");
	ft_printf("*                                                      *\n");
	ft_printf("* **************************************************** *\n\n");

	char *ptr="";
	void *void_ptr="fdsfsdfa";

	ft_printf("sizeof(ptr) : %d\n", sizeof(ptr));
	ft_printf("sizeof(void_ptr) : %d\n\n", sizeof(ptr));

	printf("printf(\"%%p\", ptr)\n");
	printf("return : %d\n", printf("\t\tresult : |%p|\n\t\t", ptr) - 16);

	printf("printf(\"%%p\", void_ptr)\n");
	printf("return : %d\n", printf("\t\tresult : |%p|\n\t\t", void_ptr) - 16);

	printf("printf(\"%%p\", NULL)\n");
	printf("return : %d\n", printf("\t\tresult : |%p|\n\t\t", NULL) - 16);

	printf("printf(\"%%5p\", ptr)\n");
	printf("return : %d\n", printf("\t\tresult : |%5p|\n\t\t", ptr) - 16);

	printf("printf(\"%%10p\", ptr)\n");
	printf("return : %d\n", printf("\t\tresult : |%10p|\n\t\t", ptr) - 16);

	printf("printf(\"%%15p\", ptr)\n");
	printf("return : %d\n", printf("\t\tresult : |%15p|\n\t\t", ptr) - 16);

	printf("printf(\"%%-15p\", ptr)\n");
	printf("return : %d\n", printf("\t\tresult : |%-15p|\n\t\t", ptr) - 16);

	printf("printf(\"%%-p\", ptr)\n");
	printf("return : %d\n", printf("\t\tresult : |%-p|\n\t\t", ptr) - 16);

	printf("printf(\"%%*p\", 15, ptr)\n");
	printf("return : %d\n", printf("\t\tresult : |%*p|\n\t\t", 15, ptr) - 16);

	printf("printf(\"%%*p\", -15, ptr)\n");
	printf("return : %d\n", printf("\t\tresult : |%*p|\n\t\t", -15, ptr) - 16);

	printf("printf(\"%%.p\", ptr)\n");
	// printf("return : %d\n", printf("\t\tresult : |%.p|\n\t\t", ptr) - 16);

	printf("printf(\"%%.p\", void_ptr)\n");
	// printf("return : %d\n", printf("\t\tresult : |%.p|\n\t\t", void_ptr) - 16);

	printf("printf(\"%%.p\", NULL)\n");
	// printf("return : %d\n", printf("\t\tresult : |%.p|\n\t\t", NULL) - 16);

	printf("printf(\"%%.0p\", ptr)\n");
	printf("\t\tundefined behavior warning: precision used with 'p'\n");

	printf("printf(\"%%.5p\", ptr)\n");
	printf("\t\tundefined behavior warning: precision used with 'p'\n");

	printf("printf(\"%%0p\", ptr)\n");
	printf("\t\tundefined behavior warning: flag '0' with 'p'\n");

	printf("printf(\"%% p\", ptr)\n");
	printf("\t\tundefined behavior warning: flag ' ' with 'p'\n");

	printf("printf(\"%%#p\", ptr)\n");
	printf("\t\tundefined behavior warning: flag '#' with 'p'\n");

	printf("printf(\"%%+p\", ptr)\n");
	printf("\t\tundefined behavior warning: flag '+' with 'p'\n");
	printf("\n\n");

	printf("-----------------------------------------------------\n\n");

	ft_printf("ft_printf(\"%%p\", ptr)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%p|\n\t\t", ptr) - 16);

	ft_printf("ft_printf(\"%%p\", void_ptr)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%p|\n\t\t", void_ptr) - 16);

	ft_printf("ft_printf(\"%%p\", NULL)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%p|\n\t\t", NULL) - 16);

	ft_printf("ft_printf(\"%%5p\", ptr)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%5p|\n\t\t", ptr) - 16);

	ft_printf("ft_printf(\"%%10p\", ptr)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%10p|\n\t\t", ptr) - 16);

	ft_printf("ft_printf(\"%%15p\", ptr)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%15p|\n\t\t", ptr) - 16);

	ft_printf("ft_printf(\"%%-15p\", ptr)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-15p|\n\t\t", ptr) - 16);

	ft_printf("ft_printf(\"%%-p\", ptr)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-p|\n\t\t", ptr) - 16);

	ft_printf("ft_printf(\"%%*p\", 15, ptr)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*p|\n\t\t", 15, ptr) - 16);

	ft_printf("ft_printf(\"%%*p\", -15, ptr)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*p|\n\t\t", -15, ptr) - 16);

	ft_printf("ft_printf(\"%%.p\", ptr)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.p|\n\t\t", ptr) - 16);

	ft_printf("ft_printf(\"%%.p\", void_ptr)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.p|\n\t\t", void_ptr) - 16);

	ft_printf("ft_printf(\"%%.p\", NULL)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.p|\n\t\t", NULL) - 16);

	ft_printf("ft_printf(\"%%.0p\", ptr)\n");
	ft_printf("\t\tundefined behavior warning: precision used with 'p'\n");

	ft_printf("ft_printf(\"%%.5p\", ptr)\n");
	ft_printf("\t\tundefined behavior warning: precision used with 'p'\n");

	ft_printf("ft_printf(\"%%0p\", ptr)\n");
	ft_printf("\t\tundefined behavior warning: flag '0' with 'p'\n");

	ft_printf("ft_printf(\"%% p\", ptr)\n");
	ft_printf("\t\tundefined behavior warning: flag ' ' with 'p'\n");

	ft_printf("ft_printf(\"%%#p\", ptr)\n");
	ft_printf("\t\tundefined behavior warning: flag '#' with 'p'\n");

	ft_printf("ft_printf(\"%%+p\", ptr)\n");
	ft_printf("\t\tundefined behavior warning: flag '+' with 'p'\n");
	ft_printf("\n\n");
}
