#include <stdio.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

char *ft_strcat(char *dest, char *src)
{
    printf("dest: %s\n", dest);
    printf("src: %s\n", src);
    int i;
    int j;
    //char *ret_str = dest;
    printf("dest: %s\n", dest);
    
    i = ft_strlen(dest);
    printf("i(len): %d\n", i);
    j = 0;
    while(j <= i+1)// +1しているのは、終端文字まで入れる必要があるため。
    {
        printf("繰り返しi: %d回目　", i);
        printf("繰り返しj: %d回目  \n", j);
        if (dest[i+j] == '\0')
        {
            printf("check");
        }
        dest[i+j] = src[j];
        printf("dest: %s\n", dest);
        j++;
    }
    return (dest);
}

// https://hiroyukichishiro.com/strcat-function-in-c-language/
char *mystrcat(char *dest, const char *src)
{
  	char *tmp = dest;
	printf("tmp: %s\n", tmp);

	while (*dest) {
    dest++;
    printf("dest: %sa\n", dest);  
	}

  while ((*dest++ = *src++)) {
		printf("dest: %sa\n", dest);  
	}
	
	return tmp;
}

int main(void)
{
	char dest[] = "ABCD";
	char src[] = "DEFGH";

	printf("自作: %s\n", ft_strcat(dest, src));
	printf("自作: %s\n", dest);
	
	char dest2[] = "ABCD";
	char src2[] = "DEFGH";
	printf("【参考の処理を追う】\n");
	printf("拾ってきたやつ: %s", mystrcat(dest2, src2));
}

// 思ったことをつらつらと書く
// 2つインクリメントを用意するやり方なら、、
// iをdestのお尻のインデックス（この例"ABC"の場合、index3='\0'）を指させて、そこからsrc[j]をぶち込めばいけるのでは？
// なにかしらで既存のdestの配列の長さを取得できると楽そう→おやおや？



