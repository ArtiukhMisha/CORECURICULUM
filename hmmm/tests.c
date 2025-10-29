# include <stdio.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	while (*(str + counter))
		counter++;
	return (counter);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;
	unsigned int	len;
	char			*res;

	if (!s)
		return (0);
	c1 = (char)(c);
	res = (char *)(s);
	len = ft_strlen(res);
	if (c == 0)
		return (res + len);
	while (len)
	{
		if (*res == c1)
			return (res);
		res++;
		len--;
	}
	return (0);
}
int main ()
{
	static char *mem = "123";

	printf("%s",ft_strchr("123",'1'));

	// read(fd-5,str,5);
	// printf("\n%s",str);

	// read(fd-5,str,5);
	// printf("\n%s",str);
	return (0);
}
