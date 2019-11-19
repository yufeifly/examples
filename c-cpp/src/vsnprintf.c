#include <stdio.h>
#include <stdarg.h>

void test(const char *format, ...);

int main(void)
{
	test("%s_%s_%s", "yufei", "hahaha","1234");
	return 0;
}

void test(const char * format, ...)
{
	char buf[4069];
	va_list list;
	va_start(list,format);
	vsnprintf(buf,4069,format,list);
	va_end(list);
	printf("%s\n",buf);
}
