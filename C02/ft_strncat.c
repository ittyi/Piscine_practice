#include <stdio.h>

// 型を調べるためのマクロ。
// ググってひっぱってきました。
// https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q11233193611

int ft_strlen(char *str)
{
    int len;
    //printf("%s\n", str);
    len = 0;
    while(str[len] != '\0')
    {
        len++;
    }
    return (len);
}

char    *ft_strcat(char *dest, char *src)
{
    int    i;
    int    j;

    i = ft_strlen(dest);
    j = 0;
    while (j <= i + 1)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[ft_strlen(dest)]  = '\0';
    return (dest);
}

// char*ft_strncat(char *dest, char *src, unsigned int nb)
// {
//     char *top;
//     unsigned int i;
    
//     i = 0;
//     top = dest;
//     while (*dest != '\0')
//     {
//         dest++;
//     }
//     while (src[i] != '\0' && i < nb)
//     {
//     dest[i] = src[i];
//     i++;
//     }
//     dest[i] = '\0';
//     return (top);
// }

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    printf("%s\n", dest);
    printf("%s\n", src);
    
    unsigned int i;
    char *ret_str;
    ft_strcat(dest, src);
    //printf("typename(ft_strlen(ret_str)): %s\n", typename(ft_strlen(ret_str)));
    i = ft_strlen(dest);
    //printf("i: %d\n", i);
    while(i <= nb)
    {
        printf("check\n");
        ret_str[i] = '\0';
        i--;
    }
    return (ret_str);
}

int main(void)
{
    unsigned int nb;
    char *dest = "ABC";
    char *src = "DEF";
    nb = 5;

    printf("%s\n", ft_strncat(dest, src, nb));
    return (0);
}