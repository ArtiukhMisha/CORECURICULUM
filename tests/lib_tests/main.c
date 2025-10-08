/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:35:53 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/06 17:33:37 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "test_lib.h"
#include <ctype.h>

char	ft_tol(unsigned int i,char c);

int	main(int argc, char **argv)
{
	if (argc || argv)
	{
	printf("Start testing\n");
	}
    if(1){
	// printf("IS_ALPHA:\n");
    //             print_test_result(test_func_char(ft_isalpha,'A',1));
    //             print_test_result(test_func_char(ft_isalpha,'a',1));
    //             print_test_result(test_func_char(ft_isalpha,'Z',1));
    //             print_test_result(test_func_char(ft_isalpha,'z',1));
    //             print_test_result(test_func_char(ft_isalpha,'A'-1,0));
    //             print_test_result(test_func_char(ft_isalpha,'z'+1,0));
	
   	//  printf("ISDIGIT:\n");
    //             print_test_result(test_func_char(ft_isdigit,'0',1));
    //             print_test_result(test_func_char(ft_isdigit,'9',1));
    //             print_test_result(test_func_char(ft_isdigit,'0'-1,0));
    //             print_test_result(test_func_char(ft_isdigit,'9'+1,0));
	
    //     printf("IS_ALNUM:\n");
    //             print_test_result(test_func_char(ft_isalnum,'A',1));
    //             print_test_result(test_func_char(ft_isalnum,'a',1));
    //             print_test_result(test_func_char(ft_isalnum,'Z',1));
    //             print_test_result(test_func_char(ft_isalnum,'z',1));
    //             print_test_result(test_func_char(ft_isalnum,'A'-1,0));
    //             print_test_result(test_func_char(ft_isalnum,'z'+1,0));
    //             print_test_result(test_func_char(ft_isalnum,'0',1));
    //             print_test_result(test_func_char(ft_isalnum,'9',1));
    //             print_test_result(test_func_char(ft_isalnum,'0'-1,0));
    //             print_test_result(test_func_char(ft_isalnum,'9'+1,0));

	// printf("IS_ASCII:\n");
    //             print_test_result(test_func_int(ft_isascii,255,0));
    //             print_test_result(test_func_int(ft_isascii,0,1));
    //             print_test_result(test_func_int(ft_isascii,300,0));
    //             print_test_result(test_func_int(ft_isascii,256,0));
    //             print_test_result(test_func_int(ft_isascii,127,1));
    //             print_test_result(test_func_int(ft_isascii,128,0));
	
	// printf("IS_PRINT:\n");
    //             print_test_result(test_func_char(ft_isprint,32,1));
    //             print_test_result(test_func_char(ft_isprint,126,1));
    //             print_test_result(test_func_char(ft_isprint,31,0));
    //             print_test_result(test_func_char(ft_isprint,127,0));	
	
	// printf("strlen:\n");
    //             print_test_result(test_func_str_size(ft_strlen,"",0));
    //             print_test_result(test_func_str_size(ft_strlen,"123",3));
    //             print_test_result(test_func_str_size(ft_strlen,"7j7yjv7yj 57y7y 7y 157y     j j5y7 jy57jj1  jy7 jy7 j 9 \n",57));
	
    //     printf("memset:\n");
    //             print_test_result(test_memset(ft_memset,memset,'1',0));
    //             print_test_result(test_memset(ft_memset,memset,'1',5));
    //             print_test_result(test_memset(ft_memset,memset,'1',12));
        
    //     printf("bzero:\n");
    //             print_test_result(test_bzero(ft_bzero,bzero,0));
    //             print_test_result(test_bzero(ft_bzero,bzero,5));
    //             print_test_result(test_bzero(ft_bzero,bzero,12));
        
    //     printf("MEMCPY:\n");
    //             print_test_result(test_memcpy(ft_memcpy,0));
    //             print_test_result(test_memcpy(ft_memcpy,3));
    //             print_test_result(test_memcpy(ft_memcpy,100));
	
    //     printf("MEMMOVE:\n");
    //             print_test_result(test_memmove(ft_memmove,memmove,0,1));
    //             print_test_result(test_memmove(ft_memmove,memmove,2,3));
    //             print_test_result(test_memmove(ft_memmove,memmove,7,5));
    //             print_test_result(test_memmove(ft_memmove,memmove,100,3));
	
    //     printf("strlcpy:\n");
    //             print_test_result(test_strlcpy(ft_strlcpy,"123","1",0));
    //             print_test_result(test_strlcpy(ft_strlcpy,"1234567890","123",3));
    //             print_test_result(test_strlcpy(ft_strlcpy,"01","123",2));
    //             print_test_result(test_strlcpy(ft_strlcpy,"123","12",3));
    //             print_test_result(test_strlcpy(ft_strlcpy,"123","123",3));

	// printf("STRLCAT:\n");
                // print_test_result(test_strlcat(ft_strlcat, strlcat,"123","",3));
                // print_test_result(test_strlcat(ft_strlcat, strlcat,"123","",1));
                // print_test_result(test_strlcat(ft_strlcat, strlcat,"123","",0));
                // print_test_result(test_strlcat(ft_strlcat, strlcat,"","123",3));
                // print_test_result(test_strlcat(ft_strlcat, strlcat,"","123",1));
                // print_test_result(test_strlcat(ft_strlcat, strlcat,"","123",0));
                // print_test_result(test_strlcat(ft_strlcat, strlcat,"","123",4));
                // print_test_result(test_strlcat(ft_strlcat, strlcat,"12","123",3));
                // print_test_result(test_strlcat(ft_strlcat, strlcat,"123","12",3));
                // print_test_result(test_strlcat(ft_strlcat, strlcat,"123","12",1));
                // print_test_result(test_strlcat(ft_strlcat, strlcat,"123","12",0));
                // void *dest;
                // if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
                // 		return (0);
                // 		memset(dest, 'r', 15);
                // print_test_result(test_strlcat(ft_strlcat, strlcat,dest,"lorem ipsum dolor sit amet",5));

    //     printf("TOUPPER:\n");
    //             print_test_result(test_func_int(ft_toupper,'a','A'));
    //             print_test_result(test_func_int(ft_toupper,'z','Z'));
    //             print_test_result(test_func_int(ft_toupper,'-','-'));    
    //             print_test_result(test_func_int(ft_toupper,'a'-1,'a'-1));    
    //             print_test_result(test_func_int(ft_toupper,'z'+1,'z'+1));  

    //     printf("TOLOWER:\n");
    //             print_test_result(test_func_int(ft_tolower,'A','a'));
    //             print_test_result(test_func_int(ft_tolower,'Z','z'));
    //             print_test_result(test_func_int(ft_tolower,'-','-'));    
    //             print_test_result(test_func_int(ft_tolower,'A'-1,'A'-1));    
    //             print_test_result(test_func_int(ft_tolower,'Z'+1,'Z'+1)); 

    //     printf("STRCHR:\n");
    //             print_test_result(test_strchr(ft_strchr,strchr,"1234567890",'0'));
    //             print_test_result(test_strchr(ft_strchr,strchr,"12349567890",'9'));
    //             print_test_result(test_strchr(ft_strchr,strchr,"12345167890",'1'));
    //             print_test_result(test_strchr(ft_strchr,strchr,"1234567890",'1'+256));
    //             print_test_result(test_strchr(ft_strchr,strchr,"1234567890",'a'));
    //             print_test_result(test_strchr(ft_strchr,strchr,"",'l'));
    //             print_test_result(test_strchr(ft_strchr,strchr,"123456789\0 23456789",0));
    //             char str[] = "1234567890";
    //             print_test_result(test_strchr(ft_strchr,strchr,str+ 10,0));

    //     printf("strrchr:\n");
    //             print_test_result(test_strchr(ft_strrchr,strrchr,"1234567890",'0'));
    //             print_test_result(test_strchr(ft_strrchr,strrchr,"12349567890",'9'));
    //             print_test_result(test_strchr(ft_strrchr,strrchr,"12345167890",'1'));
    //             print_test_result(test_strchr(ft_strrchr,strrchr,"1234567890",'a'));
    //             print_test_result(test_strchr(ft_strrchr,strrchr,"1234567890",'1'));
    //             print_test_result(test_strchr(ft_strrchr,strrchr,"12345167890",'1'+256));
    //             print_test_result(test_strchr(ft_strrchr,strrchr,"",'l'));
    //             print_test_result(test_strchr(ft_strrchr,strrchr,"123456789\0 23456789",0));
    //             print_test_result(test_strchr(ft_strrchr,strrchr,"12345678923456789",0));
    //             print_test_result(test_strchr(ft_strrchr,strrchr,str+ 10 + 10,0));
    //             print_test_result(test_strchr(ft_strrchr,strrchr,str+ 10,0));

        // printf("strncmp:\n");
            // print_test_result(test_strncmp(ft_strncmp,strncmp,"1234567890","1234567890",3));
            // print_test_result(test_strncmp(ft_strncmp,strncmp,"1234567890","1234567890",10));
            // print_test_result(test_strncmp(ft_strncmp,strncmp,"1234567890","1230",3));
            // print_test_result(test_strncmp(ft_strncmp,strncmp,"1234567890","1230",4));
            // print_test_result(test_strncmp(ft_strncmp,strncmp,"","",4));
            // print_test_result(test_strncmp(ft_strncmp,strncmp,"test\200", "test\0",6));
            // print_test_result(test_strncmp(ft_strncmp,strncmp,"","123",4));
        // printf("memchr:\n");
        //         print_test_result(test_memchr(ft_memchr,memchr,"12345678900",'0', 8));
        //         print_test_result(test_memchr(ft_memchr,memchr,"12349567890",'9', 3));
        //         print_test_result(test_memchr(ft_memchr,memchr,"12345167890",'1', 8));
        //         print_test_result(test_memchr(ft_memchr,memchr,"12345678900",'a',21));
        //         int ar[6] = {1,2,3,4,INT_MAX,INT_MIN};
        //         print_test_result(test_memchr(ft_memchr,memchr,ar,INT_MIN,21));
        //         print_test_result(test_memchr(ft_memchr,memchr,ar,INT_MAX,21));
        //         print_test_result(test_memchr(ft_memchr,memchr,"",'l',8));
        // printf("memcmp:\n");
        //         print_test_result(test_memcmp(ft_memcmp,memcmp,"1234567890","1234567890",3));
        //         print_test_result(test_memcmp(ft_memcmp,memcmp,"1234567890","1234567890",10));
        //         print_test_result(test_memcmp(ft_memcmp,memcmp,"1234567890","1230",3));
        //         print_test_result(test_memcmp(ft_memcmp,memcmp,"1234567890","1230",4));
        //         print_test_result(test_memcmp(ft_memcmp,memcmp,"","",4));
        //         print_test_result(test_memcmp(ft_memcmp,memcmp,"123","",4));
        //         print_test_result(test_memcmp(ft_memcmp,memcmp,"","123",4));
        // printf("strnstr:\n");
        //         print_test_result(test_strnstr(ft_strnstr,strnstr,"1234567890","1234567890",3));
        //         print_test_result(test_strnstr(ft_strnstr,strnstr,"1234567890","1234567890",10));
        //         print_test_result(test_strnstr(ft_strnstr,strnstr,"1234567890","345",2));
        //         print_test_result(test_strnstr(ft_strnstr,strnstr,"1234567890","345",0));
        //         print_test_result(test_strnstr(ft_strnstr,strnstr,"1234567890","345",7));
        //         print_test_result(test_strnstr(ft_strnstr,strnstr,"1234567890","890",3));
        //         print_test_result(test_strnstr(ft_strnstr,strnstr,"1234567890","890",9));
        //         print_test_result(test_strnstr(ft_strnstr,strnstr,"1234567890","1",1));
        //         print_test_result(test_strnstr(ft_strnstr,strnstr,(char*)"","2132",-1));
        //         print_test_result(test_strnstr(ft_strnstr,strnstr,"22","b",2));
        //         print_test_result(test_strnstr(ft_strnstr,strnstr,"","123",2));
        // printf("atoi:\n");
        //         print_test_result(test_func_str_const(ft_atoi,"123,123",123));
        //         print_test_result(test_func_str_const(ft_atoi,"1234567890",1234567890));
        //         print_test_result(test_func_str_const(ft_atoi,"    +1231",1231));
        //         print_test_result(test_func_str_const(ft_atoi," -1352s2546",-1352));
        //         print_test_result(test_func_str_const(ft_atoi," ++1352s2546",0));
        //         print_test_result(test_func_str_const(ft_atoi," --1352s2546",0));
        //         print_test_result(test_func_str_const(ft_atoi," \n\t  1,123",1));
        //         print_test_result(test_func_str_const(ft_atoi," \n\t - 1,123",0));

        // printf("calloc:\n");
        //         print_test_result(test_calloc(ft_calloc,calloc,0,10));
        //         print_test_result(test_calloc(ft_calloc,calloc,10 ,0));
        //         print_test_result(test_calloc(ft_calloc,calloc, 5, 10));
        //         print_test_result(test_calloc(ft_calloc,calloc, 10, 5));

        // printf("strdup:\n");
        //         print_test_result(test_strdup(ft_strdup,"1234567890"));
        //         print_test_result(test_strdup(ft_strdup,"hello world!!"));
        //         print_test_result(test_strdup(ft_strdup,"21\n\t   /asd/"));
        //         print_test_result(test_strdup(ft_strdup,""));
        // }
        
        // printf("strjoin:\n");
        //         print_test_result(test_str_join_trim(ft_strjoin,"123","456","123456"));
        //         print_test_result(test_str_join_trim(ft_strjoin,"123","","123"));
        //         print_test_result(test_str_join_trim(ft_strjoin,"","456","456"));
        //         print_test_result(test_str_join_trim(ft_strjoin,"","",""));
        printf("split:\n");
                print_test_result(test_split(ft_split,"123,123,123,123",{"123","123","123","123"}));
        // printf("substr:\n");
        //         print_test_result(test_substr(ft_substr,"1234567890", 3,4,"4567"));
        //         print_test_result(test_substr(ft_substr,"1234567890", 0,10,"1234567890"));
        //         print_test_result(test_substr(ft_substr,"1234567890", 3 ,0,""));
        //         print_test_result(test_substr(ft_substr,"1234567890", 0, 3,"123"));
        // printf("strtrim:\n");
        //         print_test_result(test_str_join_trim(ft_strtrim,"|--||--|123|--|123|--||--|","|--|","123|--|123"));
        //         print_test_result(test_str_join_trim(ft_strtrim,"<-><->123<->123<-><->","<->","123<->123"));
        //         print_testult(test_itoa(ft_itoa,-0,"0"));
    }
        // printf("strmapi:\n");     
        //         print_test_result(test_strmapi(ft_strmapi,"123aaazzzAAAZZZ",&ft_tol,"123aaazzzaaazzz"));

        printf("striteri:\n");
        printf("putchar_fd:\n");
        printf("putstr_fd:\n");
        printf("putendl_fd:\n");
        printf("putnbr_fd:\n");



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
char	ft_tol(unsigned int i,char c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}

_result(test_str_join_trim(ft_strtrim,"123","","123"));
                print_test_result(test_str_join_trim(ft_strtrim,"","123",""));
                print_test_result(test_str_join_trim(ft_strtrim,"123","123",0));
                print_test_result(test_str_join_trim(ft_strtrim,"123123123","123",0));
        // printf("itoa:\n");
        //         print_test_result(test_itoa(ft_itoa,1234567890,"1234567890"));
        //         print_test_result(test_itoa(ft_itoa,-1234567890,"-1234567890"));
        //         print_test_result(test_itoa(ft_itoa,0,"0"));
        //         print_test_res