# include <stdio.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

int ft_read(int fd, char *str,int size)
{
	return (read(fd,str,size));
}
void func (char *mem)
{
	printf("%s",mem);
	mem = "321";
}
int main ()
{
	static char *mem = "123";

	func(mem);
	func(mem);
	// read(fd-5,str,5);
	// printf("\n%s",str);

	// read(fd-5,str,5);
	// printf("\n%s",str);
	return (0);
}
