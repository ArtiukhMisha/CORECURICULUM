/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:35:53 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/29 22:46:09 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "test_lib.h"


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
	    print_test_result(test_func_str_size(ft_strlen,"",0));
        print_test_result(test_func_str_size(ft_strlen,"123",3));
        print_test_result(test_func_str_size(ft_strlen,"7j7yjv7yj 57y7y 7y 157y     j j5y7 jy57jj1  jy7 jy7 j 9 \n",57));
	printf("memset:\n");
	print_test_result(test_memset(ft_memset,memset,'1',0));
	print_test_result(test_memset(ft_memset,memset,'1',5));
	print_test_result(test_memset(ft_memset,memset,'1',12));
        printf("bzero:\n");
	    print_test_result(test_bzero(ft_bzero,bzero,0));
        print_test_result(test_bzero(ft_bzero,bzero,5));
        print_test_result(test_bzero(ft_bzero,bzero,12));
    printf("MEMCPY:\n");
        print_test_result(test_memcpy(ft_memcpy,0));
        print_test_result(test_memcpy(ft_memcpy,3));
        print_test_result(test_memcpy(ft_memcpy,100));
	printf("MEMMOVE:\n");
        print_test_result(test_memmove(ft_memmove,memmove,0,1));
        print_test_result(test_memmove(ft_memmove,memmove,2,3));
        print_test_result(test_memmove(ft_memmove,memmove,7,5));
        print_test_result(test_memmove(ft_memmove,memmove,100,3));
	printf("strlcpy:\n");
        print_test_result(test_strlcpy(ft_strlcpy,"123","1",0));
        print_test_result(test_strlcpy(ft_strlcpy,"1234567890","123",3));
        print_test_result(test_strlcpy(ft_strlcpy,"01","123",2));
        print_test_result(test_strlcpy(ft_strlcpy,"123","12",3));
        print_test_result(test_strlcpy(ft_strlcpy,"123","123",3));

	printf("STRLCAT:\n");
        print_test_result(test_strlcat(ft_strlcat, strlcat,"123","",3));
        print_test_result(test_strlcat(ft_strlcat, strlcat,"","123",3));
        print_test_result(test_strlcat(ft_strlcat, strlcat,"12","123",3));
        print_test_result(test_strlcat(ft_strlcat, strlcat,"123","12",3));
        print_test_result(test_strlcat(ft_strlcat, strlcat,"123","123",4));
	printf("TOUPPER:\n");
        print_test_result(test_func_int(ft_toupper,'a','A'));
        print_test_result(test_func_int(ft_toupper,'z','Z'));
        print_test_result(test_func_int(ft_toupper,'-','-'));    
        print_test_result(test_func_int(ft_toupper,'a'-1,'a'-1));    
        print_test_result(test_func_int(ft_toupper,'z'+1,'z'+1));  
	printf("TOLOWER:\n");}
        print_test_result(test_func_int(ft_tolower,'A','a'));
        print_test_result(test_func_int(ft_tolower,'Z','z'));
        print_test_result(test_func_int(ft_tolower,'-','-'));    
        print_test_result(test_func_int(ft_tolower,'A'-1,'A'-1));    
        print_test_result(test_func_int(ft_tolower,'Z'+1,'Z'+1)); 
	printf("STRCHR:\n");
    printf("strrchr:\n");
    printf("strncmp:\n");
    printf("memchr:\n");
    printf("memcmp:\n");
    printf("strnstr:\n");
    printf("atoi:\n");
    print_test_result(test_func_str_const(ft_atoi,"123,123",123));
    print_test_result(test_func_str_const(ft_atoi,"1234567890",1234567890));
    print_test_result(test_func_str_const(ft_atoi,"    +1231",1231));
    print_test_result(test_func_str_const(ft_atoi," -1352s2546",-1352));
    print_test_result(test_func_str_const(ft_atoi," ++1352s2546",0));
    print_test_result(test_func_str_const(ft_atoi," --1352s2546",0));
    print_test_result(test_func_str_const(ft_atoi," \n\t  1,123",1));
    print_test_result(test_func_str_const(ft_atoi," \n\t - 1,123",0));

    printf("calloc:\n");
    printf("strdup:\n");


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
