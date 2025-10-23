# include <stdio.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

int ft_read(int fd, char *str,int size)
{
	return (read(fd,str,size));
}
int main ()
{
	int fd;
	char str[1000];
	fd = open("test.txt",O_RDONLY);
	// while (1)
	// {
	// 	if(!read(fd,str,1))
	// 		break;
	// }
	ft_read(fd,str,5);
	printf("\n%s",str);

	read(fd,str,5);
	printf("\n%s",str);

	// read(fd-5,str,5);
	// printf("\n%s",str);

	// read(fd-5,str,5);
	// printf("\n%s",str);
	return (0);
}
