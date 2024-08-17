#include <stdio.h>

int main()
{
	int starnum;
	printf("Please enter the number of stars that need to be arranged: ");
	scanf("%d", &starnum);
	int x,y;
	for(x=starnum; x>0;x--)
	{
		for(y=x;y>0;y--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
