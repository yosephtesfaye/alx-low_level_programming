#include <stdio.h>
/**
 * multiple - finds multiple of 3 and 5
 * 
 */
int main(void)
{
	int i;
       int sum = 0;
	
	for(i = 3; i <= 1024; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n",sum);
	return (0);
}
