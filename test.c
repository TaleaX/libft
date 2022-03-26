#include "libft.h"
#include <string.h>
#include </usr/include/bsd/string.h>
#include <bsd/bsd.h>
#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include <stdlib.h>

void printArray(int *arr, int n)
{
    for (int i=0; i<n; i++)
        printf("%d ", *arr+i);
}

/*int    arr_cmp(void *arr1, void *arr2, size_t size)
{
    char    *arr1_c = (char *) arr1;
    char    *arr2_c = (char *) arr2;

    while (size--)
    {
        if (*arr1_c++ != *arr2_c++)
            return (0);
    }
    return (1);
}*/


typedef struct {
    int a;
}   struct_;

typedef enum {
    MON,
    TUE
}   enum_;

int arr_cmp(void *arr, void *arr2, size_t size)
{
    size_t  i;
    char    *d_arr = (char *) arr;
    char    *d_arr2 = (char *) arr2;

    i = 0;
    while (i < size)
    {
        if (d_arr[i] != d_arr2[i])
        {
            printf("original = %c, ft = %c", d_arr[i], d_arr2[i]);
            //fflush(stdout);
            return (0);
        }
        i++;
    }
    return (1);
}

void    test1_out()
{
    for (int i = -5; i < 500; i++)
    {
        printf("isalpha = %d, isdigit = %d, isalnum =  %d, isascii = %d, isprint = %d\n", isalpha(i), isdigit(i), isalnum(i), isascii(i), isprint(i));
        printf("ft_isalpha = %d, ft_isdigit = %d, ft_isalnum =  %d, ft_isascii = %d, ft_isprint = %d\n", ft_isalpha(i), ft_isdigit(i), ft_isalnum(i), ft_isascii(i), ft_isprint(i));
        printf("\n-------------------------------------------------\n\n\n");
    }
}



/** TEST 1
            isalpha()
        	isdigit()
            isalnum()
            isascii()
            isprint()
**/
int     test1()
{
    for (int i = -500; i < 500; i++)
    {
        if (!(ft_isalpha(i) && isalpha(i)) && !(!ft_isalpha(i) && !isalpha(i)))
        {
            printf("ft = %d  org = %d i = %d\n", ft_isalpha(i), isalpha(i), i);
            //return (0);
        } else {
            printf("TRUE \t ft = %d  org = %d i = %d\n", ft_isalpha(i), isalpha(i), i);
        }
        /*if (ft_isdigit(i) != isdigit(i)) return (0);
        if (ft_isalnum(i) != isalnum(i)) return (0);
        if (ft_isascii(i) != isascii(i)) return (0);
        if (ft_isprint(i) != isprint(i)) return (0);*/
        /*if (ft_toupper(i) != toupper(i))
        {
            printf("ft = %d  org = %d\n", ft_toupper(i), toupper(i));
            return (0);
        }
        if (ft_tolower(i) != tolower(i))
        {
            printf("ft = %d  org = %d\n", ft_tolower(i), tolower(i));
            return (0);
        }*/

    }
    return (1);
}

//memmove()
int     test2()
{
    struct_     *s_dest = (struct_ *)malloc(sizeof(struct_) * 4);
    struct_     *s_dest_ft = (struct_ *)malloc(sizeof(struct_) * 4);
    struct_     s;
    struct_     *s_src = &s;
    int         num_src[5] = {91, 4 , 4, 5, 1};
    int         *num_dest = num_src;
    int         *num_dest_ft = num_src;
    int         *num_dest_ret = num_src;
    int         *num_dest_ret_ft = num_src;
    char        *c_dest = (char *)malloc(sizeof(char) * 8);
    char        *c_dest_ft = (char *)malloc(sizeof(char) * 8);
    char        *c_src = "Hello,";

    s.a = 8;
    memcpy(s_dest, s_src, sizeof(*s_src));
    ft_memcpy(s_dest_ft, s_src, sizeof(*s_src));
    num_dest_ret = memcpy(num_dest, num_src, sizeof(num_src));
    num_dest_ret_ft = ft_memcpy(num_dest_ft, num_src, sizeof(num_src));
    memcpy(c_dest, c_src, sizeof(*c_src) + strlen(c_src));
    ft_memcpy(c_dest_ft, c_src, sizeof(*c_src)+strlen(c_src));
    while (s_dest->a)
    {
        printf("s_dest->a = %d, s_dest_ft->a = %d\n", s_dest->a, s_dest_ft->a);
        if (s_dest->a != s_dest_ft->a) return (0);
        s_dest++;
        s_dest_ft++;
    }
    if (!arr_cmp(num_dest, num_dest_ft, 5)) return (0);
    if (!arr_cmp(num_dest_ret, num_dest_ret_ft, 5)) return (0);
    if (!arr_cmp(c_dest, c_dest_ft, strlen(c_dest))) return (0);
    num_dest = memcpy(num_src, num_src, 0);
    num_dest_ft = ft_memcpy(num_src, num_src, 0);
    if (!arr_cmp(num_dest, num_dest_ft, 5)) return (0);
    return (1);

}

//memcpy()
int     test3()
{
    struct_     *s_dest = (struct_ *)malloc(sizeof(struct_) * 4);
    struct_     *s_dest_ft = (struct_ *)malloc(sizeof(struct_) * 4);
    struct_     s;
    struct_     *s_src = &s;
    int         num_src[5] = {91, 4 , 4, 5, 1};
    int         *num_dest = num_src;
    int         *num_dest_ft = num_src;
    int         *num_dest_ret = num_src;
    int         *num_dest_ret_ft = num_src;
    char        *c_dest = (char *)malloc(sizeof(char) * 8);
    char        *c_dest_ft = (char *)malloc(sizeof(char) * 8);
    char        *c_src = "Hello,";

    s.a = 8;
    memcpy(s_dest, s_src, sizeof(*s_src));
    ft_memcpy(s_dest_ft, s_src, sizeof(*s_src));
    num_dest_ret = memcpy(num_dest, num_src, sizeof(num_src));
    num_dest_ret_ft = ft_memcpy(num_dest_ft, num_src, sizeof(num_src));
    memcpy(c_dest, c_src, sizeof(*c_src) + strlen(c_src));
    ft_memcpy(c_dest_ft, c_src, sizeof(*c_src)+strlen(c_src));
    while (s_dest->a)
    {
        if (s_dest->a != s_dest_ft->a) return (0);
        s_dest++;
        s_dest_ft++;
    }
    if (!arr_cmp(num_dest, num_dest_ft, 5)) return (0);
    if (!arr_cmp(num_dest_ret, num_dest_ret_ft, 5)) return (0);
    if (!arr_cmp(c_dest, c_dest_ft, strlen(c_dest))) return (0);
    num_dest = memmove(num_src, num_src, 0);
    num_dest_ft = ft_memmove(num_src, num_src, 0);
    if (!arr_cmp(num_dest, num_dest_ft, 5)) return (0);
    return (1);

}

//memset() and bzero()
int test4()
{
    int num_dest[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char c_dest[] = "I don't like writing tests :(";
    int num_dest_ft[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char c_dest_ft[] = "I don't like writing tests :(";
    int str_len = strlen(c_dest);

    memset(num_dest, 10, 4);
    ft_memset(num_dest_ft, 10, 4);
    if (!arr_cmp(num_dest, num_dest_ft, 10)) return (0);
    
    memset(num_dest, 'c', 2);
    ft_memset(num_dest_ft, 'c', 2);
    if (!arr_cmp(num_dest, num_dest_ft, 10)) return (0);
    
    memset(num_dest, 0, 8);
    ft_memset(num_dest_ft, 0, 8);
    if (!arr_cmp(num_dest, num_dest_ft, 10)) return (0);
    
    memset(num_dest, 97, 4);
    ft_memset(num_dest_ft, 97, 4);
    if (!arr_cmp(num_dest, num_dest_ft, 10)) return (0);
  
    memset(c_dest, 0, 4);
    ft_memset(c_dest_ft, 0, 4);
    if (!arr_cmp(c_dest, c_dest_ft, str_len)) return (0);
    
    memset(c_dest, 10, 4);
    ft_memset(c_dest_ft, 10, 4);
    if (!arr_cmp(c_dest, c_dest_ft, str_len)) return (0);
    
    memset(c_dest + 2, '.', sizeof(char) * 4);
    ft_memset(c_dest_ft + 2, '.', sizeof(char) * 4);
    if (!arr_cmp(c_dest, c_dest_ft, str_len)) return (0);
    
    printf("\n\n");
    bzero(c_dest, 8);
    ft_bzero(c_dest_ft, 8);
    if (!arr_cmp(c_dest, c_dest_ft, str_len)) return (0);
    bzero(c_dest, 0);
    ft_bzero(c_dest_ft, 0);
    if (!arr_cmp(c_dest, c_dest_ft, str_len)) return (0);
    //printf("%s\n%s\n", c_dest + 8, c_dest_ft + 8);
    return (1);
}

//strlcat() strlcpy() strlen()

int test5()
{
    /*char    dest[] = "I don't like writing tests :(";
    char    dest_ft[] = "I don't like writing tests :(";
    char    *src = "You go!";
    char    *src_ft = "You go!";*/
    //char    *src_long = "Das ist ein laaaaaaaaaaaaaaaaaaaanger Text";
    //char    *src_long_ft = "Das ist ein laaaaaaaaaaaaaaaaaaaanger Text";
    //int     ret;
    //int     ret_ft;

    /*strlcpy(dest, src, sizeof(dest));
    ft_strlcpy(dest_ft, src_ft, sizeof(dest_ft));
    if (!arr_cmp(dest, dest_ft, sizeof(dest))) return (0);
    strlcpy(dest, src_long, sizeof(dest));
    ft_strlcpy(dest_ft, src_long_ft, sizeof(dest_ft));
    if (!arr_cmp(dest, dest_ft, sizeof(dest))) return (0);*/
    /*ret = strlpy(dest, src, sizeof(dest));
    ret_ft = ft_strlcpy(dest_ft, src_ft, sizeof(dest_ft));
    if (ret != ret_ft) return (0);
    ret = strlcpy(dest, src_long, sizeof(dest));
    ret_ft = ft_strlcpy(dest_ft, src_long_ft, sizeof(dest_ft));
    if (ret != ret_ft) return (0);*/
    return (1);
}

int main(void)
{
    //test2_out();
    printf("%d %d %d %d \n",test1(), test2(), test3(), test4());
    return (0);
}