#include "main.h"
/**
* read_textfile - read a textfile and print it to the standard output
* @filename: string
* @letters: number of letters it should read and print
* Return: always 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str;
	ssize_t letters2;

	if (!filename && !letters)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	str = (char *)malloc(sizeof(char) * letters);

	if (!str)
		return (0);

	letters2 = read(fd, str, letters);

	if (letters2 == -1)
	{
		free(str);
		return (0);
	}

	letters2 = write(STDOUT_FILENO, str, letters2);

	free(str);
	close(fd);

	return (letters2);
}
