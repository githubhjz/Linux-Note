#include "stdio.h"
#include "stdint.h"


#define TEST(abc) #abc
#define TEST1(abc,efg) char name_##abc##efg##_end[] = "1234567890"
#define TEST2(abc,efg) char name_##abc##efg[] = "1234567890"

int main(void)
{
	TEST1(a,b);
	TEST2(c,d);

	printf("#define TEST(abc) #abc:%s\n",TEST(123));
	
	printf("#define TEST1(abc,efg) char name_##abc##efg##_end[] = \"1234567890\":%s\n",name_ab_end);
	printf("#define TEST2(abc,efg) char name_##abc##efg[] = \"1234567890\":%s\n",name_cd);
	return 0;
}
