

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*byte_dst;
	unsigned char	*byte_src;
	size_t			i;

	i = 0;
	byte_dst = (unsigned char *)dst;
	byte_src = (unsigned char *)src;
	while (i < n)
	{
		byte_dst[i] = byte_src[i];
		if (byte_src[i] == (unsigned char)c)
			return (&byte_dst[++i]);
		++i;
	}
	return (NULL);
}