#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int oc;
char* b_opt_arg;
 
int main(int argc, char** argv)
{
	while ((oc = getopt(argc, argv, "ab:cd:")) != -1)
	{
		switch (oc)
		{
			case 'a':
				printf("option a\n");
				break;
 
			case 'b':
				printf("option b: %s\n", optarg);
                break;
 
			case 'c':
				printf("option c\n");
                break;
 
			case 'd':
				printf("option d:%d\n", atoi(optarg));
                break;
 
			default:
				printf("unknown options\n");
				exit(EXIT_FAILURE);
		}
	}
 
	exit(EXIT_SUCCESS);
}
