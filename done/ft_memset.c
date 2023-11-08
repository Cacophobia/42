#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	int	counter;
	unsigned char	*ptr_counter;
	unsigned char	ptr_value;

	ptr_counter = (unsigned char *)ptr;
	ptr_value = (unsigned char)value;
	counter = 0;
	
	while (counter < num)
	{
		*ptr_counter = ptr_value;
		ptr_counter++;
		counter++;
	}
	return (ptr);
}

int	main(void)
{
	char test[10];
	char test2[20];
	memset(test, 'a', sizeof(test));
	printf("%s\n", test);

	printf("\nNow for my memset :)\n");
	ft_memset(test2, 'n', sizeof(test2));
	printf("%s\n", test2);
	return (0);	
}
