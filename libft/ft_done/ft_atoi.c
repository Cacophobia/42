#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	counter;
	int	sign;
	int	result;

	counter = 0;
	sign = 1;
	result = 0;
	while ((nptr[counter]))
	{
		if (nptr[counter] >= '0' && nptr[counter] <= '9')
		{
			result = result * 10 + (nptr[counter] - '0');
		}
		counter++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	printf ("%d\n", ft_atoi(argv[1]));
	return (0);
}
