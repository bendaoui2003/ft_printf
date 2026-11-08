#include <stdlib.h>
#include <unistd.h>

int	ft_print_string(char *str)
{
	int i;
	int result;

	i = 0;
	if (str == NULL)
	{
		result = write(1, "(null)", 6);
		if (result == -1)
			return (-1);
		return (6);
	}
	while (str[i])
	{
		result = write(1, &str[i], 1);
		if (result == -1)
		{
			return (-1);
		}
		i++;
	}
	return (i);
}