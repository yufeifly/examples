#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node{
	int a;
	int b;
}Node;

int main(int argc, char *argv[])
{
	if(argc <= 1) {
		printf("retry\n");
		return 0;
	}
	int locate = atoi(argv[1]);
	
    FILE* fstream;
	Node node1;
	node1.a = 234;
	node1.b = 345;

    fstream=fopen("test.txt","r+");
	fseek(fstream, locate*sizeof(node1),0);
    if(fstream==NULL)
    {
        printf("open file test.txt failed!\n");
        exit(1);
    }
	if(fwrite(&node1,1,sizeof(Node),fstream) >= 0) 
	{
		printf("size of msg : %d\n", (int)sizeof(node1));
		printf("open file test.txt succeed!\n");
	}
    fclose(fstream);
    return 0;
}
