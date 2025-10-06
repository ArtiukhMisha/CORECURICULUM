/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lib.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:00:28 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/06 10:18:44 by martiukh         ###   ########.fr       */
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
int test_func_str_size(size_t (*func)(const char *), char *input, int output);
int test_func_int(int (*func)(int), int input, int output);
int test_itoa(char *(*func_to_test)(int), int a, char *output);
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
int test_strdup(char *(func_to_test)(char *src),
                char *src1);
int test_strchr(char *(func_to_test)(const char *s, int c),
                char *(func_original)(const char *s, int c),
                const char *s, int c);
int test_memchr(void *(*func_to_test)(const void *s, int c, size_t n),
                void *(*func_original)(const void *s, int c, size_t n),
                const void *s, int c, size_t n);
int test_strncmp(int (func_to_test)(const char *s1, const char *s2, size_t n),
          int (func_original)(const char *s1, const char *s2, size_t n),
          char *s1, char *s2, size_t n);
int test_strnstr(char *(*func_to_test)(const char *big,	const char *little, size_t len),
          char *(*func_original)(const char *big,	const char *little, size_t len),
          const char *big,	const char *little, size_t len);
int test_memcmp(int (func_to_test)(const void *s1, const void *s2, size_t n),
          int (func_original)(const void *s1, const void *s2, size_t n),
          const void *s1, const void *s2, size_t n);
int test_calloc(void *(func_to_test)(size_t nmemb, size_t size),
          void *(func_original)(size_t nmemb, size_t size),
          size_t nmemb, size_t size);
int test_substr(char *(*func_to_test)(char const *s, unsigned int start, size_t len),
                                      char const *s, unsigned int start, size_t len,
                                      char *output);
int test_str_join_trim(char *(*func_to_test)(char const *s1, char const *s2),
                 char const *s1, char const *s2,
                 char *output);
int test_strmapi(char *(*func_to_test)(char const *s, char (*f)(unsigned int, char)),
                 char const *s, char (*f)(unsigned int, char),
                 char *output);                          
#endif
