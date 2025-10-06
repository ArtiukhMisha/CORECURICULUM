#include "stdio.h"
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "../../libft/libft.h"

int test_substr(char *(*func_to_test)(char const *s, unsigned int start, size_t len),
                char const *s, unsigned int start, size_t len,
                char *output)
{
	printf("input: %s<->%d : %zu ",s,start,len);
	char *res;

	res = func_to_test(s, start, len);
    // printf("\n%zu : %zu ",res,output);
    // printf("\n res : %s \n out : %s ",res,output);
	if (strcmp(res,output) == 0)
	{
		return (1);
	}
	return (0);
}
int test_str_join_trim(char *(*func_to_test)(char const *s1, char const *s2),
                char const *s1, char const *s2,
                char *output)
{
	printf("input: %s<->%s",s1,s2);
	char *res;

	res = func_to_test(s1,s2);
    // printf("\n%zu : %zu ",res,output);
    // printf("\n res : %s \n out : %s \n",res,output);
    if (res && output){
        if ((strcmp(res,output) == 0))
        {
            return (1);
	    }
    }
    else if (res == output)
    {
        return (1);
    }
	return (0);
}


int test_strmapi(char *(*func_to_test)(char const *s, char (*f)(unsigned int, char)),
                char const *s, char (*f)(unsigned int, char),
                char *output)
{
	printf("input: %s",s);
	char *res;

	res = func_to_test(s,f);
    // printf("\n%zu : %zu ",res,output);
    // printf("\n res : %s \n out : %s \n",res,output);
    if ((strcmp(res,output) == 0))
    {
        return (1);
    }

	return (0);
}
int test_itoa(char *(*func_to_test)(int), int a, char *output)
{
	printf("input: %d",a);
	char *res;

	res = func_to_test(a);
    // printf("\n%zu : %zu ",res,output);
    // printf("\n res : %s \n out : %s \n",res,output);
    if ((strcmp(res,output) == 0))
    {
        return (1);
    }

	return (0);
}
// int test_split(char **(*func_to_test)(char const *s, char c),
//                                       char const *s, char c,
//                                       char **output)
// {
// 	printf("input: %c <> %s",c,s);
//     int counter = 0;
// 	char *res;

// 	res = func_to_test(s,c);
//     // printf("\n%zu : %zu ",res,output);
//     // printf("\n res : %s \n out : %s \n",res,output);
//     while(res[counter] && output[counter])
//     {
//         if ((ft_strncmp(res[counter],output[counter],ft_strlen(res[counter])) != 0))
//         {
//             return (0);
//         }
//     }
//         return (1);

// }



