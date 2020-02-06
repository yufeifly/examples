#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node{
	int a;
	int b;
}Node;

int main()
{
    FILE* fstream;
	Node node1;

    fstream=fopen("test.txt","r+");
    if(fstream==NULL)
    {
        printf("open file test.txt failed!\n");
        exit(1);
    }
	fseek(fstream, 1*sizeof(Node), SEEK_SET);
	if(fread(&node1,1,sizeof(Node),fstream) >= 0) 
	{
		printf("node1.a : %d\nnode1.b : %d\n",node1.a,node1.b);
	}
	fseek(fstream, 50*sizeof(Node), SEEK_SET);
	if(fread(&node1,1,sizeof(Node),fstream) >= 0) 
	{
		printf("node1.a : %d\nnode1.b : %d\n",node1.a,node1.b);
	}
	fseek(fstream, 25*sizeof(Node), SEEK_SET);
	if(fread(&node1,1,sizeof(Node),fstream) >= 0) 
	{
		printf("node1.a : %d\nnode1.b : %d\n",node1.a,node1.b);
	}
	fseek(fstream, 20*sizeof(Node), SEEK_SET);
	if(fread(&node1,1,sizeof(Node),fstream) >= 0) 
	{
		printf("node1.a : %d\nnode1.b : %d\n",node1.a,node1.b);
	}

    fclose(fstream);
    return 0;
}
