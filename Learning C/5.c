#include <stdio.h>

int main()
{
	int a=4;
	int y;
	y = --a + a++;
	printf("%d\n",y);
	printf("%d\n",a);
	return 0;
}
