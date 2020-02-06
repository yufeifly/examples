#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/select.h>
#include <sys/time.h>
#include <sys/types.h>
//#include <ncurses.h>

int a = 100;

void *mythread1(void)
{
	int i;
	for(i = 0; i < 10; i++) {
		printf("This is the 1st pthread,created by xiaoqiang!\n");
		printf("a is %d\n",a++);
		sleep(3);
	}
	return NULL;
}
 
void *mythread2(void)
{
	while(1) {
		int key = -1;
		fd_set set; 
		FD_ZERO(&set); 
		FD_SET(0,&set);

		struct timeval timeout;
		timeout.tv_sec = 0;
		timeout.tv_usec= 5 * 100*1000;
		int err = select(1, &set, NULL, NULL, &timeout);
		if(err < 0) {
			printf("select err\n");
			return NULL;
		} 
		else if(err == 0) {
			printf("timeout\n");
			continue;
		}else if(FD_ISSET(0,&set)) {
			printf("fuck\n");
			key = getc(stdin);
			//getchar();
			switch(key) {
				case 'q':
					printf("input : %c\n",key);
					return NULL;
				default :
					printf("input : %c\n",key);
					break;
			}
		}
	}
	return NULL;
}
 
int main(int argc, const char *argv[])
{
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
