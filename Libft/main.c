#include "libft.h"
// Make sure this header exists and includes your function declarations
#include <stdio.h>

int	main(void)
{
	int	num;

	num = -42;
	char *str = ft_itoa(num); // Example of using a function from your library
	printf("String representation of %d: %s\n", num, str);
	free(str); // Free the allocated string
	return (0);
}
