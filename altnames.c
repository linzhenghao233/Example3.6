/* altnames.c -- 可移植整数类型名*/
#include <stdio.h>
#include <inttypes.h>	//支持可移植类型

int main(void) {
	int32_t me32;	//me32是一个32位有符号整数变量

	me32 = 45933945;
	printf("First, assume int32_t is int:");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any assumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h");
	printf("me32 = %" PRId32 "\n", me32);

	return 0;
}

//运行结果：
//First, assume int32_t is int:me32 = 45933945
//Next, let's not make any assumptions.
//Instead, use a "macro" from inttypes.hme32 = 45933945