#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	char *cmd = "gcc";
	char *argv[3];
	argv[0] = "demo.c";
	argv[1] = "-o";
	argv[2] = "demo";
	int pid = -1;
	if((pid = fork()) == 0)
	{
		execvp(cmd, argv);
	}
 	return 0;
}
