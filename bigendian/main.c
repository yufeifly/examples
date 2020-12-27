#include <stdio.h>

void first_method() {
	short int a = 0x1122;
	char b = *(char*)&a;
	if (b == 0x11) {
		printf("is big endian\n");
	} else {
		printf("is small endian\n");
	}
}

// 这种方法的原理是 union的存放顺序是所有成员都从地地址开始存放，且所有成员共享存储空间。
void second_method() {
	union tmp {
		short int a;
		char b;
	}tmp;
	tmp.a = 0x1234;
	if (tmp.b == 0x12) {
		printf("is big endian\n");
	}else {
		printf("is samll endian\n");
	}
}

int main() {
	first_method();
	second_method();
}
