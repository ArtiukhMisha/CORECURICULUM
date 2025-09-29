/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:00:28 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/29 22:39:00 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_LIB_H
# define TEST_LIB_H
#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stddef.h>
#include <stdlib.h>

#include "stdio.h"
#include "../../libft/libft.h"

void print_test_result(int boolin);
int test_func_char(int (*func)(char), char input, int output);
int test_func_str(int (*func)(char *), char *input, int output);
int test_func_str_const(int (*func)(const char *), const char *input, int output);
int test_func_str_size(size_t (*func)(char *), char *input, int output);
int test_func_int(int (*func)(int), int input, int output);
int test_memset(void *(*func_to_test)(void *s, int c, size_t n),
                void *(*func_origin)(void *s, int c, size_t n),
                 int int_input, size_t size_input);
int test_bzero(void (*func_to_test)(void *s, size_t n),
               void (*func_origin)(void *s, size_t n),
               size_t size_input);
int test_memcpy(void *(*func_to_test)(void *dest, const void *src, size_t n),
               size_t size_input);
int test_memmove(void *(*func_to_test)(void *dest, const void *src, size_t n),
                void *(*origin_func)(void *dest, const void *src, size_t n),
               size_t size_input, int mv);
int test_strlcpy(size_t (func_to_test)(char *dst, const char *src, size_t size),
               char *dest1, const char *src1, size_t size_input);
int test_strlcat(size_t (func_to_test)(char *dst, const char *src, size_t size),
                 size_t (func_original)(char *dst, const char *src, size_t size),
               char *dest1, const char *src1, size_t size_input);
#endif
