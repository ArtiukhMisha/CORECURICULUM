/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:35:53 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/27 19:53:33 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "stdio.h"
#include "../../libft/libft.h"

void print_test_result(int boolin);
int test_func_char(int (*func)(char), char input, int output);
int test_func_str(int (*func)(char *), char *input, int output);
int test_func_int(int (*func)(int), int input, int output);
int test_memset(void *(*func_to_test)(void *s, int c, size_t n),
                void *(*func_origin)(void *s, int c, size_t n),
                 int int_input, size_t size_input);
int test_bzero(void (*func_to_test)(void *s, size_t n),
               void (*func_origin)(void *s, size_t n),
               size_t size_input);
int test_memcpy(void *(*func_to_test)(void *dest, const void *src, size_t n),
                void *(*origin_func)(void *dest, const void *src, size_t n),
               size_t size_input);
int	main(int argc, char **argv)
{
	if (argc || argv)
	{
	printf("Start testing\n");
	}
    if(1){
	printf("IS_ALPHA:\n");
	print_test_result(test_func_char(ft_isalpha,'A',1));
	print_test_result(test_func_char(ft_isalpha,'a',1));
	print_test_result(test_func_char(ft_isalpha,'Z',1));
	print_test_result(test_func_char(ft_isalpha,'z',1));
	print_test_result(test_func_char(ft_isalpha,'A'-1,0));
	print_test_result(test_func_char(ft_isalpha,'z'+1,0));
	
   	 printf("ISDIGIT:\n");
	print_test_result(test_func_char(ft_isdigit,'0',1));
        print_test_result(test_func_char(ft_isdigit,'9',1));
        print_test_result(test_func_char(ft_isdigit,'0'-1,0));
        print_test_result(test_func_char(ft_isdigit,'9'+1,0));
	
        printf("IS_ALNUM:\n");
	print_test_result(test_func_char(ft_isalnum,'A',1));
        print_test_result(test_func_char(ft_isalnum,'a',1));
        print_test_result(test_func_char(ft_isalnum,'Z',1));
        print_test_result(test_func_char(ft_isalnum,'z',1));
        print_test_result(test_func_char(ft_isalnum,'A'-1,0));
        print_test_result(test_func_char(ft_isalnum,'z'+1,0));
	print_test_result(test_func_char(ft_isalnum,'0',1));
        print_test_result(test_func_char(ft_isalnum,'9',1));
        print_test_result(test_func_char(ft_isalnum,'0'-1,0));
        print_test_result(test_func_char(ft_isalnum,'9'+1,0));

	printf("IS_ASCII:\n");
     	print_test_result(test_func_int(ft_isascii,255,1));
        print_test_result(test_func_int(ft_isascii,0,1));
        print_test_result(test_func_int(ft_isascii,300,0));
        print_test_result(test_func_int(ft_isascii,256,0));
	
	printf("IS_PRINT:\n");
	print_test_result(test_func_char(ft_isprint,32,1));
        print_test_result(test_func_char(ft_isprint,126,1));
        print_test_result(test_func_char(ft_isprint,31,0));
        print_test_result(test_func_char(ft_isprint,127,0));	
	
	printf("strlen:\n");
	    print_test_result(test_func_str(ft_strlen,"",0));
        print_test_result(test_func_str(ft_strlen,"123",3));
        print_test_result(test_func_str(ft_strlen,"7j7yjv7yj 57y7y 7y 157y     j j5y7 jy57jj1  jy7 jy7 j 9 \n",57));
	printf("memset:\n");
	print_test_result(test_memset(ft_memset,memset,'1',0));
	print_test_result(test_memset(ft_memset,memset,'1',5));
	print_test_result(test_memset(ft_memset,memset,'1',12));
        printf("bzero:\n");
	    print_test_result(test_bzero(ft_bzero,bzero,0));
        print_test_result(test_bzero(ft_bzero,bzero,5));
        print_test_result(test_bzero(ft_bzero,bzero,12));}
	
    printf("MEMCPY:\n");
        print_test_result(test_memcpy(ft_memcpy,memcpy,0));
        print_test_result(test_memcpy(ft_memcpy,memcpy,3));
        print_test_result(test_memcpy(ft_memcpy,memcpy,100));
	printf("MEMMOVE:\n");
        print_test_result(test_memcpy(ft_memmove,memmove,0));
        print_test_result(test_memcpy(ft_memmove,memmove,3));
        print_test_result(test_memcpy(ft_memmove,memmove,2));
        print_test_result(test_memcpy(ft_memmove,memmove,1));
        print_test_result(test_memcpy(ft_memmove,memmove,25));
        print_test_result(test_memcpy(ft_memmove,memmove,100));
	printf("strlcpy:\n");

	printf("STRLCAT:\n");

	printf("TOUPPER:\n");

	printf("TOLOWER:\n");

	printf("STRCHR:\n");


	return (0);
}

void print_test_result(int boolin)
{
        if (boolin)
        {
                printf("👍PASS\n");
        }else{
                printf("💩FAIL\n");
        }
   	
}
