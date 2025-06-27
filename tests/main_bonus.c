#include "../get_next_line_bonus.h"

int	main(void)
{
	int		fd1, fd2;
	char	*line1, *line2;

	fd1 = open("./tests/test.txt", O_RDONLY);
	if (fd1 == -1)
	{
		exit(EXIT_FAILURE);
	}

	fd2 = open("./tests/test2.txt", O_RDONLY);
	if (fd2 == -1)
	{
		close(fd1);
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		line1 = get_next_line(fd1);
		line2 = get_next_line(fd2);

		if (!line1 && !line2)
			break;

		if (line1)
		{
			printf("[fd1] %s", line1);
			free(line1);
		}

		if (line2)
		{
			printf("[fd2] %s", line2);
			free(line2);
		}
	}

	close(fd1);
	close(fd2);
	return (0);
}
