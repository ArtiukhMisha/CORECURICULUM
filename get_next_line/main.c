
#include "tests.h"

int main(int argc, char **argv)
{
	char *	file_name;
	int	fd;
	char *line;
	if (argc!=2)
		return (0);
	file_name = argv[1];
	printf("\n FILE : %s",file_name);
	fd = open(file_name,O_RDONLY);
	line = get_next_line(fd);
	printf("\nline - %s",line);
	line = get_next_line(fd);
	printf("\nline - %s",line);
	// line = get_next_line(fd);
	// printf("\nline - %s",line);
	close(fd);
	return (0);
}
