#ifndef LIBFT_H /* Include guard */
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_T_MAX ((size_t)-1)

int ft_isalnum(int);
int ft_isspace(int);
int ft_isalpha(int);
int ft_isascii(int);
int ft_isdigit(int);
int ft_isprint(int);
int ft_strlen(const char *);
void *ft_memset(void *, int, size_t);
void ft_bzero(void *, size_t);
void *ft_memcpy(void *, const void *, size_t);
void *ft_memmove(void *, const void *, size_t);
int ft_toupper(int);
int ft_tolower(int);
char *ft_strchr(const char *, int);
char *ft_strrchr(const char *, int);
int ft_strncmp(const char *, const char *, size_t);
int ft_strcmp(const char *, const char *);
void *ft_memchr(const void *, int, size_t);
int ft_memcmp(const void *, const void *, size_t);
char *ft_strnstr(const char *, const char *, size_t);
int ft_atoi(const char *);
char *ft_strcpy(char *, const char *);
char *ft_strncpy(char *, const char *, size_t);
char *ft_strcat(char *, const char *);
char *ft_strncat(char *, const char *, size_t);
size_t ft_strlcpy(char *, const char *, size_t);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif /**  LIBFT_H */
