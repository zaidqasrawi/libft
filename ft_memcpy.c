#include <string.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	d = (unsigned char *)dest;                                                                            s = (const unsigned char *)src;                                                                       i = 0;   	

	if (d == NULL && s == NULL)
		return (NULL);

	while (i < n)
	{	
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{

		char src[] = "Hello, World!";
		char dst1[20] = {0};
		char dst2[20] = {0};

		ft_memcpy(dst1, src, 13);
		memcpy(dst2, src, 13);

		printf("Test 1 (String):\n");
		printf("  ft_memcpy: [%s]\n", dst1);
		printf("  memcpy:    [%s]\n", dst2);
}*/
