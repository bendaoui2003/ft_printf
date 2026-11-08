#include <unistd.h>

int	ft_print_char(int c)
{
	char chr;
	int result;

	chr = (char)c;
	result = write(1, &chr, 1);
	if (result == -1)
	{
		return (-1);
	}
	return (1);
}