#include <stdio.h>

int main()
{
	int starsinput;
	printf("Please enter the number of stars: ");
	scanf("%d",&starsinput);
	int x,y;
	for(x=1;x<=starsinput;x++)
	{
		for(y=x;y>0;y--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
