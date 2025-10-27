
#include "tests.h"

int main(int argc, char **argv)
{
	char *	file_name;
	int	fd;
	// int counter = 1;
	char *line;
	if (argc!=2)
		return (0);
	file_name = argv[1];
	printf("\n FILE : %s",file_name);
	fd = open(file_name,O_RDONLY);
	// while (ft_strlen(line))
	// {
	// 	line = get_next_line(fd);
	// 	printf("\nline - %d - %s", counter, line);
	// 	counter++;
	// }
	line = get_next_line(fd);
	printf("\n1line - %s",line);
	line = get_next_line(fd);
	printf("\n2line - %s",line);
	line = get_next_line(fd);
	printf("\n3line - %s",line);
	line = get_next_line(fd);
	printf("\n4line - %s",line);
	line = get_next_line(fd);
	printf("\n5line - %s",line);
	printf("\n5line - %s",line);
	close(fd);
	return (0);
}
