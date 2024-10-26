#include "libft.h"

void	test_ft_isalpha(void);
void	test_ft_isdigit(void);
void	test_ft_isalnum(void);
void	test_ft_bzero(void);
void	test_ft_isascii(void);
void	test_ft_itoa(void);
void	test_ft_split(void);
void	test_ft_strmapi(void);
void	test_ft_strlen(void);
void	test_ft_strlcpy(void);
void	test_ft_strjoin(void);
void	test_ft_strchr(void);
void	test_ft_substr(void);
void	test_ft_isprint(void);
void	test_ft_calloc(void);
void	test_ft_memcmp(void);
void	test_ft_memcpy(void);
void	test_ft_memmove(void);
void	test_ft_strlcat(void);
void	test_ft_toupper(void);
void	test_ft_strncmp(void);
void	test_ft_tolower(void);
void	test_ft_strnstr(void);
void	test_ft_putnbr_fd(void);
void	test_ft_strtrim(void);
void	test_ft_memset(void);
void	test_ft_memchr(void);
void	test_ft_striteri(void);
void	test_ft_strrchr(void);
void	test_ft_atoi(void);
void	test_ft_putstr_fd(void);

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_bzero();
	test_ft_isascii();
	test_ft_itoa();
	test_ft_strlen();
	test_ft_strlcpy();
	test_ft_strjoin();
	test_ft_strchr();
	test_ft_split();
	test_ft_substr();
	test_ft_isprint();
	test_ft_calloc();
	test_ft_memcmp();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_strmapi();
	test_ft_strncmp();
	test_ft_tolower();
	test_ft_strnstr();
	test_ft_putstr_fd();
	test_ft_putnbr_fd();
	test_ft_putstr_fd();
	test_ft_strtrim();
	test_ft_memset();
	test_ft_striteri();
	test_ft_memchr();
	test_ft_strrchr();
	test_ft_atoi();
	return (0);
}
char	my_function(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c + index);
	}
	else if (c >= '0' && c <= '9')
	{
		return (c + 1);
	}
	return (c);
}

void	test_ft_strmapi(void)
{
	char	*result;

	result = ft_strmapi("abc", my_function);
	printf("Test 1: '%s' (Expected: 'ace')\n", result);
	free(result);
	result = ft_strmapi("", my_function);
	printf("Test 2: '%s' (Expected: '')\n", result);
	free(result);
	result = ft_strmapi("z", my_function);
	printf("Test 3: '%s' (Expected: 'z')\n", result);
	free(result);
	result = ft_strmapi("abc!@", my_function);
	printf("Test 4: '%s' (Expected: 'ace!@')\n", result);
	free(result);
	result = ft_strmapi("123", my_function);
	printf("Test 5: '%s' (Expected: '135')\n", result);
	free(result);
}
void	capitalize(unsigned int index, char *c)
{
	if (index % 2 != 0)
	{
		*c = *c - 32;
	}
}

void	test_ft_striteri(void)
{
	char	str[];
	char	expected[];
	char	result[6];

	str[] = "hello";
	expected[] = "hElLo";
	strcpy(result, str);
	ft_striteri(result, capitalize);
	printf("ft_striteri: '%s'\n", result);
	printf("Expected: '%s'\n", expected);
}

void	test_ft_putstr_fd(void)
{
	printf("Test 1: ");
	ft_putstr_fd("Hello, World!", 1); // Expected: Hello, World!
	printf("\n");
	printf("Test 2: ");
	ft_putstr_fd("", 1); // Expected: (Nothing)
	printf("\n");
	printf("Test 3: ");
	ft_putstr_fd("Special chars: !@#$^&*()", 1);
		// Expected: Special chars: !@#$%^&*()
	printf("\n");
	printf("Test 4: ");
	ft_putstr_fd("Error occurred!", 2); // Expected: Error occurred!
	printf("\n");
	printf("Test 5: ");
	ft_putstr_fd((char *)NULL, 1); // Expected: (Nothing)
	printf("\n");
}

void	test_ft_isalpha(void)
{
	printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
	printf("ft_isalpha('1'): %d\n", ft_isalpha('1'));
}

void	test_ft_isdigit(void)
{
	printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
	printf("ft_isdigit('a'): %d\n", ft_isdigit('a'));
}

void	test_ft_isalnum(void)
{
	printf("ft_isalnum('C'): %d\n", ft_isalnum('C'));
	printf("ft_isalnum('!'): %d\n", ft_isalnum('!'));
}

void	test_ft_bzero(void)
{
	char	str[];

	str[] = "abcdefghi";
	printf("Before ft_bzero: '%s'\n", str);
	ft_bzero(str, 5);
	printf("After ft_bzero: '%s'\n", str);
}

void	test_ft_isascii(void)
{
	printf("ft_isascii('A'): %d\n", ft_isascii('A'));
	printf("ft_isascii(128): %d\n", ft_isascii(128));
}

void	test_ft_itoa(void)
{
	char	*result;

	result = ft_itoa(42);
	printf("ft_itoa(42): %s\n", result);
	free(result);
}

void	test_ft_strlen(void)
{
	printf("ft_strlen('Hello'): %zu\n", ft_strlen("Hello"));
}

void	test_ft_strlcpy(void)
{
	char		dest[20];
	const char	*src;
	size_t		n;

	src = "Hello";
	n = ft_strlcpy(dest, src, sizeof(dest));
	printf("ft_strlcpy: '%s', copied length: %zu\n", dest, n);
}

void	test_ft_strjoin(void)
{
	char	*result;

	result = ft_strjoin("Hello", ", World!");
	printf("ft_strjoin: '%s'\n", result);
	free(result);
}

void	test_ft_strchr(void)
{
	char	*result;

	result = ft_strchr("Hello", 'e');
	printf("ft_strchr('Hello', 'e'): %s\n", result);
}

void	test_ft_substr(void)
{
	char	*result;

	result = ft_substr("Hello, World!", 7, 5);
	printf("ft_substr: '%s'\n", result);
	free(result);
}

void	test_ft_isprint(void)
{
	printf("ft_isprint('A'): %d\n", ft_isprint('A'));
	printf("ft_isprint('\\n'): %d\n", ft_isprint('\n'));
}

void	test_ft_calloc(void)
{
	int	*arr;

	arr = ft_calloc(5, sizeof(int));
	printf("ft_calloc: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
}

void	test_ft_memcmp(void)
{
	char	str1[];
	char	str2[];

	str1[] = "abc";
	str2[] = "abc";
	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, 3));
}

void	test_ft_memcpy(void)
{
	char		dest[10];
	const char	*src;

	src = "abc";
	ft_memcpy(dest, src, 4);
	printf("ft_memcpy: '%s'\n", dest);
}

void	test_ft_memmove(void)
{
	char	str[];

	str[] = "abcdef";
	ft_memmove(str + 2, str, 4);
	printf("ft_memmove: '%s'\n", str);
}

void	test_ft_strlcat(void)
{
	char		dest[20];
	const char	*src;
	size_t		len;

	dest[20] = "Hello";
	src = " World!";
	len = ft_strlcat(dest, src, sizeof(dest));
	printf("ft_strlcat: '%s', length: %zu\n", dest, len);
}

void	test_ft_toupper(void)
{
	printf("ft_toupper('a'): %c\n", ft_toupper('a'));
}

void	test_ft_strncmp(void)
{
	printf("ft_strncmp('abc', 'abd', 3): %d\n", ft_strncmp("abc", "abd", 3));
}

void	test_ft_tolower(void)
{
	printf("ft_tolower('A'): %c\n", ft_tolower('A'));
}

void	test_ft_strnstr(void)
{
	char	*result;

	result = ft_strnstr("Hello, World!", "World", 13);
	printf("ft_strnstr: '%s'\n", result);
}

void	test_ft_putnbr_fd(void)
{
	printf("Output from ft_putnbr_fd: ");
	ft_putnbr_fd(42, 1);
	printf("\n");
}

void	test_ft_strtrim(void)
{
	char	*result;

	result = ft_strtrim("   Hello   ", " ");
	printf("ft_strtrim: '%s'\n", result);
	free(result);
}

void	test_ft_memset(void)
{
	char	str[10];

	str[10] = "abcdefghi";
	ft_memset(str, 'x', 5);
	printf("ft_memset: '%s'\n", str);
}

void	test_ft_memchr(void)
{
	char	str[];
	char	*result;

	str[] = "abcdef";
	result = ft_memchr(str, 'c', 6);
	if (result)
	{
		printf("ft_memchr: %c\n", *result);
	}
	else
	{
		printf("ft_memchr: not found\n");
	}
}

void	test_ft_strrchr(void)
{
	char	*result;

	result = ft_strrchr("Hello, World!", 'o');
	if (result)
	{
		printf("ft_strrchr: %s\n", result);
	}
	else
	{
		printf("ft_strrchr: not found\n");
	}
}
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	test_ft_split(void)
{
	char	**result;
	int		i;

	result = ft_split("Hello, World!", ' ');
	printf("Test 1:\n");
	for (i = 0; result[i] != NULL; i++)
	{
		printf("result[%d]: '%s'\n", i, result[i]);
		free(result[i]);
	}
	free(result);
	result = ft_split("Hello, World! This is a test.", ' ');
	printf("Test 2:\n");
	for (i = 0; result[i] != NULL; i++)
	{
		printf("result[%d]: '%s'\n", i, result[i]);
		free(result[i]);
	}
	free(result);
	result = ft_split("   Leading and trailing spaces   ", ' ');
	printf("Test 3:\n");
	for (i = 0; result[i] != NULL; i++)
	{
		printf("result[%d]: '%s'\n", i, result[i]);
		free(result[i]);
	}
	free(result);
	result = ft_split("SingleWord", ' ');
	printf("Test 4:\n");
	for (i = 0; result[i] != NULL; i++)
	{
		printf("result[%d]: '%s'\n", i, result[i]);
		free(result[i]);
	}
	free(result);
	result = ft_split("", ' ');
	printf("Test 5:\n");
	if (result[0] == NULL)
	{
		printf("result is NULL (as expected)\n");
	}
	free(result);
}

void	test_ft_atoi(void)
{
	printf("ft_atoi('42'): %d\n", ft_atoi("42"));
}
