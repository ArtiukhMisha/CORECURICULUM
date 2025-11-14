
#include "tests.h"


int main()
{
	char c = 'X';
	char *str = "abc";
	int i = -123;
	unsigned int u = 9999;
	int res;

	res = ft_printf("some%i%%%c%d%u%s{%x}{%X}\n p - %p",i,c,i,u,str,u,u,str);
	printf("\n%d\n",res);
	res = printf("some%i%%%c%d%u%s{%x}{%X}\n p - %p",i,c,i,u,str,u,u,str);
	printf("\n%d\n",res);
	return (0);
}
