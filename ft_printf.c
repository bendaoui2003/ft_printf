#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	char	c;
	va_list	ap;

	va_start(ap, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				c = va_arg(ap, int);
				write(1, &c, 1);
				count++;
			}
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
			count++;
		}
	}
	va_end(ap);
	return (count);
}
int	main(void)
{
	ft_printf("A%cB%cC\n", 'X', 'Y');
}
