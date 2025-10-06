#include "stdio.h"
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>

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
        printf("res : %d",res);
        if (res == output)
        {
                return (1);
        }
        return (0);
}
int test_func_str_const(int (*func)(const char *), const char *input, int output)
{
        printf("input: %s - ",input);
        int res;

        res = func(input);
        printf("res : %d",res);
        if (res == output)
        {
                return (1);
        }
        return (0);
}
int test_func_str_size(size_t (*func)(const char *), char *input, int output)
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
	
	func_to_test(mem,int_input, size_input);
	func_origin(cpy,int_input, size_input);
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
        // void *res;
        // void *output;

        func_to_test(mem, size_input);
        func_origin(cpy, size_input);
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
        unsigned char  *mem;
        unsigned char *res ;
        int s;
        s = 100;
        mem = malloc(s);
        res = malloc(s);
        while (s)
        {
                 mem[s] = 0;
                 res[s] = 0;
                 s--;
        }
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
        // printf("\ngot : %s\nexpected %s\n",res,output);
        func_to_test(res1 + mv,res1,size_input);
        origin_func(output1 + mv,output1,size_input);
        // printf("got : %s\nexpected %s\n",res1,output1);

        if (memcmp(res,output,100)==0 && memcmp(res1,output1,100)==0)
        {
                return (1);
        }
        return (0);
}   
int test_strlcpy(size_t (func_to_test)(char *dst, const char *src, size_t size),
               char *dest1, const char *src1, size_t size_input)
{
        printf("input: %zu",size_input);
        char s1[100];
        char s2[100];
        size_t res;
        size_t output;

        strcpy(s1,dest1);
        strcpy(s2,dest1);

        res = func_to_test(s1,src1,size_input);
        output = strlcpy(s2,src1,size_input);

        // printf("\n%zu : %zu ",res,output);
        // printf("\n res : %s \n out : %s ",s1,s2);
        if ((strcmp(s1,s2)==0) && (res == output))
        {
                return (1);
        }
        return (0);
}

int test_strlcat(size_t (func_to_test)(char *dst, const char *src, size_t size),
                size_t (func_original)(char *dst, const char *src, size_t size),
               char *dest1, const char *src1, size_t size_input)
{
        printf("input: %zu",size_input);
        char s1[100];
        char s2[100];
        size_t res;
        size_t output;

        strcpy(s1,dest1);
        strcpy(s2,dest1);

        res = func_to_test(s1,src1,size_input);
        output = func_original(s2,src1,size_input);
        printf("\n%zu : %zu ",res,output);
        printf("\n res : %s \n out : %s ",s1,s2);
        if ((strcmp(s1,s2)==0) && (res == output))
        {
                return (1);
        }
        return (0);
}

int test_strchr(char *(func_to_test)(const char *s, int c),
                char *(func_original)(const char *s, int c),
                const char *src1, int c)
{
        printf("input: %s<->%d ",src1,c);
        char *res;
        char *output;

        res = func_to_test(src1,c);
        output = func_original(src1,c);

        // printf("\n%s : %s ",res,output);
        // printf("\n res : %s \n out : %s ",s1,s2);
        if (res==output)
        {
                return (1);
        }
        return (0);
}
int test_memchr(void *(*func_to_test)(const void *s, int c, size_t n),
                void *(*func_original)(const void *s, int c, size_t n),
                const void *s, int c, size_t n)
{
        printf("input: %d, %zu ",c,n);
        char *res;
        char *output;

        res = func_to_test(s,c,n);
        output = func_original(s,c,n);

        // printf("\n%s : %s ",res,output);
        // printf("\n res : %s \n out : %s ",s1,s2);
        if (res==output)
        {
                return (1);
        }
        return (0);
}
int test_memcmp(int (func_to_test)(const void *s1, const void *s2, size_t n),
                int (func_original)(const void *s1, const void *s2, size_t n),
                const void *s1, const void *s2, size_t n)
{
        printf("input: %zu ",n);
        int res;
        int output;

        res = func_to_test(s1,s2,n);
        output = func_original(s1,s2,n);

        // printf("\n%s : %s ",res,output);
        // printf("\n res : %s \n out : %s ",s1,s2);
        if (res==output)
        {
                return (1);
        }
        return (0);
}

int test_strncmp(int (func_to_test)(const char *s1, const char *s2, size_t n),
                int (func_original)(const char *s1, const char *s2, size_t n),
               char *s1, char *s2, size_t size_input)
{
        printf("input:%zu--> %s : %s",size_input,s1,s2);
        size_t res;
        size_t output;

        res = func_to_test(s1,s2,size_input);
        output = func_original(s1,s2,size_input);
        printf("\n%zu : %zu ",res,output);
        // printf("\n res : %s \n out : %s ",s1,s2);
        if (res == output)
        {
                return (1);
        }
        return (0);
}
int test_strnstr(char *(*func_to_test)(const char *big,	const char *little, size_t len),
                char *(*func_original)(const char *big,	const char *little, size_t len),
                const char *big,	const char *little, size_t len)
{
        printf("input:%zu--> %s : %s",len,big,little);
        char *res;
        char *output;

        res = func_to_test(big,little,len);
        output = func_original(big,little,len);
        printf("\n%s : %s ",res,output);
        // printf("\n res : %s \n out : %s ",s1,s2);
        if (res == output)
        {
                return (1);
        }
        return (0);
}
int test_strdup(char *(func_to_test)(char *src),
                char *src1)
{
        printf("input: %s",src1);
        char *res;
        char *output;

        res = func_to_test(src1);
        output = strdup(src1);

        // printf("\n%s : %s ",res,output);
        // printf("\n res : %s \n out : %s ",s1,s2);
        if ((strcmp(res,output)==0))
        {
                return (1);
        }
        return (0);
}
int test_calloc(void *(func_to_test)(size_t nmemb, size_t size),
                void *(func_original)(size_t nmemb, size_t size),
                size_t nmemb, size_t size)
{
        printf("input: %zu , %zu",nmemb,size);
        void *res;
        void *output;

        res = func_to_test(nmemb, size);
        output = func_original(nmemb, size);

        // printf("\n%s : %s ",res,output);
        // printf("\n res : %s \n out : %s ",s1,s2);
        if ((memcmp(res,output, nmemb * size)==0))
        {
                return (1);
        }
        return (0);
}