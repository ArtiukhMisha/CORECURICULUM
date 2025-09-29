#include "../libft/libft.h"
#include "../tests/lib_tests/test_lib.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    int	counter;

	counter = 0;
    while ( n && *(char *)(src + counter+1))
    {
        n--;
        counter++;
    }

	while(counter)
    {
        printf("%c : %c\n",*(char*)(dest + counter),*(char*)(src + counter));
        printf("%d\n",counter);
        *(int *)(dest + counter) = *(int *)(src + counter);
        counter--;
    }

	return (dest);
}
int main()
{
    const char *src = "1234567890";
    char res[100];
    char output[100];
    char s1[100] = "1234567890";
        char s2[100] = "";
    int i;
    i = strlcat(s1,s2);
    memcpy(res,src,10);
    memcpy(output,src,10);

    ft_memmove(res+2, res  , 3);
    memmove(output+2, output, 3);
    printf("%s\n",res);
    printf("%s\n",output);
    return 0;;
}
