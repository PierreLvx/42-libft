#include <string.h>

void	*ft_memmove(void *dst, void *src, size_t len)
{	
	char		*str_1;
	char		*str_2;
	size_t		i;

	i = 0;
	str_1 = dst;
	str_2 = src;
	while (i < len && str_1[i] != '\0')
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
