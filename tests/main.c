#include <fcntl.h>
#include "../get_next_line.h"

int	main()
{
	int		fd;
	char*	line;

	line = NULL;
	fd = open("./tests/test.txt", O_RDONLY);
	if (fd == -1)
		exit(EXIT_FAILURE);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		printf("%s", line);
		free(line);
	}
	return (0);
}