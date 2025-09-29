#include "stdio.h"
#include <string.h>
#include <stdlib.h>
int test_func_char(int (*func)(char), char input, int output)
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

int test_func_str(int (*func)(char *), char *input, int output)
{
        printf("input: %s - ",input);
        int res;

        res = func(input);
        if (res == output)
        {
                return (1);
        }
        return (0);
}

int test_func_int(int (*func)(int), int input, int output)
{
        printf("input: %d ",input);
        int res;

        res = func(input);
        if (res == output)
        {
                return (1);
        }
        return (0);
}

int test_memset(void *(*func_to_test)(void *s, int c, size_t n),
	       	void *(*func_origin)(void *s, int c, size_t n),
	     	 int int_input, size_t size_input)
{
        printf("input: %d, %zu ",int_input,size_input);
	void *mem = malloc(100);
	void *cpy = malloc(100);
	memcpy(cpy,mem,100);
        void *res;
	void *output;
	
	res = func_to_test(mem,int_input, size_input);
	output = func_origin(cpy,int_input, size_input);
	if (memcmp(cpy,mem,100)==0)
	{
		return (1);
	}
	return (0);
}
int test_bzero(void *(*func_to_test)(void *s, size_t n),
               void *(*func_origin)(void *s, size_t n),
               size_t size_input)
{
        printf("input: %zu",size_input);
        void *mem = malloc(100);
        void *cpy = malloc(100);
        memcpy(cpy,mem,100);
        void *res;
        void *output;

        res = func_to_test(mem, size_input);
        output = func_origin(cpy, size_input);
        if (memcmp(cpy,mem,100)==0)
        {
                return (1);
        }
        return (0);
}

int test_memcpy(void *(*func_to_test)(void *dest, const void *src, size_t n),
               size_t size_input)
{
        printf("input: %zu",size_input);
        void *mem = malloc(100);
        
        void *res = malloc(100);

        func_to_test(res,mem,size_input);
        if (memcmp(res,mem,100)==0)
        {
                return (1);
        }
        return (0);
}
int test_memmove(void *(*func_to_test)(void *dest, const void *src, size_t n),
                void *(*origin_func)(void *dest, const void *src, size_t n),
               size_t size_input, int mv)
{
        printf("input: n - %zu, mv - %d  ",size_input, mv);
        // void *mem = malloc(100);
        
        // void *res = malloc(100);

        char src[100] = "1234567890";
        char res[100];
        char output[100];
        char res1[100];
        char output1[100];
        
        memcpy(res1,src,100);
        memcpy(output1,src,100);
        memcpy(res,src,100);
        memcpy(output,src,100);

        func_to_test(res,res + mv,size_input);
        origin_func(output,output + mv,size_input);
        printf("\ngot : %s\nexpected %s\n",res,output);
        func_to_test(res1 + mv,res1,size_input);
        origin_func(output1 + mv,output1,size_input);
        printf("got : %s\nexpected %s\n",res1,output1);

        if (memcmp(res,output,100)==0 && memcmp(res1,output1,100)==0)
        {
                return (1);
        }
        return (0);
}   