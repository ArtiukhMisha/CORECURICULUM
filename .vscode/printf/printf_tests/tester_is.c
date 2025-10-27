#include "stdio.h"
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>

int test_printf(int (*func)(char), char input, int output)
{
	printf("input: %c ",input);
	int res;

	res = func(input);
	if (res == output)
	{
		return (1);
	}
	return (0);
}

