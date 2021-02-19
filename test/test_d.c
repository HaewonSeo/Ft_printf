#include  <stdio.h>
#include "../includes/ft_printf.h"

int		main(void)
{
	ft_printf("* **************************************************** *\n");
	ft_printf("*                                                      *\n");
	ft_printf("* ft_printf's behavior with conversion specifier %%d   *\n");
	ft_printf("*                                                      *\n");
	ft_printf("* **************************************************** *\n\n");

	printf("printf(\"%%d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%d|\n\t\t", 12345) - 16);

	printf("printf(\"%%d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%d|\n\t\t", -12345) - 16);

	printf("printf(\"%%3d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%3d|\n\t\t", 12345) - 16);

	printf("printf(\"%%7d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%7d|\n\t\t", 12345) - 16);

	printf("printf(\"%%-7d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-7d|\n\t\t", 12345) - 16);

	printf("printf(\"%%-d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-d|\n\t\t", 12345) - 16);

	printf("printf(\"%%*d\", 7, 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%*d|\n\t\t", 7, 12345) - 16);

	printf("printf(\"%%*d\", -7, 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%*d|\n\t\t", -7, 12345) - 16);

	printf("printf(\"%%.d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.d|\n\t\t", 12345) - 16);

	printf("printf(\"%%.0d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.0d|\n\t\t", 12345) - 16);

	printf("printf(\"%%.3d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.3d|\n\t\t", 12345) - 16);

	printf("printf(\"%%.7d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.7d|\n\t\t", 12345) - 16);

	printf("printf(\"%%-.7d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-.7d|\n\t\t", 12345) - 16);

	printf("printf(\"%%-9.7d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-9.7d|\n\t\t", 12345) - 16);

	printf("printf(\"%%9.7d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%9.7d|\n\t\t", 12345) - 16);

	printf("printf(\"%%-7.9d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-7.9d|\n\t\t", 12345) - 16);

	printf("printf(\"%%-3.7d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-3.7d|\n\t\t", 12345) - 16);

	printf("printf(\"%%-7.3d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-7.3d|\n\t\t", 12345) - 16);

	printf("printf(\"%%.3d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.3d|\n\t\t", -12345) - 16);

	printf("printf(\"%%.7d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%.7d|\n\t\t", -12345) - 16);

	printf("printf(\"%%-.7d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-.7d|\n\t\t", -12345) - 16);

	printf("printf(\"%%-9.7d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-9.7d|\n\t\t", -12345) - 16);

	printf("printf(\"%%-7.9d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-7.9d|\n\t\t", -12345) - 16);

	printf("printf(\"%%-3.7d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-3.7d|\n\t\t", -12345) - 16);

	printf("printf(\"%%-7.3d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%-7.3d|\n\t\t", -12345) - 16);

	printf("printf(\"%%0d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%0d|\n\t\t", 12345) - 16);

	printf("printf(\"%%07d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%07d|\n\t\t", 12345) - 16);

	printf("printf(\"%%d\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%d|\n\t\t", 0) - 16);

	printf("printf(\"%%3d\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%3d|\n\t\t", 0) - 16);

	printf("printf(\"%%3.d\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%3.d|\n\t\t", 0) - 16);

	printf("printf(\"%%03d\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%03d|\n\t\t", 0) - 16);

	printf("printf(\"%%09.0d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%09.0d|\n\t\t", 12345) - 16);

	printf("printf(\"%%09.7d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%09.7d|\n\t\t", 12345) - 16);

	printf("printf(\"%%07.9d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%07.9d|\n\t\t", 12345) - 16);

	printf("printf(\"%%.d\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%.d|\n\t\t", 0) - 16);

	printf("printf(\"%%.3d\", 0)\n");
	printf("return : %d\n", printf("\t\tresult : |%.3d|\n\t\t", 0) - 16);

	printf("printf(\"%% d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |% d|\n\t\t", 12345) - 16);

	printf("printf(\"%% d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |% d|\n\t\t", -12345) - 16);

	printf("printf(\"%% -d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |% -d|\n\t\t", 12345) - 16);

	printf("printf(\"%% 3d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |% 3d|\n\t\t", 12345) - 16);

	printf("printf(\"%% 7d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |% 7d|\n\t\t", 12345) - 16);


	printf("printf(\"%%+d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+d|\n\t\t", 12345) - 16);

	printf("printf(\"%%+d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+d|\n\t\t", -12345) - 16);

	printf("printf(\"%%+-d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+-d|\n\t\t", 12345) - 16);

	printf("printf(\"%%+-9d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+-9d|\n\t\t", 12345) - 16);

	printf("printf(\"%%+9d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+9d|\n\t\t", 12345) - 16);

	printf("printf(\"%%+09d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+09d|\n\t\t", 12345) - 16);

	printf("printf(\"%%+09d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+09d|\n\t\t", -12345) - 16);

	printf("printf(\"%%-+09d\", 12345)\n");
	printf("\t\twarning : flag '0' is ignored when flag '-' is present\n");

	printf("printf(\"%%+ 09d\", 12345)\n");
	printf("\t\twarning : flag ' ' is ignored when flag '+' is present\n");

	printf("printf(\"%%+9.7d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+9.7d|\n\t\t", 12345) - 16);

	printf("printf(\"%%+09.7d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+09.7d|\n\t\t", 12345) - 16);

	printf("printf(\"%%+7.9d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+7.9d|\n\t\t", 12345) - 16);

	printf("printf(\"%%+07.9d\", 12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+07.9d|\n\t\t", 12345) - 16);

	printf("printf(\"%%+9.7d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+9.7d|\n\t\t", -12345) - 16);

	printf("printf(\"%%+09.7d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+09.7d|\n\t\t", -12345) - 16);

	printf("printf(\"%%+7.9d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+7.9d|\n\t\t", -12345) - 16);

	printf("printf(\"%%+07.9d\", -12345)\n");
	printf("return : %d\n", printf("\t\tresult : |%+07.9d|\n\t\t", -12345) - 16);


	printf("printf(\"%%#d\", 0)\n");
	printf("\t\tundefined behavior warning: flag '#' with 'd'\n");

	printf("\n\n");

	printf("-----------------------------------------------------\n\n");

	ft_printf("ft_printf(\"%%d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%3d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%3d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%7d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%7d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-7d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%*d\", 7, 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*d|\n\t\t", 7, 12345) - 16);

	ft_printf("ft_printf(\"%%*d\", -7, 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%*d|\n\t\t", -7, 12345) - 16);

	ft_printf("ft_printf(\"%%.d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%.0d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.0d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%.3d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.3d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%.7d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.7d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-.7d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-.7d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-9.7d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-9.7d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%9.7d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%9.7d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-7.9d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7.9d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-3.7d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-3.7d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%-7.3d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7.3d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%.3d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.3d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%.7d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.7d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%-.7d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-.7d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%-9.7d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-9.7d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%-7.9d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7.9d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%-3.7d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-3.7d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%-7.3d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%-7.3d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%0d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%0d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%07d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%07d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%d\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%d|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%3d\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%3d|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%3.d\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%3.d|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%03d\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%03d|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%09.0d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%09.0d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%09.7d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%09.7d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%07.9d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%07.9d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%.d\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.d|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%%.3d\", 0)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%.3d|\n\t\t", 0) - 16);

	ft_printf("ft_printf(\"%% d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |% d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%% d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |% d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%% -d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |% -d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%% 3d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |% 3d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%% 7d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |% 7d|\n\t\t", 12345) - 16);


	ft_printf("ft_printf(\"%%+d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%+d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%+-d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+-d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%+-9d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+-9d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%+9d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+9d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%+09d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+09d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%+09d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+09d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%-+09d\", 12345)\n");
	ft_printf("\t\twarning : flag '0' is ignored when flag '-' is present\n");

	ft_printf("ft_printf(\"%%+ 09d\", 12345)\n");
	ft_printf("\t\twarning : flag ' ' is ignored when flag '+' is present\n");

	ft_printf("ft_printf(\"%%+9.7d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+9.7d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%+09.7d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+09.7d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%+7.9d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+7.9d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%+07.9d\", 12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+07.9d|\n\t\t", 12345) - 16);

	ft_printf("ft_printf(\"%%+9.7d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+9.7d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%+09.7d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+09.7d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%+7.9d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+7.9d|\n\t\t", -12345) - 16);

	ft_printf("ft_printf(\"%%+07.9d\", -12345)\n");
	ft_printf("return : %d\n", ft_printf("\t\tresult : |%+07.9d|\n\t\t", -12345) - 16);


	ft_printf("ft_printf(\"%%#d\", 0)\n");
	ft_printf("\t\tundefined behavior warning: flag '#' with 'd'\n");

	ft_printf("\n\n");
}
