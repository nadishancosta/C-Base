#include <stdio.h>

int main()
{
	int inputnum;
	printf("Please enter the number of stars: ");
	scanf("%d",&inputnum);
	int x,y,z;
	for(x=inputnum;x>0;x--)
	{
		for(y=0;y<(x-1);y++)
		{
			printf(" ");
		}
		for(z=inputnum-y;z>0;z--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
