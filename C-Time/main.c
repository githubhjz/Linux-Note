#include "stdio.h"
#include "stdint.h"
#include "time.h"

int main(void)
{
	time_t now_time=0;
	
	now_time = time(NULL);
	
	printf("now ts:%u\n",now_time);
	printf("ctime:%s",ctime(&now_time));
	return 0;
}
