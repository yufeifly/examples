#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int a = 100;

void *mythread1(void)
{
	int i;
	for(i = 0; i < 10; i++) {
		printf("This is the 1st pthread,created by xiaoqiang!\n");
		printf("a is %d\n",a++);
		sleep(1);
	}
}
 
void *mythread2(void)
{
	int i;
	for(i = 0; i < 10; i++) {
		printf("This is the 2st pthread,created by xiaoqiang!\n");
		printf("a is %d\n",a++);
		sleep(1);
	}
}
 
int main(int argc, const char *argv[])
{
	//int i = 0;
	int ret = 0;
	pthread_t id1,id2;
 
	ret = pthread_create(&id1, NULL, (void *)mythread1,NULL);
	if(ret) {
		printf("Create pthread error!\n");
		return 1;
	}
 
	ret = pthread_create(&id2, NULL, (void *)mythread2,NULL);
	if(ret) {
		printf("Create pthread error!\n");
		return 1;
	}
	
	pthread_join(id1,NULL);
	pthread_join(id2,NULL);
 
	return 0;
}
