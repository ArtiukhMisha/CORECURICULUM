/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:35:53 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/16 13:06:29 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "test_lib.h"
#include <ctype.h>

char	ft_tol(unsigned int i,char c);
void	ft_tolo(unsigned int i,char *c);
void	lst_out(t_list *list);

int	main(int argc, char **argv)
{
	if (argc || argv)
		printf("Start testing\n");

	print_test_result(test_func_char(ft_isalpha,'A',1));
	print_test_result(test_func_char(ft_isalpha,'a',1));
	print_test_result(test_func_char(ft_isalpha,'Z',1));
	print_test_result(test_func_char(ft_isalpha,'z',1));
	print_test_result(test_func_char(ft_isalpha,'A'-1,0));
	print_test_result(test_func_char(ft_isalpha,'z'+1,0));

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
void	ft_tolo(unsigned int i,char *c)
{
    printf("\n%c - ",*c);
	if ('A' <= *c && *c <= 'Z')
	{
		*c = (*c + ('a' - 'A'));
	}
    printf("%c",*c);
}
void	lst_out(t_list *list)
{
    t_list *cpy;
    cpy = list;
    while (1)
    {
        printf("\n%s", (char *) cpy->content);
		if(!(cpy->next))
		{break;}
        cpy = cpy->next;
    }
}

// _result(test_str_join_trim(ft_strtrim,"123","","123"));
//                 print_test_result(test_str_join_trim(ft_strtrim,"","123",""));
//                 print_test_result(test_str_join_trim(ft_strtrim,"123","123",0));
//                 print_test_result(test_str_join_trim(ft_strtrim,"123123123","123",0));
        // printf("itoa:\n");
        //         print_test_result(test_itoa(ft_itoa,1234567890,"1234567890"));
        //         print_test_result(test_itoa(ft_itoa,-1234567890,"-1234567890"));
        //         print_test_result(test_itoa(ft_itoa,0,"0"));
        //         print_test_res
