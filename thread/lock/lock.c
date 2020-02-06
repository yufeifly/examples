#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
 
pthread_mutex_t mutex ;

void *print_msg(void *arg){
    int i=0;
	int *num = (int*)arg;
    for(i=0;i<10;i++){
		pthread_mutex_lock(&mutex);
        printf("output %d : %d\n",*num,i);
		pthread_mutex_unlock(&mutex);
        //usleep(100);
    }
}

int main(int argc,char** argv){
	pthread_t id1;
    pthread_t id2;
    pthread_t id3;
    pthread_mutex_init(&mutex,NULL);

	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
    pthread_create(&id1,NULL,print_msg,(void*)(&num1));
    pthread_create(&id2,NULL,print_msg,(void*)(&num2));
    pthread_create(&id3,NULL,print_msg,(void*)(&num3));

    pthread_join(id1,NULL);
    pthread_join(id2,NULL);
    pthread_join(id3,NULL);

    pthread_mutex_destroy(&mutex);
    return 1;
}

