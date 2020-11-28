#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node{
	int a;
	int b;
}Node;

int main(int argc, char *argv[])
{
	if(argc <= 1) 
	{
		printf("retry\n");
	}
	int locate = atoi(argv[1]);

    FILE* fstream;
	Node node1;

    fstream=fopen("test.txt","r+");
    if(fstream==NULL)
    {
        printf("open file test.txt failed!\n");
        exit(1);
    }
	fseek(fstream, locate*sizeof(Node), SEEK_SET);
	if(fread(&node1,1,sizeof(Node),fstream) >= 0) 
	{
		printf("node1.a : %d\nnode1.b : %d\n",node1.a,node1.b);
	}
    fclose(fstream);
    return 0;
}
