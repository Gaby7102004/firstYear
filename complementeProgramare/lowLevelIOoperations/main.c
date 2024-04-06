#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd1, fd2, i;
	unsigned char buffer[20];
	ssize_t nr;
	char *fileName = 0;

	fileName = (char*)malloc(100*sizeof(char));
	if(!fileName){
		
	 	fprintf(stderr, "Memory alocation failed!");
	 	exit(EXIT_FAILURE);
	}

	printf("Read the file name: ");
	scanf("%s", fileName);


	fd1 = open(fileName, O_WRONLY | O_CREAT | O_TRUNC, S_IREAD | S_IWRITE);
	if (fd1 == -1)
	{
		perror(fileName);
		exit(EXIT_FAILURE);
	}

	for (i = 1; i <= argc; i++)
	{
		fd2 = open(argv[i], O_RDONLY);
		if (fd2 == -1)
		{
			perror(argv[i]);
			exit(EXIT_FAILURE);
		}
		while ( (nr = read(fd2, buffer, 20)) > 0)
		{
			write(fd1, buffer, nr);
		}

		close(fd2);
	}

	close(fd1);
	
	memset(fileName, 0, 100*sizeof(char));
	fileName = 0;

	return 0;
}