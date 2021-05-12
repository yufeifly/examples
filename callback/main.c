#include <stdio.h>
#include "para_callback.h"

void say_hello(void *str){
	printf("Hello, %s\n", (const char*)str);
}

void count_numbers(void *num) {
	int i;
	for (int i=1;i<*(int*)num;i++) {
		printf("%d ",i);
		putchar('\n');
	}
}

int main(void) {
	repeat_three_times(say_hello, "yufei");
	int p = 2;
	repeat_three_times(count_numbers, (void*)(&p));
	return 0;
}
